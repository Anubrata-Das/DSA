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
void Insert_first();
void Insert_Middle();
void Insert_Last();
void Find_min();
void Move_end();
void Move_first();

int main(){   
    int ch;
    start=NULL;
    while (1)
    {
        printf("\n1: Creation\n");
        printf("2: Traverse \n");
        printf("3: Insert first \n");
        printf("4: Insert middle \n");
        printf("5: Insert last \n");
        printf("6: Find minimum \n");
        printf("7: Move first node to last \n");
        printf("8: Move last node to first \n");
        printf("9: exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: Create();
                break;
        case 2: Traverse();
                break;
        case 3: Insert_first();
                break;
        case 4: Insert_Middle();
                break;
        case 5: Insert_Last();
                break;
        case 6: Find_min();
                break;        
        case 7: Move_end();
                break;        
        case 8: Move_first();
                break;        
        default: exit(0);
        }
    }
}

void Create(){
    temp= (node*)malloc(sizeof(node));
    if(start==NULL){
        start=temp;
        current=temp;
        // current=start;
        // temp=start;
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

void Insert_first(){
    temp=(node*)malloc(sizeof(node));
    printf("Enter value to insert in first position:\n");
    scanf("%d",&temp->data);
    temp->next=start;
    start=temp;
}

void Insert_Middle(){
    temp=(node*)malloc(sizeof(node));
    node* prev;
    int pos, c=2;
    printf("Enter position in middle:\n");
    scanf("%d",&pos);
    printf("Enter value to be inserted:\n");
    scanf("%d", &temp->data);
    for(prev=start,current=start->next; current!=NULL; current=current->next){
        if(pos==1){
            Insert_first();
            break;
        }
        else if(pos==c){
            prev->next=temp;
            temp->next=current;
            break;
        }
        c++;
        prev=current;
    }
}

void Insert_Last(){
    temp=(node*)malloc(sizeof(node));
    printf("Enter value to insert in last:\n");
    scanf("%d", &temp->data);
    for(current=start; current->next!= NULL ; current=current->next);
    current->next=temp;
    current=temp;
    current->next=NULL;
    
}

void Find_min(){
    int c=1,min,x=1,pos;
    min=start->data;
    current=start;
    while(current!=NULL){
        if(min>current->data){
            min=current->data;
            pos=x;
        }
        x++;
        current=current->next;
    }
    printf("The minimum value is %d.\n", min);
    printf("Node number is = %d \n", pos);

    //Finding the node number of minimum

    // current=start;
    // while(current!=NULL){
    //     if(current->data==min){
    //         printf("Node number is = %d \n", c);
    //     }
    //     current=current->next;
    //     c++;
    // }
}

void Move_end(){
    node* pt;
    pt=start;
    // current=start;
    while (current->next!=NULL)
    {
        current=current->next;
    }
    start=pt->next;
    pt->next=NULL;
    current->next=pt;
    
}

void Move_first(){
    node*prev;
    current=start;
    while(current->next!=NULL){
        prev=current;
        current=current->next;
    }
    prev->next=NULL;
    current->next=start;
    start=current;
}