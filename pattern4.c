#include <stdio.h>

int main(){
    int i,j,k,s,n;
    printf("Enter no. of rows\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(s=n;s>i;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}