#include <stdio.h>

int main(){
    int f0=0,f1=1,f2,i,j,n;
    printf("Enter no. of terms:\n");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        for(j=f0+1;j<f1;j++){
            printf("%d ",j);
            i++;
            if(i>n)
                break;
        }
        f2=f0+f1;
        f0=f1;
        f1=f2;
    }
    return 0;
}