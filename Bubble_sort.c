#include <stdio.h>
#define size 5

int main(){
    int a[size],i,j,min,temp;
    printf("Enter data\n");
    for(i=0; i<size ;i++){
        scanf("%d", &a[i]);
    }
    for(i=0 ; i< size-1; i++){
        // min=i;?
        for(j=0;j<(size-1)-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("All sorted elements are: \n");
    for(i=0;i<size;i++){
        printf("%d  ",a[i]);
    }

    
    return 0;
}