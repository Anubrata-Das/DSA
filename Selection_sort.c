#include <stdio.h>
#define size 5

int main(){
    int a[size],i,j,min,temp;
    printf("Enter data\n");
    for(i=0; i<size ;i++){
        scanf("%d", &a[i]);
    }
    for(i=0 ; i< size-1; i++){
        min=i;
        for(j=i+1;j<size;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("All sorted elements are: \n");
    for(i=0;i<size;i++){
        printf("%d  ",a[i]);
    }

    
    return 0;
}