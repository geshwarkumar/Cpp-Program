/*CPP PROGRAM TO READ TWO NUMBERS FROM KEYBOARD AND DISPLAY AVERAGE ON THE SCREEN
-GESHWAR KUMAR
-20/07/2016*/

#include<iostream>
//#include<iostream.h>	//FOR TC COMPILER
using namespace std ; 	//FOR NEW VERSIONS COMPILER

int main()
{
	float num1,num2,avg,sum ;
	cout << "/*CPP PROGRAM FOR READ DATA FROM KEYBOARD-GESHWAR KUMAR-20/07/2016*/\n" ;
	/*INPUT*/
	cout << "Enter two number:";	//PROMPT
	cin >> num1 ;	//READ NUMBERS
	cin >> num2 ;	//FROM KEYBOARD
	
	sum  = num1 + num2 ;
	avg = sum/2 ;
	
	/*OUTPUT*/
	cout << "RESULT USING endl()\n" ;
	cout << "Sum = "<< sum << endl <<"Average = "<< avg << endl ;
	cout << "RESULT IN CASCADING STYLE\n" ;
	cout << "Sum = " << sum << ","
		<< "Average = " << avg ;
return 0 ;
}
