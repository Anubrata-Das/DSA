#include <stdio.h>

int main(){
    char ch[31],new[31]={};
    int i,j;
    printf("Enter any string:\n");
    gets(ch);

    for(i=0,j=0;ch[i]!='\0';i++){
        if(ch[i]==' '){
            if(ch[i+1]!=' '){
                new[j]=ch[i];
                j++;
            }
        }
        else{
            new[j]=ch[i];
            j++;
        }
    } 
    puts(new);
    return 0;
}