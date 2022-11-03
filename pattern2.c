#include <stdio.h>

int main(){
    int i,s,j,n;
    printf("Enter no. of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<i;s++){
            printf(" ");
        }                       
        for(j=i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
