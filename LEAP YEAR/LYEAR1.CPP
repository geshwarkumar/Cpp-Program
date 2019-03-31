/*C++ PROGRAM TO CHECK ENTERED YEAR IS LEAP YEAR OR NOT USING FUNCTION
-GESHWAR KUMAR
-05/07/2016*/

#include<iostream>
using namespace std;
 
void LYear(int);	//FUNCTION DECLARATION

main()
{
	int year;	//VARIABLE DECLARATION FOR INPUT YEAR
	
	/*INPUT OPERATION*/
	std :: cout << "Enter the year: ";
	std :: cin >> year ;
	/*PROCESSING*/
	LYear(year);	//FUNCTION CALL
} 
void LYear(int y)	//FUNCTION DEFINITION
{
	if(y % 400 == 0)
	{
		std :: cout<<y<<" is a leap year.";
	}
	else if(y % 4 == 0)
	{
		std :: cout<<y<<" is a leap year.";
	}
	else if(y % 100 == 0)
	{
		std :: cout<<y<<" is not a leap year.";
	}
	else
	{
		std :: cout<<y<<" is not a leap year.";
	}
}
