/*CPP PROGRAM TO DEMONSTRATE CONSTRUCTOR
-GESHWAR KUMAR
-15/07/2016*/

#include<iostream.h>
#include<conio.h>

class ExConst
{
	private :
		int num1,num2 ;	//DECLARATION
	public :
		/*CONSTRUCTER DECLARATION AND DEFINITION*/

		ExConst() //DEFAULT
		{
			cout<<"Default Constructer call succeed."<<endl;
			num1 = 0 ;
			num2 = 0 ;
		}
		ExConst(int n) //SINGLE ARGUMENT
		{
			cout<<"Single Argument Constructor call succeed."<<endl;
			num1 = n ;
			num2 = n ;
		}
		ExConst(int n1,int n2) //MULTI ARGS CONSTRUCTOR
		{
			cout<<"Multi Argument Constructer call succeed."<<endl;
			num1 = n1 ;
			num2 = n2 ;
		}
		ExConst(ExConst &c)   //COPY CONSTRUCTOR
		{
			cout<<"Copy constructer call succeed."<<endl;
			num1 = c.num1 ;
			num2 = c.num2 ;
		}
		void Output();//FUNCTION DECLARATION FOR OUTPUT
};	//END CLASS

/*OUTPUT FUNCTION DEFINITION*/
void ExConst :: Output()
{
	cout<<endl<<"Number1: "<<num1<<endl<<"Number2: "<<num2<<endl;
}

int main()	//MAIN FUNCTION
{
	/*CONSTRUCTION CALLING*/

	clrscr();
	cout<<"/*CPP PROGRAM TO DEMONSTRATE CONSTRUCTOR-GESHWAR KUMAR*/\n"<<endl;
	ExConst c1;    //DEFAULT
	ExConst c2(5);	//SINGLE ARGUMENT
	ExConst c3(2,3);	//MULTI ARGUMENT
	ExConst c4 = c1 ; //COPY CONSTRUCTOR CALL
	//OR ExConst c1,c2(5),c3(2,3);
	cout<<endl<<"Values after calling Defaut Constructor:";
	c1.Output();
	cout<<"Values after calling Single Argument Constructor:";
	c2.Output();
	cout<<"Values after calling Multi Argument Constructor:";
	c3.Output();
	cout<<"Values after calling Copy Constructor:";
	c4.Output();
return 0;
}	//END MAIN