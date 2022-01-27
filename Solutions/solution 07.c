/* write a program to print following patten.
date:27/12/2021*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,space;
clrscr();
for(a=5; a>=0; a=a-2)
	{
          for (space=0;space<5-a;++space) 
          printf("  ");
		for(b=1; b<=a; b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}
