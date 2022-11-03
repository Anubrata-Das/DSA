#include <stdio.h>
#include <string.h>

int main(){
    char ch[31],st[21];
    int i,j,k;
    printf("Enter any string\n");
    gets(ch);
    strrev(ch);
    for(i=0,j=0;ch[i]!='\0';i++,j++){
        st[j]=ch[i];
        if(ch[i+1]==' ' || ch[i+1]=='\0'){
            st[j+1]='\0';
            strrev(st);
            // puts(st);
            for(k=0;k<strlen(st);k++){
                printf("%c", st[k]);
            }
            j=-1;
        }
    }
    return 0;
}