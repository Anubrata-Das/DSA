#include <stdio.h>

int main(){
    int i,j,k,n;
    printf("Enter 1st number\n");
    scanf("%d",&i);
    printf("Enter 2nd number\n");
    scanf("%d", &j);
    n=i;
    for(k=1;k<j;k++){
        i=i*n;
    }
    printf("%d",i);
    return 0;
}