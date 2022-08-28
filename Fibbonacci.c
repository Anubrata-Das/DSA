#include <stdio.h>

int main(){
    int f0=0,f1=1,f2,n,i;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",f0);
        f2=f0+f1;
        f0=f1;
        f1=f2;
    }
    return 0;
}