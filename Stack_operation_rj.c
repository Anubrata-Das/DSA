#include <stdio.h>
#include<stdlib.h>

int main(){
    char exp[100],sign;
    int postfix[10],i,top=-1;
    printf("Enter any postfix expression: ");
    gets(exp);
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]==',')
            continue;
        else if(exp[i]>='0' && exp[i]<='9')
        {
            top++;
            postfix[top]=exp[i]-'0';
        }
        else{
            sign=exp[i];
            switch(sign){
                case '+':postfix[top-1]=postfix[top-1]+postfix[top];
                        top--;
                        break;
                case '-':postfix[top-1]=postfix[top-1]-postfix[top];
                        top--;
                        break;
                case '*':postfix[top-1]=postfix[top-1]*postfix[top];
                        top--;
                        break;
                case '/':postfix[top-1]=postfix[top-1]/postfix[top];
                        top--;
                        break;
                case '^':postfix[top-1]=postfix[top-1]^postfix[top];
                        top--;
                        break;
            }   
        }
    }
    printf("%d", postfix[top]);
    return 0;
}