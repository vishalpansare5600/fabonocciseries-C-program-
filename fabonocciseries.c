#include<stdio.h>
#include<conio.h>

void main()
{
	int f=0,s=1,next,i,no;
	printf("\n enter number of  term");
	scanf("%d",&no);
	
	printf("\n%d %d of term fibonacci series",f,s);
	
	for(i=1;i<=no;i++)
	
	{
	
			next=f+s;
			printf("%d",next);
			f=s;
			s=next;
		}
		
		getch();
		
	}
