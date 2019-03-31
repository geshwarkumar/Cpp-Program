/*CPP PROGRAM TO DEMONSTRATE INHERITANSE USING CONSTRUCTOR
-GESHWAR KUMAR
-04/08/2016*/

#include<iostream.h>
#include<conio.h>

class Base  	//PARENT CLASS
{

	/*protected :
		int val ;*///NOT NEED
	public :
		Base()
		{
			cout << "\nBase class Dcost.";
		} /*Base(int n)
		{
			val = n ;
			cout << "\nValue in Base Class = " << val;
		}   *///NOT NEED
		~Base()
		{
			cout << "\nDestructor in Base class";
		}
};	//END BASE CLASS

class Derived1 : public Base 	//CHILD CLASS 1
{

	/*protected :
		int val ;*///NOT NEED
	public :
		Derived1()
		{
			cout << "\nDerived class 1 dcost.";
		}
		/*Base(int n)
		{
			val = n ;
			cout << "\nValue in Base Class = " << val;
		}   *///NOT NEED
		~Derived1()
		{
			cout << "\nDestructor in derived class 1.";
		}
};	//END BASE CLASS

class Derived2 : public Derived1    //CHILD CLASS 2
{
	public :
		Derived2()
		{
			cout << "\nDerived class 2 dcost.";
		}
		/*Derived(int b) : Base(b)
		{
			val = b ;
			cout << "\nDerived class 1 args const.\nvalue = " << val;
		} *///NOT NEED
		/*~Derived2()
		{
			cout << "\nDestructor in derived class 2.";
		} */

};//END CHILD CLASS

int main()
{
	Derived2 d;
return 0;
}

