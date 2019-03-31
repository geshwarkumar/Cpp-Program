/*CPP PROGRAM TO CALCULATE AREA OF RECTANGLE
-GESHWAR KUAR
-20/10/2016*/

#include<iostream>
#include<math.h>
using namespace std;

class Area_rec
{
	/*VARIBLE DECLARATION*/	
	int base,width,aor;//aor=area of rectangle
	/*FUNCTION DECLARATION*/
	public :	
	Area_rec()
	{
		base = width = aor = 0;
	}
	void Input();
	void Calculate();
	void Output();
};
/*FUNCTION DEFINITION*/
void Area_rec :: Input()
{
	cout << "\n Enter the Base of a rectangle:" ; cin >> base ;
	cout << "\n Enter the Width of a rectangle:" ; cin >> width ;
}
void Area_rec :: Calculate()
{
	aor=base*width;
}
void Area_rec :: Output()
{
	cout << "\n The area of rectangle is: " << aor ;
	cout << endl ;
}
int main()
{

	Area_rec obj;
	obj.Input();
	obj.Calculate();
	obj.Output();
return 0 ;
}


