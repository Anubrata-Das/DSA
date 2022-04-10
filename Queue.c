#include <stdio.h>
#include<stdlib.h>
#define size 5

int queue[size],front,rear;


void add_queue();
void del_queue();
void traverse();

int main(){
    int ch;
    front=0;
    rear=-1;

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

void add_queue()
{
    if((rear+1)==size){
        printf("Queue is full\n");
        return;
    }
    rear++;
    printf("Enter data u want to add:\n");
    scanf("%d",&queue[rear]);
}

void del_queue(){
    if(front==(rear+1)){
        printf("Nothing to delete\n");
        return;
    }
    printf("Deleted data is: %d\n",queue[front]);
    front++;
}

void traverse(){
    int i;
    if(front==(rear+1)){
        printf("Nothing to display\n");
        return;
    }
    printf("All values are:\n");
    for(i=front;i<=rear;i++){
        printf("%d\t",queue[i]);
    }
}