#include <stdio.h>

int main()
{
    int a=10;
    
    int *pt;
    
    pt = &a;
    
    printf("%d",sizeof(pt));

    return 0;
}