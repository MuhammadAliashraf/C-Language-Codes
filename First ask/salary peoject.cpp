#include<stdio.h>
#include<conio.h>
main()

{
	
  float chandan = 50000;
  float basicdanish = 20000;
  float hra,ca,ra,percentageformdanish,percentageformchandan,babarsalary,alisalary;
  printf("\t\t\t\t basic salary of danish=%f",basicdanish);
  hra=(basicdanish*20)/100,
  printf("\n\t\t\t\t hra=%f",hra);
  ca=(basicdanish*30)/100,
  printf("\n\t\t\t\t ca=%f",ca);
  ra=(basicdanish*200)/100,
  printf("\n\t\t\t\t ra=%f",ra);
  percentageformdanish =(basicdanish*17)/100,
  printf("\n\t\t\t\t percentageformdanish =%f",percentageformdanish);
  percentageformchandan=(chandan*20)/100,
  printf("\n\t\t\t\t percentageformchandan=%f", percentageformdanish);
  babarsalary= percentageformdanish+percentageformdanish;
  printf("\n\t\t\t\t babarsalary=%f",babarsalary);
  alisalary=babarsalary;
  printf("\n\t\t\t\t alisalary=%f",alisalary);
  
  
  getch();
}