/*CPP PROGRAM FOR PASS VALUES IN RUN TIME
-GESHWAR KUMAR
-18/07/2016*/

#include<iostream.h>

class Check
{
	/*DECLARATION*/
	private :
		int num1,num2,add ;
	public :
		/*CONSTRUCTOR DEFINITION*/
		Check()
		{
			cout<<"Enter two values:";
			cin>>num1>>num2 ;
		}
		/*FUNCTION DECLARATION*/
		int Add();
		void Output(int);
};	//END CLASS
/*FUNCTION DEFINTION*/
int Check :: Add()
{
	add = num1 + num2 ;
return add ;
}
void Check :: Output(int res)
{
    cout<<"\nValues:\nNumber1 = "<<num1<<"\tNumber2 = "<<num2<<"\nResult = "<<res;
}
/*MAIN FUNCTION*/
int main()
{

	Check c;	//CLASS OBJECT
	int result;
	/*FUNCTION CALLING*/
	result = c.Add();
	c.Output(result);
return 0;
}
