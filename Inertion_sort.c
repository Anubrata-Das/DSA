#include <stdio.h>
#define size 5

int main(){
    int a[size],i,j,val;
    printf("Enter data\n");
    for(i=0; i<size ;i++){
        scanf("%d", &a[i]);
    }
    for(i=1 ; i< size; i++){
        val=a[i];
        
        for(j=i-1;j>=0 && val<a[j];j--){
            a[j+1]=a[j];
        
        }
        a[j+1]=val;
    }
    printf("All sorted elements are: \n");
    for(i=0;i<size;i++){
        printf("%d  ",a[i]);
    }

    
    return 0;
}