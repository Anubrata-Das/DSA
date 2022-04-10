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
void Delete_first();
void Delete_middle();
void Delete_last();
void Sort();

int main(){   
    int ch;
    start=NULL;
    while (1)
    {
        printf("\n1: Creation\n");
        printf("2: Traverse \n");
        printf("3: Delete first \n");
        printf("4: Delete middle \n");
        printf("5: Delete last \n");
        printf("5: Delete last \n");
        printf("6: Sort the values \n");
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
        case 3: Delete_first();
                break;
        case 4: Delete_middle();
                break;
        case 5: Delete_last();
                break;
        case 6: Sort();
                break;        
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

void Delete_first(){
    if(start=NULL){
        printf("Empty linked list.\n");
        return;
    }
    temp=start;
    start=start->next;
    printf("deleted node value is %d.\n", temp->data);
    free(temp);
}           

void Delete_middle(){
    int c=1,pos;
    printf("Enter position to be deleted:\n");
    scanf("%d" ,&pos);
    if(pos==1){
        Delete_first();
        return;
    }
    for(temp=current=start; temp!=NULL; temp=temp->next){
        if(pos==c){
            current->next=temp->next;
            printf("deleted node value is %d \n",temp->data);
            free(temp);
            break;
        }
        c++;
        current=temp;
    }
    
}

void Delete_last(){
    for(temp=start; temp->next!=NULL; temp=temp->next){
        current=temp;
    }
    current->next=NULL;
    printf("deleted node is %d \n", temp->data);
    free(temp);
}

void Sort(){
    node *prev,*min;
    int val;
    for(prev=start;prev->next!=NULL;prev=prev->next){
        min=prev;
        for(current=prev->next; current!=NULL;current=current->next){
            if(current->data<min->data){
                min=current;
            }
        }
        if(prev!=min){
            val=prev->data;
            prev->data=min->data;
            min->data=val;
        }
    }
}