#include <stdio.h>

int main(){
    int f0=0,f1=1,f2,n,i,x,y,j,c,a=1;
    printf("Enter number of terms\n");
    scanf("%d",&c);
    for(i=1;i<=50;i++){
        x=f0;
        f2=f0+f1;
        f0=f1;
        y=f0;
        if(x>=3){
            for(j=x+1;j<y && a<=c;j++){
                printf("%d ",j);
                a++;
            }
        }
        f1=f2;
    }
    return 0;
}