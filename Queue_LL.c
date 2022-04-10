#include <stdio.h>
#include<stdlib.h>

typedef struct st
{
    int data;
    struct st *next;
}node;

node *front,*rear,*temp;
void add_queue();
void del_queue();
void traverse();

int main(){
    int ch;
    front=rear=NULL;

    while (1)
    {
        printf("\n1: Add data in queue :\n");
        printf("2: Delete data from queue :\n");
        printf("3: Traverse: \n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: add_queue();
                break;
        case 2: del_queue();
                break;
        case 3: traverse();
                break;
        default: exit(0);
        }
    }            
    
    return 0;
}

void add_queue(){
    temp=(node*)malloc(sizeof(node));

    if(rear==NULL){
        rear=temp;
        front=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
    printf("Enter data to add\n");
    scanf("%d",&rear->data);
    rear->next=NULL;
}

void del_queue(){
    if(rear==NULL){
        printf("Nothing to delete\n");
        return;
    }
    temp=front;
    front=front->next;
    printf("Deleted data is : %d\n",temp->data);
    if(temp==rear){
        rear=front=NULL;
    }
    free(temp);
}

void traverse(){
    if(rear==NULL){
        printf("nothing to display\n");
        return;
    }
    printf("All values are:\n");
    for(temp=front;temp!=NULL;temp=temp->next){
        printf("%d\t",temp->data);
    }
}