#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
for(i=1;i<=3;i++)
{
for(j=1;j<=3-i;j++)
printf("    ",j);
for(j=i;j>=1;j--)
printf(" %d ",j);
for(j=2;j<=i;j++)
printf(" %d ",j);
printf("\n");
}
 getch();
}