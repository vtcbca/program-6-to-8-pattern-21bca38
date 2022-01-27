/* write a program to print following patten.
date:27/12/2021*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
for(a=5; a>=0; a=a-2)
	{
		for(b=1; b<=a; b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}