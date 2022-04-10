#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    int data;
    struct st *next;
}node;

node  *temp, *current; 

void Create();
void Traverse();
void josephs();

int main(){   
    int ch;
    current=NULL;
    while (1)
    {
        printf("\n1: Creation\n");
        printf("2: Traverse \n");
        printf("3: Josepher's problem \n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: Create();
                break;
        case 2: Traverse();
                break;
        case 3: josephs();
                break;
        default: exit(0);
        }
    }
}

void Create(){
    temp=(node*)malloc(sizeof(node));
    if(current==NULL){
        current=temp;
        current->next=temp;
    }
    else{
        temp->next=current->next;
        current->next=temp;
        current=temp;
    }
    printf("Enter any data :\n");
    scanf("%d", &current->data);
}

void Traverse(){
    if(current==NULL){
        printf("Nothing to display.\n");
        return;
    }
    temp=current;
    do
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    } while (temp!=current);
    
}

void josephs(){
    int val,i;
    node* ptr;
    printf("enter any value:\n");
    scanf("%d", &val);
    temp=current;
    while (temp!=temp->next)
    {
        for(i=1;i<=val;i++){
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp=temp->next;
    }
    printf("Winner node is: %d\n", temp->data);
    
}