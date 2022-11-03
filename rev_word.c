#include <stdio.h>
#include <string.h>

int main(){
    char ch[31];
    int i,j,sp,ep;
    printf("Enter any string\n");
    gets(ch);
    strrev(ch);
    sp=-1;
    for(i=0;ch[i-1]!='\0';i++){
        if(ch[i]==' ' || ch[i]=='\0'){
            ep=i;
            for(j=ep-1;j>sp;j--){
                printf("%c", ch[j]);
            }
            printf("%c",' ');
            sp=ep;
        }
    }
    return 0;
}