#include<stdio.h>
#include<conio.h>
 
 int main()
 {
 	float  op,num1,num2;

 	
 	printf("============================");
 	printf("\nWhich Operation you want to Perform::");
 	printf("\n============================");
 	
 	printf("\n[1]-Addition");
 	printf("\n[2]-subtartion");
 	printf("\n[3]-Multiplication");
 	printf("\n[4]-divide");
 	printf("\n\n Chosse the number=");
 	scanf("\n %f",  & op);
    	
 	printf("\n Enter Your First number ::");
 	scanf("%f",&num1);
 	printf("\n Enter your Second number:: ");
 	scanf("%f",&num2);
 	
 	if (op==1)
 	printf("your answer is = %.0f",num1+num2);
 	
 	else if(op==2)
 	printf("\n your answer is =%.0f",num1-num2);
 	
 	else if(op==3)
 	printf("\n your answer is =%.0f",num1*num2);
 	
 	else if(op==4) 
 	printf("\n your answer is =%.2f",num1/num2);
 	
 	else 
 	printf("You Chose invalid number;");
 	
 	

return (0);
 		
 }
 