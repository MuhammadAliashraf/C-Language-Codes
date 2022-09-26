#include<stdio.h>
#include<conio.h>

int main()
{
	int R,i,sum=0;
		printf("Enter the Range\n");
		scanf("%d", &R);
		
		printf("Even Numbers from 1 to %d are :\n",R);
		
		for (i=1;i<=R;i++)
		{
			if (i % 2==0)
			{
				printf("%d\n",i);
			//	sum=R+sum;
			//	("%d+%d=%d",R,i);
			}
		}
		
		printf("Sum of even numbers from 1 to %d is %d\n ",R,i);
		
	return 0;
}