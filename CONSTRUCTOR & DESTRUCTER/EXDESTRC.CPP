/*CPP PROGRAM TO DEMONSTRATE DESTRUCTOR
-GESHWAR KUMAR
-15/07/2016*/

/*#include<iostream.h>
#include<conio.h>*/
#include<iostream>
#include<stdlib.h>

using namespace std ;
class ExConst
{
	private :
		int num1,num2 ;	//DECLARATION
	public :
		/*CONSTRUCTER DECLARATION AND DEFINITION*/

		ExConst() //DEFAULT
		{
			cout<<"This is Default Constructer."<<endl;
			num1 = 0 ;
			num2 = 0 ;
		}
		ExConst(int n) //SINGLE ARGUMENT
		{
			cout<<"This is Single Argument Constructor."<<endl;
			num1 = n ;
			num2 = n ;
		}
		ExConst(int n1,int n2)
		{
			cout<<"This is Multi Argument Constructer."<<endl;
			num1 = n1 ;
			num2 = n2 ;
		}
		~ExConst()	//DESTRUCTOR
		{
			cout<<"This is Destructer."<<endl;
		}
		void Output();//FUNCTION DECLARATION FOR OUTPUT
};	//END CLASS

/*OUTPUT FUNCTION DEFINITION*/
void ExConst :: Output()
{
	cout<<"Values :"<<endl<<"Number1: "<<num1<<endl<<"Number2: "<<num2<<endl;
}

int main()	//MAIN FUNCTION
{
	/*CONSTRUCTION CALLING*/
	system("cls");
	//clrscr();
	ExConst c1;    //DEFAULT
	ExConst c2(5);	//SINGLE ARGUMENT
	ExConst c3(2,3);	//MULTI ARGUMENT
	c1.Output();
	c2.Output();
	c3.Output();
system("pause");
return 0;
}	//END MAIN
