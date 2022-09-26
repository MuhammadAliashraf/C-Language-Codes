#include<stdio.h>
#include<conio.h>
 int main()
 
{
	int num[5] ={1,2,3,4,5,6},sum=0,x=0;
	printf("Get Sum OF Alternative Start From 3rd value of array:\n\n");
	top:        
		if (x<=5)
		{
			sum=sum+num[x];
			printf("%d+%d=%d\n",sum,num[x],sum+num[x]);
			x+=2;
			
			goto top;	
		}
	getch();
}           