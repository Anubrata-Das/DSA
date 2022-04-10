#include<stdio.h>
main()
{
int a[3][3],b[3][3],m[3][3];
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter elements of MAT1");
scanf("%d",&a[i][j]);
printf("enter elements of MAT2");
scanf("%d",&b[i][j]);
m[i][j]=a[i][j]+b[i][j];
}
}
printf("\n addition of matrices:\n");
for(i=0;i<3;i++)
{
for(i=0;i<3;i++)
{
printf("%d",a[i][j]);
}
printf("\t");
for(j=0;j<3;j++)
{
printf("%d",b[i][j]);
}
printf("\t");
for(j=0;j<3;j++)
{
printf("%d",m[i][j]);
}
printf("\n");
}
return 0;
}