#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    int len, len1, len2, i, j, found, not_found=0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 == len2)
    {
        len = len1;
        for(i=0; i<len; i++)
        {
            found = 0;
            for(j=0; j<len; j++)
            {
                if(str1[i] == str2[j])
                {
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                not_found = 1;
                break;
            }
        }
        if(not_found == 1)
            printf("\nStrings are not Anagram");
        else
            printf("\nStrings are Anagram");
    }
    else
        printf("\nBoth string must contain same number of character to be an Anagram Strings");
        getch();
    return 0;
}