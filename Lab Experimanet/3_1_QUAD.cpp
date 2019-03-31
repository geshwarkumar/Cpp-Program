/*CPP PROGRAM TO CALCULATE QUADRATIC EQUATIONS
-GESHWAR KUAR
-18/10/2016*/

#include<iostream>
#include<math.h>
using namespace std;

class Quadtratic
{
	/*VARIBLE DECLARATION*/	
	float a,b,c,D;
	float res1,res2;
	/*FUNCTION DECLARATION*/
	public :	
	Quadtratic()
	{
		a = b = c = D = res1 = res2 = 0;
	}
	void Input();
	void Calculate();
	void Output();
};
/*FUNCTION DEFINITION*/
void Quadtratic :: Input()
{
	cout << "Enter three number:" ;
	cin >> a >> b >> c ;
}
void Quadtratic :: Calculate()
{
	D = ( b * b ) - ( 4 * a * c ) ;
	if(D>0)
	{
		res1=((-b)+sqrt(D))/2*a;
		res2=((-b)-sqrt(D))/2*a;
	}
	else if(D == 0)
	{
		res1=(-b)/2*a;
	}
}
void Quadtratic :: Output()
{
	if(D<0)
	{
		cout << "\nRoots are imaginary for D = " << D << " and can not be found.";
	}
	else if(D>0)
	{
		cout << "\nThe root are real and different for D = " << D ;
		res1=((-b)+sqrt(D))/2*a;
		res2=((-b)-sqrt(D))/2*a;
		cout << "\nResults are:\nres1 = " << res1 << "\nres2 = " << res2;
	}
	else
	{
		cout << "The roots equals : " << D ;
		res1=(-b)/2*a;
		cout << "\nResults are:\nres1 = " << res1;
	}
	cout << endl ;
}
int main()
{

	Quadtratic obj;
	obj.Input();
	obj.Calculate();
	obj.Output();
return 0 ;
}


