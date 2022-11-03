#include <stdio.h>

int main(){
    int i,j,n;
    printf("Enter no. of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==1){
            for(j=1;j<=n;j++){
                printf("*");
            }
            printf("\n");
            continue;
        }
        if(i==n){
            for(j=1;j<=n;j++){
                printf("*");
            }
        }
        else{
            for(j=1;j<=n;j++){
                if(j==1){
                    printf("*");
                    continue;
                }
                if(j==n){
                    printf("*");
                    continue;
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}