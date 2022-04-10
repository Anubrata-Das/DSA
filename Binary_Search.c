#include <stdio.h>

int main(){
    int a[5]={4,8,23,87,95};
    int lb=0,ub=4,n,pos=-1;
    int mid = (lb+ub)/2;
    printf("Enter the number to be searched :\n");
    scanf("%d", &n);
    while(lb<=ub && pos==-1){
        if(n==a[mid]){
            pos=mid;
        }
        else if(n<a[mid]){
            ub=mid-1;
        }
        else if(n>a[mid]){
            lb=mid+1;
        }
        mid=(ub+lb)/2;
    }   
    if(pos==-1){
        printf("The element is not present in the array.\n");

    }
    else{
        printf("%d element is present in %d position.\n",n,pos+1);
    }
    return 0;
}