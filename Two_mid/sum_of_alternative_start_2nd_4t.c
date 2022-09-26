#include<stdio.h>
#include<conio.h>
int main()
 
{
	int num[5] ={1,2,3,4,5},sum=0,x=1;
	printf("get the Sum Of Alternative Numbers Start from 2nd Value of an array:\n\n");
	top:        
		if (x<=4)
		{
			sum=sum+num[x];
			printf("%d+%d=%d\n",num[x],sum,sum+num[x]);
			x+=2;
			

			goto top;	
		}
	getch();
}           