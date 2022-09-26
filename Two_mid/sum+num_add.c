#include<stdio.h>
#include<conio.h>
 int main()
 
{
	int num[6] ={2,4,6,8,10,12},sum=0,x=0;
	printf("auto Sum\n");
	top:        
		if (x<=5)
		{
			sum=sum+num[x];
			printf("%d+%d=%d\n",num[x],sum,sum+num[x]);
			x++;
			goto top;	
		}
	getch();
}           
			