#include <stdio.h>

int main(){
    char ch[31];
    int i,pos;
    printf("Enter any string:\n");
    gets(ch);
    for(i=0;ch[i]!='\0';i++);
    for(i=i-1;i>=0;i--){
        if(ch[i]==' '){
            pos=i;
            printf("%s ,",(ch+(pos+1)));
            break;
        }
    }
    for(i=0;i<pos;i++){
        printf("%c", ch[i]);
    }
    return 0;
}