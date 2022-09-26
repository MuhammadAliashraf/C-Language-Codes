#include<windows.h>    //  header file for gotoxy 
#include <stdio.h>     //header file for standard input output 
 
COORD coord={0,0}; // this is global variable 
   //center of axis is set to the top left cornor of the screen 
 
void gotoxy(int x,int y) 
{ 
  	coord.X=x; 
 	coord.Y=y; 
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord); 
} 

int main()
{
	int col=8,row=0; 
	int a=0;
	top:
		gotoxy(col,row);
		printf("%d",a);
		if (a<=9)
		{
			a+=1;
			row++;
		goto top;
		}
		return (0);
}