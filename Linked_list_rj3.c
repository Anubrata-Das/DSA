#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    int data;
    struct st *next;
}node;

node *start, *temp, *current; 

void Create();
void Traverse();
void Reverse_display();
void Reverse_node();
void Find_min_del();

int main(){   
    int ch;
    start=NULL;
    while (1)
    {
        printf("\n1: Creation\n");
        printf("2: Traverse \n");
        printf("3: Reverse Display \n");
        printf("4: Reverse the nodes \n");
        printf("5: Find the minimum and delete. \n");
        // printf("5: Delete last \n");
        // printf("6: Sort the values \n");
        // printf("7: Move first node to last \n");
        // printf("8: Move last node to first \n");
        // printf("9: exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: Create();
                break;
        case 2: Traverse();
                break;
        case 3: Reverse_display();
                break;
        case 4: Reverse_node();
                break;
        case 5: Find_min_del();
                break;
        // case 6: Sort();
        //         break;        
        // case 7: Move_end();
        //         break;        
        // case 8: Move_first();
        //         break;        
        default: exit(0);
        }
    }
}

void Create(){
    temp= (node*)malloc(sizeof(node));
    if(start==NULL){
        start=temp;
        current=temp;
    }
    else{
        current->next=temp;
        current=temp;
        
    }
    printf("Enter any data : ");
    scanf("%d" ,&current->data);
    current->next=NULL;
}

void Traverse(){
    if(start==NULL){
        printf("Nothing to display.\n");
        return;
    }
    printf("All values are: \n");
    for(temp=start; temp != NULL; temp=temp->next ){
        printf("%d   ", temp->data);
        
    }
}

void Reverse_display(){
    int i=0,j;
    for(temp=start;temp!=NULL;temp=temp->next){
        i++;
    }
    for(;i>=1;i--){
        temp=start;
        for(j=1;j<i;j++){
            temp=temp->next;
        }
        printf("%d\n", temp->data);
    }
}

void Reverse_node(){
    node *p1,*p2,*p3;
    p1=start;
    p2=p1->next;
    p3=p2->next;
    p2->next=p1;
    p1->next=NULL;
    while(p3!=NULL){
        p1=p2;
        p2=p3;
        p3=p3->next;
        p2->next=p1;
    }
    start=p2;
}

void Find_min_del(){
    int min;
    min=start->data;
    current=start;
    while(current!=NULL){
        if(min>current->data){
            min=current->data; 
        }
        current=current->next;
    }

    //Delete the min
    node* prev;
    prev=temp=start;
    if(temp!=NULL && temp->data==min){
        start=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=min){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);
}