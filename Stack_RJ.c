#include <stdio.h>
#include<stdlib.h>
#define size 5

int stack[size],top=-1;

void push();
void pop();
void traverse();

int main(){
    int ch;
    while (1)
    {
        printf("\n1: Push data :\n");
        printf("2: Pop data :\n");
        printf("3: Traverse: \n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: traverse();
                break;
        default: exit(0);
        }
    }            
    
    return 0;
}

void push(){
    if((top+1)==size){
        printf("Stack Overflow\n");
        return;
    }
    top++;
    printf("Enter data to push in stack:\n");
    scanf("%d", &stack[top]);
}

void pop(){
    if(top==-1){
        printf("Stack Underflow\n");
        return;
    }
    
    printf("Deleted data is : %d\n",stack[top]);
    top--;
    
}

void traverse(){
    
    int i;
    if(top==-1){
        printf("Nothing to display\n");
        return;
    }
    printf("All values in stack\n");
    for(i=top;i>0;i--){
        printf("%d\n",stack[i]);
    }
}