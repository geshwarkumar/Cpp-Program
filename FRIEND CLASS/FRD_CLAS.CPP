/*CPP PROGRAM TO DEMONSTRATE FRIEND CLASS
-GESHWAR KUMAR
-02/08/2016*/

#include<iostream.h>
#include<conio.h>

class Cls1;
class Cls2
{
	private :
		int val_cls2;
	public :
		Cls2(){val_cls2=0;}
		Cls2(int n)
		{
			val_cls2 = n ;
		}
		void Output_cls2()
		{
			cout << "Value in cls2= "<<val_cls2<<endl;
		}
		friend class Cls1 ;
};
class Cls1
{
	private :
		int val_cls1;
	public :
		Cls1()
		{
			val_cls1=0;
		}
		Cls1(int n)
		{
			val_cls1 = n ;
		}
		void Output_cls1()
		{
			cout << "Value in cls1= "<<val_cls1<<endl;
		}
		void Access()
		{
			Cls2 c2,c3(33);
			c2.val_cls2 = 11 ;
			c3.Output_cls2();
			cout << "Value of cls2 inside cls1= " << c2.val_cls2;
		}
};
int main()
{
	clrscr();
	Cls1 c1(22);
	c1.Output_cls1();
	c1.Access();
getch();
return 0 ;
}

