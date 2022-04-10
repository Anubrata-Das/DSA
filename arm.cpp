#include <stdio.h>
#include <math.h>
int main()
{
int num, original, rem, sum = 0, n = 0 ;
printf("Enter a Number: ");
scanf("%d", &num);
original = num;
while (original != 0)
{
original /= 10;
++n;
}
original = num;
while (original != 0)
{
rem = original%10;
sum += pow(rem, n);
original /= 10;
}
if(sum == num)
printf("%d is an Armstrong number.", num);
else
printf("%d is not an Armstrong number.", num);
return 0;
}
