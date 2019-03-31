/*C++ PROGRAM TO CHECK ENTERED YEAR IS LEAP YEAR OR NOT USING FUNCTION
-GESHWAR KUMAR
-05/07/2016*/

#include<iostream.h>
#include<conio.h>

void LYear(int);	//FUNCTION DECLARATION
int main()
{
	int year;	//VARIABLE DECLARATION FOR INPUT YEAR
	clrscr();
	/*INPUT OPERATION*/
	cout << "Enter the year: ";
	cin >> year ;
	/*PROCESSING*/
	LYear(year);	//FUNCTION CALL
return 0;
}
void LYear(int y)	//FUNCTION DEFINITION
{
	if((y % 400 == 0 || y % 4 == 0) && y % 100 != 0)
	{
		cout<<y<<" is a leap year.";
	}
	/*else if(y % 100 == 0 && (y % 400 != 0 || y % 4 != 0))
	{
		cout<<y<<" is not a leap year.";
	}      */
	else
	{
		cout<<y<<" is not a leap year.";
	}
}
