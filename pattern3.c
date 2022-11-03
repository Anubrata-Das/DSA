#include <stdio.h>

int main(){
    int i,j,s,n;
    printf("Enter no. of rows\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(s=n;s>i;s--){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
            printf("*");
        printf("\n");    
    }
    return 0;
}