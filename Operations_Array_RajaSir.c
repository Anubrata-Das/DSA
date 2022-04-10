#include<stdio.h>
#include<stdlib.h>
#define size 5

int data[size], loc=-1;

void Append();
void Insert();
void Modify();
void Deletion();
void Traverse();
void Linear_search();

int main(){   
    int ch;
    while (1)
    {
        printf("1: append \n");
        printf("2: insert \n");
        printf("3: modify \n");
        printf("4: remove \n");
        printf("5: Display array \n");
        printf("6: linear search \n");
        printf("7: exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: Append();
                break;
        case 2: Insert();
                break;
        case 3: Modify();
                break;
        case 4: Deletion();
                break;
        case 5: Traverse();
                break;
        case 6: Linear_search();
                break;        
        default: exit(0);
        }
    }
}
void Append(){
    if((loc+1)==size){
        printf("Array is full\n ");
        return;
    }
    loc++;
    printf("Enter the data: \n");
    scanf("%d", &data[loc]);
}

void Insert(){
    int val,pos,i;
    if((loc+1)==size){
        printf("Array is full, nothing to insert\n ");
        return;
    }
    printf("Enter the position and the value you want to insert:\n");
    scanf("%d%d",&pos,&val);
    if((pos-1)>=0 && (pos-1)<=loc){
        for(i=loc;i>=(pos-1);i--){
            data[i+1]=data[i];
        }
        data[pos-1]=val;
        loc++;
    }
}

void Modify(){
    int pos,val;
    printf("Enter position and value:\n");
    scanf("%d%d",&pos,&val);
    if((pos-1)>=0 && (pos-1)<=loc){
        data[pos-1]=val;
    }
}

void Deletion(){
    int pos,i;
    printf("Enter the position:\n");
    scanf("%d", &pos);
    if(loc==-1){
        printf("Empty array,nothing to delete.\n");
        return;
    }
    if((pos-1)>=0 && (pos-1)<=loc){
        for(i=(pos-1);i<loc;i++){
            data[i]=data[i+1];
        }
        loc--;
    }
}

void Traverse(){
    int i;
    if(loc==-1){
        printf("Empty array, nothing to display.\n");
        return;
    }
    printf("Array is : \n");
    for(i=0;i<=loc;i++){
        printf("%d  \n",data[i]);
    }
}

void Linear_search(){
    int i, value,pos=-1;
    printf("Enter the value to be searched :");
    scanf("%d", &value);
    for(i=0;i<size && pos==-1;i++){
        if(data[i]==value){
            pos=1;
        }
    
    }
    if(pos==-1){
        printf("Value is not in the array.");
    }
    else{
        printf("%d value is in the position %d.\n",value,pos+1);
    }
}