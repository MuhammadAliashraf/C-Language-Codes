#include<stdio.h>
#include<conio.h>
 int main()
 
{
	int num[5] ={2,4,6,8},sum=0,x=0;
	top:        
		if (x<=4)
		{
			sum=sum+num[x];
			printf("%d-%d=%d\n",sum,num[x],sum-num[x]);
			x++;
			
			goto top;	
		}
	getch();
}           