#include <stdio.h>
#include<stdlib.h>
#define size 5

int dequeue[size],front1,rear1,front2,rear2;


void add_queue();
void del_queue();
void traverse();

int main(){
    int ch;
    front1=0;
    rear1=-1;
    front2=(size-1);
    rear2=size;

    while (1)
    {
        printf("\n1: Add data in de queue :\n");
        printf("2: Delete data from de queue :\n");
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
    char ch;
    if((rear1+1)==rear2){
        printf("Queue is full\n");
        return;
    }
    fflush(stdin);
    printf("Insert data from (l)left or (r)right\n");
    scanf("%c", &ch);
    if(ch=='l'){
        rear1++;
        printf("Enter any data(l):\n");
        scanf("%d", &dequeue[rear1]);
    }
    else if(ch=='r'){
        rear2--;
        printf("Enter any data(r):\n");
        scanf("%d", &dequeue[rear2]);
    }
}

void del_queue(){
    char ch;
    fflush(stdin);
    printf("Enter data from [l] left or [r] right\n");
    scanf("%c",&ch);
    if(ch=='l'){
        if(front1==(rear1+1)){
            printf("Nothing to delete(l)\n");
            return;
        }
        printf("Deleted data is:%d\n",dequeue[front1]);
        front1++;
    }
    else if(ch=='r'){
        if(front2==(rear2-1)){
            printf("Nothing to delete(r)\n");
            return;
        }
        printf("Deleted data is %d\n",dequeue[front2]);
        front2--;
    }    
}   

void traverse(){
    int i;
    char ch;
    fflush(stdin);
    printf("Display data from left (l) or right(r)\n");
    scanf("%c", &ch);
    if(ch=='l'){
        if(front1==(rear1+1)){
            printf("Nothing to display(l)");
            return;
        }
        for(i=front1+1;i<=rear1;i++){
            printf("%d\t", dequeue[i]);
        }
    }
    else if(ch=='r'){
        if(front2==(rear2-1)){
            printf("Nothing to display(r)\n");
            return;
        }
        for(i=front2;i>=rear2;i--)
            printf("%d\t", dequeue[i]);
    }
}

