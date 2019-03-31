/*CPP PROGRAM TO DEMONSTRATE INHERITANSE USING CONSTRUCTOR
-GESHWAR KUMAR
-04/08/2016*/

#include<iostream.h>
#include<conio.h>

class Base  	//PARENT CLASS
{

	protected :
		int val ;
	public :
		Base()
		{
			cout << "\nBase class cost.";
		}
		Base(int n)
		{
			val = n ;
			cout << "\nValue in Base Class = " << val;
		}
};	//END BASE CLASS

class Derived : public Base    //CHILD CLASS
{
	public :

		Derived(int b)
		{
			val = b ;
			cout << "\nDerived class 1 args const.\nvalue = " << val;
		}

};//END CHILD CLASS
int main()
{
	Derived d(11);
return 0;
}

