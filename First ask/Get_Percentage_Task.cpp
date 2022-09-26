#include<stdio.h>
#include<conio.h>

main()
{
	float english,math,urdu,physics,percentage,TotalMarks;
	printf("Enter your English Marks=");
	scanf (" %f", & english);
	printf("Enter your Math Marks=");
	scanf (" %f", & math);
	printf("Enter your Urdu Marks=");
	scanf (" %f", & urdu);
	printf("Enter your Physics Marks=");
	scanf (" %f", & physics);
	TotalMarks =english+math+urdu+physics;
	printf("Total of marks of all subjects is=%f",TotalMarks); 
	percentage=(TotalMarks/400)*100;
	printf("\nyour Percentage is =%f",percentage);
	
	
	getch();
}