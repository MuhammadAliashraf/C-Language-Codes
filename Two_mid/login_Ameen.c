#include<stdio.h>
#include<conio.h>

int main()
{
	int U1=1234,P1=4567;
	int U2,P2;
	top:
	printf("Enter the User iD \n");
	scanf ("%d",&U2);
	printf("Enter the User Password\n");
	scanf("%d",&P2);
	if (U1==U2&&P1==P2)
	{
		printf("SuccessFull Login\n");
	 } 
	 else{
	 	printf("Enter invalid Id and password\n\n\n");
	 	goto top;
	 
	 }
	
	getch();
}