/*CPP PROGRAM TO CALCULATE FACTORIAL
-GESHWAR KUMAR
-13/07/2016*/

#include<iostream>
using namespace std;
/*CLASS DECLARATION AND DEFINITION*/
class Fact
{
	private :
		int fact,num ;
	public :
		void Input(int f)
		{
			fact = f ;
			cout<<"Enter the number: ";
			cin>>num ;
			cout << "Factorial of " << num;
		}
		void Calculate();
		void Output()
		{
			cout<<" is:"<<fact<<endl;
		}
};//END CLASS
/*FUNCTION DEFINITION*/
void Fact :: Calculate()
{
	while(num != 0)
	{
		fact = fact * num ;
		num-- ;
	}
}
/*MAIN FUNCTION*/
int main()
{
	Fact fct ;
	cout<<"/*CPP PROGRAM TO CALCULATE FACTORIAL OF GIVEN NUMBER*/"<<endl;
	fct.Input(1);
	fct.Calculate();
	fct.Output();
return 0;
}
