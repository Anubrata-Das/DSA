#include <stdio.h>
#include<stdlib.h>
#define size 5

int cqueue[size],front,rear;

void add_cqueue();
void del_cqueue();
void traverse();

int main(){
    int ch;
    front = rear = -1;

    while (1)
    {
        printf("\n1: Add data in circular queue :\n");
        printf("2: Delete data from circular queue :\n");
        printf("3: Traverse: \n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: add_cqueue();
                break;
        case 2: del_cqueue();
                break;
        case 3: traverse();
                break;
        default: exit(0);
        }
    }            
    
    return 0;
}

void add_cqueue(){
    int val;
    if(front==(rear+1)%size){
        printf("Queue is full\n");
        return;
    }
    printf("Enter any value:\n");
    scanf("%d",&val);
    if(rear==-1){
        rear=front=0;
    }
    else
        rear=(rear+1)%size;

    cqueue[rear]=val;
}

void del_cqueue(){
    if(front==-1){
        printf("Nothing to delete\n");
        return;
    }
    printf("Deleted data is: %d\n",cqueue[front]);
    if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%size;
    }
}

void traverse(){
    int i;
    if(front==-1){
        printf("Nothing to display\n");
        return;
    }
    i=front;
    do{
        printf("%d\t",cqueue[i]);
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
}