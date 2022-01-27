/* write a program to print following patten.
date:27/12/2021*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,row;
clrscr();
printf("Enter the number of rows : ");
scanf("%d",&row);
	for(a=1;a<=row;++a)
	{
		for(b=1;b<=a;++b)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}