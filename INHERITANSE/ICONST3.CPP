/*CPP PROGRAM TO DEMONSTRATE INHERITANSE USING CONSTRUCTOR
-GESHWAR KUMAR
-04/08/2016*/

#include<iostream.h>
#include<conio.h>

class Base  	//PARENT CLASS
{

	public :
		Base()
		{
			cout << "\nBase class cost.";
		}
};	//END BASE CLASS

class Derived : public Base    //CHILD CLASS
{
	public :
		Derived()
		{
			cout << "\nDerived class const.";
		}

};//END CHILD CLASS
int main()
{
	Derived d;
return 0;
}

