#include<stdio.h>
#include<conio.h>
 int main()
 
{
	int num[10] ={1,2,3,4,5,6,7,8,9},sum=0,x=0;
	top:        
		if (x<=9)
		{
			sum=sum+num[x];
			printf("%d*%d=%d\n",sum,num[x],sum*num[x]);
			x++;
			
			goto top;	
		}
	getch();
}           