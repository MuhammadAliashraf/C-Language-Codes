#include<windows.h> //  header file for gotoxy 
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
 	//calling these function 
 	// x is coloum and y is row
 	gotoxy(22,1);printf("M"); 
    gotoxy(24,2);printf("u");
    gotoxy(26,3);printf("h"); 
    gotoxy(28,4);printf("a"); 	 	
 	gotoxy(30,5);printf("m"); 
 	gotoxy(32,6);printf("m"); 
 	gotoxy(34,5);printf("a"); 
 	gotoxy(36,4);printf("d"); 
 	gotoxy(38,3);printf("A"); 
 	gotoxy(40,2);printf("l"); 
 	gotoxy(42,1);printf("i"); 
 	
 	
 	
  	return 0; }