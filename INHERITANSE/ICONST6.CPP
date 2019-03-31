/*CPP PROGRAM TO DEMONSTRATE INHERITANSE USING CONSTRUCTOR
-GESHWAR KUMAR
-04/08/2016*/

#include<iostream.h>
#include<conio.h>

class Base1  	//PARENT CLASS 1
{

	/*protected :
		int val ;*///NOT NEED
	public :
		Base1()
		{
			cout << "\nBase class 1 Dcost.";
		} /*Base(int n)
		{
			val = n ;
			cout << "\nValue in Base Class = " << val;
		}   *///NOT NEED
};	//END BASE CLASS

class Base2 	//PARENT CLASS 2
{

	/*protected :
		int val ;*///NOT NEED
	public :
		Base2()
		{
			cout << "\nBase class 2 dcost.";
		}
		/*Base(int n)
		{
			val = n ;
			cout << "\nValue in Base Class = " << val;
		}   *///NOT NEED
};	//END BASE CLASS

class Derived : public Base1,public Base2    //CHILD CLASS
{
	public :
		Derived()
		{
			cout << "\nDerived class dcost.";
		}
		/*Derived(int b) : Base(b)
		{
			val = b ;
			cout << "\nDerived class 1 args const.\nvalue = " << val;
		} *///NOT NEED

};//END CHILD CLASS

int main()
{
	Derived d;
return 0;
}

