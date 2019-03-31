/*CPP PROGRAM TO DEMONSTRATE ENUMRATED DATATYPE
-GESHWAR KUMAR
-04/08/2016*/

#include<iostream>
#include<stdlib.h>

using namespace std ;
/*ENUMRATED DATATYPE DECLARATION*/
enum shape
{
	circle ,
	rectangle ,
	triangle	
};

/*MAIN FUNCTION*/
int main()
{	
	system("cls");
	cout << "Enter shape code: ";
	int code ;
	cin >> code ;
	
	while(code >= circle && code <= triangle)
	{
		switch(code)
		{
				case circle :
						cout << "Circle code = " << code ;
					break;
				case rectangle :
						cout << "Rectangle code = " << code ;
					break ;
				case triangle :
						cout << "Triangle code = " << code ;
					break;
		}
		cout << "\nEnter shape code: "; cin >> code ;
	}
	cout << "BYE \n" ;
	system("pause");
return 0 ;
}
