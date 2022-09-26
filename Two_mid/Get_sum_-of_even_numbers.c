#include<stdio.h>
#include<conio.h>
 int main()
 
{
	int num[9] ={2,3,4,5,6,7,8,9},sum=0,x=0;
		printf("Get Sum of Even Numbers\n");
	top:        
		if (x<=8)
		{
			sum=sum+num[x];
			printf("%d+%d=%d\n",sum,num[x],num[x]+sum);
			x+=2;
			goto top;	
		}
	getch();
}           
			