#include <stdio.h>
#include<stdlib.h>

typedef struct st
{
    int coff,exp;
    struct st* next;
} node;

node *first,*second,*final;
node *create(node*);
node *addition(node*,node*);
void display(node *);

int main(){
    int ch;
    first=second=NULL;
    while(1){
        printf("\n1.create first polynomial.\n");
        printf("2.create second polynomial.\n");
        printf("3.add two polynomials.\n");
        printf("4.Exit\n");
        printf("Enter your choice:\n ");
        scanf("%d", &ch);

        switch(ch){
            case 1: first=create(first);
                    display(first);
                    break;
            case 2: second=create(second);
                    display(second);
                    break;
            case 3: final=addition(first,second);
                    display(final);
                    break;
            default: exit(0);
        }
    }
}    

node *create(node *start){
    node*temp,*current;
    int c,x;
    while(1){
        printf("Enter coefficient : ");
        scanf("%d", &c);
        printf("Enter exponential: ");
        scanf("%d", &x);
        if(c==0 || x==0){
            break;
        }
        temp=(node*)malloc(sizeof(node));
        if(start==NULL){
            start=temp;
            current=temp;
        }
        else{
            current->next=temp;
            current=temp;
        }
        current->coff=c;
        current->exp=x;
        current->next=NULL;
    }
    return(start);
}

void display(node*start){
    if(start==NULL){
        printf("Nothing to display\n");
        return;
    }
    for(;start!=NULL;start=start->next){
        printf( " %dx^%d +",start->coff,start->exp);
    }
    printf("\0");
}

node *addition(node *s1, node *s2){
    node *temp, *current;
    final=NULL;
    while(s1!=NULL && s2!=NULL){
        temp=(node*)malloc(sizeof(node));
        if(final==NULL){
            final=temp;
            current=temp;
        }
        else{
            current->next=temp;
            current=temp;
        }
        if(s1->exp>s2->exp){
            current->exp=s1->exp;
            current->coff=s1->coff;
            s1=s1->next;
        }
        else if(s2->exp>s1->exp){
            current->exp=s2->exp;
            current->coff=s2->coff;
            s2=s2->next;
        }
        else if(s2->exp==s1->exp){
            current->exp=s2->exp;
            current->coff=s2->coff+s1->coff;
            s2=s2->next;
            s1=s1->next;
        }
        current->next=NULL;    
    }

    if(s1!=NULL){
        for(;s1!=NULL;s1=s1->next){
            temp=(node*)malloc(sizeof(node));
            current->next=temp;
            current=temp;
            current->exp=s1->exp;
            current->coff=s1->coff;
        }
        current->next=NULL;
    }
    if(s2!=NULL){
        for(;s2!=NULL;s2=s2->next){
            temp=(node*)malloc(sizeof(node));
            current->next=temp;
            current=temp;
            current->exp=s2->exp;
            current->coff=s2->coff;
        }
        current->next=NULL;
    }
    return(final);    
}