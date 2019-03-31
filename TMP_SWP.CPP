/*CPP PROGRAM TO DEMONSTRATE TEMPLATE IN FUNCTION
-15/09/2016
-GESHWAR KUMAR
*EX.-SWAPING
*/

#include<iostream.h>
#include<conio.h>

template<class Swap>
/*FUNCTION FOR SWAPPING*/
void funSwap(Swap &first,Swap &second)
{
	Swap temp ;
	/*METHOD*/
	temp = first ;
	first = second ;
	second = temp ;

	/*OUTPUT AFTER SWAPPING*/
	cout << "After Swapping Values are :\n" ;
	cout << "First Value = " << first ;
	cout << "Second Values = " << second ;
}

int main()
{
	/*DECLARATION*/
	int vali1,vali2 ;	//INTEGER VALUE
	double valf1,valf2 ;	//FLOAT VALUE
	char *valc1,*valc2 ;	//CHAR OR STRING VALUE
	clrscr();
	/*INPUT*/
	cout << "\nEnter Integer value:\n";
	cout << "Enter first value: ";cin >> vali1 ;
	cout << "Enter second value: ";cin >> vali2 ;

	cout << "\nEnter Float value:\n";
	cout << "Enter first value: ";cin >> valf1 ;
	cout << "Enter second value: ";cin >> valf2 ;

	cout << "\nEnter Character value:\n";
	cout << "Enter first value: ";cin >> valc1 ;
	cout << "Enter second value: ";cin >> valc2 ;

	funSwap(valc1,valc2); //SWAP CAHRACTER

	cout << "\nEnter String value:\n";
	cout << "Enter first value: ";cin >> valc1 ;
	cout << "Enter second value: ";cin >> valc2 ;

	/*FUNCTION CALLING*/
	funSwap(vali1,vali2); //SWAP INTEGER
	funSwap(valf1,valf2); //SWAP FLOAT

	funSwap(valc1,valc2); //SWAP STRING

	/*OUTPUT BEFORE SWAPPING*/
	/*cout << "Before Swapping Values are :\n" ;
	cout << "\nInteger Values:\n";
	cout << "First Value = " << vali1 ;
	cout << "Second Values = " << vali2 ;

	cout << "\nFloat Values:\n";
	cout << "First Value = " << valf1 ;
	cout << "Second Values = " << valf2 ;

	cout << "\nCharacter Values:\n";
	cout << "First Value = " << valc1 ;
	cout << "Second Values = " << valc2 ;

	cout << "\nString Values:\n";
	cout << "First Value = " << valc1 ;
	cout << "Second Values = " << valc2 ; */

getch();
return 0;
}

