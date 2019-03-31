/*CPP PROGRAM TO IMPLEMENTATION OF NESTED CLASS
-GESHWAR KUMAR
-22/07/2016*/

#include<iostream> 	//FOR NEW VERSION
//#include<iostream.h>     //FOR OLD VERSION

using namespace std ;	//FOR NEW VERSION

class OuterClass     //OUTER/BASE CLASS
{
	private :
		int val_out ;
	public :
		/*DECLARATION OF INNER CLASS*/
		class InnerClass
		{
			private :
				int val_in ;
			public :
				void Input_in()
				{
					cout << "Enter the value for Inner class:" ;
					cin >> val_in ;
				}
				void Output();
		}in;	//INNER CLASS OBJECT //END INNER CLASS
	void Input_out()
	{
		cout << "Enter the value for Outer class:" ;
		cin >> val_out ;
		in.Input_in();	//CALLING INNER CLASS FUNCTION
	}
	void Output();
};	//END OUTER CLASS
/*FUNCTION DEFINITION OUTSIDE THE CLASS*/
void OuterClass :: InnerClass :: Output()	//FOR INNER CLASS
{
	cout << "\nValues of Inner Class: " << val_in ;
}
void OuterClass :: Output()   //FOR OUTER CLASS
{
	cout << "\nValues of Outer Class: " << val_out ;
	in.Output(); 	//CALLING INNER CLASS FUNCTION
	cout << endl;
}

int main()	//MAIN FUNCTION
{
	OuterClass cls ;
	cout << endl << "/*CPP PROGRAM TO IMPLEMENTATION OF NESTED CLASS\n-GESHWAR KUMAR\n-22/07/2016*/\n\n" ;
	cls.Input_out() ;
	cls.Output() ;
return 0 ;
}	//END MAIN
