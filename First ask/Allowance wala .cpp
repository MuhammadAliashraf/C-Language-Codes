#include<stdio.h>
#include<conio.h>
main()
{ float basic_salary =15000;
float a1,a2,a3,totalincome,netincome,tax;
printf("\t\t\t\t\tbasic-Salary-of-arshad=%f",basic_salary);
a1=(basic_salary*20)/100;
printf("\n \t\t\t\t\tAllowance 1=%f",a1);
a2=(basic_salary*10)/100;
printf("\n\t\t\t\t\tAllowance 2=%f",a2);
a3=(basic_salary*17)/100;
printf("\n\t\t\t\t\tAllowance 3=%2f",a3);
totalincome=basic_salary+a1+a2+a3;
printf("\n\t\t\t\t\tTotal_Income=%2f",totalincome);
tax=(basic_salary*10)/100;
printf("\n\t\t\t\t\tTotal tax=%2f",tax);
netincome=totalincome-tax;
printf("\n\t\t\t\t\tNet_Income =%f",netincome);

getch();
}