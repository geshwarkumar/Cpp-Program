/*CPP PROGRAM TO DEMONSTRATE MANIPULATORS OF FILE POINTER
-GESHWAR KUMAR
-27/09/2016*/

#include<iostream.h>
#include<iomanip.h>

class my_manip
{
	private :
		/*DECLARATION VARIABLE*/
		int width,precision;
		char fill;
	public :
		/*CONSTRUCTOR*/
		my_manip(int tw,int tp,char tf):width(tw),precision(tp),fill(tf)
		{}

		/*OVERLOADED OPERATOR << */
		friend ostream& operator << (ostream& os,my_manip obj);
};	//END CLASS

/*ACTUAL MANIPULATOR CALLED BY OVERLOADED OPERATOR <<*/
ostream& operator << (ostream& os,my_manip obj)
{
	os<< setw(obj.width) << setprecision(obj.precision) << setfill(obj.fill);
	os<<setiosflags(ios::showpoint|ios::right);
return os;
}
/*FUNCTION DEFINITION FOR OUTPUT*/
my_manip set_float(int w,int p,char f)
{
	return my_manip(w,p,f);//	NAMELESS OBJECT RETURN
}
/*MAIN FUNCTION*/
int main()
{
	  float f1=123.2734,f2=23.271,f3=16.1673;
	  cout << set_float(10,3,'*')<<f1<<endl;
	  cout << set_float(9,2,'^')<<f2<<endl;
	  cout << set_float(8,3,'*')<<f3<<endl;
return 0;
}//END MAIN