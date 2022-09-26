#include<stdio.h>
#include<conio.h>

main()
{
	char name [6];
	int cd;
	printf("Enter your Name  ");
	gets(name);
	
	printf("\nFirst  letter  is %c=%d",name[0],name[0]);
	printf("\nSecond letter  is %c=%d",name[1],name[1]);	
	printf("\nThird  letter  is %c=%d",name[2],name[2]);
	printf("\nFour   letter  is %c=%d",name[3],name[3]);
	printf("\nFive   letter  is %c=%d",name[4],name[4]);		
	
	printf("\nSum of Your Name is [%s]=%d", name,name[0]+name[1]+name[2]+name[3]+name[4] );
	cd = name[0]+name[1]+name[2]+name[3]+name[4];
	printf("\nYour Name Code is =%d",cd);

	
	
	getch();
} 