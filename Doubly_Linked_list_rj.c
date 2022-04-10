#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    int data;
    struct st *next,*prev;
}node;

node  *temp, *current; 

void Create();
void Traverse();
void Insert_first();
void Insert_Middle();
void Insert_Last();
void Delete_first();
void Delete_middle();
void Delete_last();

int main(){   
    int ch;
    current=NULL;
    while (1)
    {
        printf("\n1: Creation\n");
        printf("2: Traverse \n");
        printf("3: Insert first \n");
        printf("4: Insert middle \n");
        printf("5: Insert last \n");
        
        printf("6: Delete first \n");
        printf("7: Delete middle \n");
        printf("8: Delete last \n");
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
        case 6: Delete_first();
                break;
        case 7: Delete_middle();
                break;
        case 8: Delete_last();
                break;          
        default: exit(0);
        }
    }
}

void Create(){
    temp=(node*)malloc(sizeof(node));
    if(current==NULL){
        current=temp;
        current->prev=NULL;
    }
    else{
        for(;current->next!=NULL;current=current->next);
        current->next=temp;
        temp->prev=current;
        current=temp;
    }
    printf("Enter data: ");
    scanf("%d",&current->data);
    current->next=NULL;
}

void Traverse(){
    if(current==NULL){
        printf("List is empty.\n");
        return;
    }
    for(;current->prev!=NULL;current=current->prev);
    printf("All values are: \n");
    for(temp=current;temp!=NULL;temp=temp->next){
        printf("%d  ",temp->data);
    }
}

void Insert_first(){
    temp=(node*)malloc(sizeof(node));
    printf("Enter value to insert first: \n");
    scanf("%d",&temp->data);
    for(;current->prev!=NULL;current=current->prev);
    current->prev=temp;
    temp->next=current;
    temp->prev=NULL;
}

void Insert_Middle(){
    temp=(node*)malloc(sizeof(node));
    int pos,c=2;
    printf("Enter position: \n");
    scanf("%d", &pos);
    printf("Enter data to insert: \n");
    scanf("%d", &temp->data);
    for(;current->prev!=NULL;current=current->prev);
    for(;current->next!=NULL;current=current->next){
        if(pos==1){
            Insert_first();
            break;
        }
        if(pos==c){
            current->next->prev=temp;
            temp->next=current->next;
            current->next=temp;
            temp->prev=current;
            break;
        }
        c++;
    }
}

void Insert_Last(){
    temp=(node*)malloc(sizeof(node));
    printf("Enter the data to insert last :\n");
    scanf("%d", &temp->data);
    for(;current->next!=NULL;current=current->next);
    current->next=temp;
    temp->prev=current;
    temp->next=NULL;
}

void Delete_first(){
    for(;current->prev!=NULL;current=current->prev);
    temp=current;
    current=current->next;
    current->prev=NULL;
    free(temp);
}

void Delete_middle(){
    int pos,c=1;
    printf("Enter position for deletion:\n");
    scanf("%d", &pos);
    for(;current->prev!=NULL;current=current->prev);
    for(temp=current;temp->next!=NULL;temp=temp->next){
        if(pos==1){
            Delete_first();
            return;
        }
        if(pos==c){
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            
            printf("deleted node is %d\n",temp->data);
            free(temp);
        }
        c++;
    }
}

void Delete_last(){
    for(;current->prev!=NULL;current=current->prev);
    for(temp=current;temp->next!=NULL;temp=temp->next);
    temp->prev->next=NULL;
}