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
		/*FUNCTION DECLARATION*/
		void Input(int,int);
		int Add();
		void Output(int);
};	//END CLASS
/*FUNCTION DEFINTION*/
void Check :: Input(int n1,int n2)
{
	num1 = n1 ;
	num2 = n2 ;
}
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
	int no1,no2,result ;
	cout<<"Input:";
	cin>>no1>>no2;
	/*FUNCTION CALLING*/
	c.Input(no1,no2);
	result = c.Add();
	c.Output(result);
return 0;
}
