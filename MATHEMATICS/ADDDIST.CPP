/*CPP PROGRAM TO ADDITION OF TWO DISTANCE
-GESHWAR KUMAR
-22/07/2016*/

#include<iostream> 	//FOR NEW VERSION
//#include<iostream.h>     //FOR OLD VERSION

using namespace std ;	//FOR NEW VERSION

class AddDist
{
	private :
		int feet,inch,res_feet,res_inch ;
	public :
		/*CONSTRUCTER DEFINITION*/
		AddDist()
		{
			feet = inch = res_feet = res_inch = 0;
		}
		/*FUNCTION DECLARATION*/
		void Input() ;
		void Add(AddDist,AddDist) ;
		void Output() ;
};	//END CLASS

/*FUNCTION DEFINITION OUTSIDE THE CLASS*/
void AddDist :: Input()
{
	//cout << "Enter The Length:" << endl ;
	cout << "Feet = " ;cin >> feet ;
	cout << "Inch = ";cin >> inch ;
}
void AddDist :: Add(AddDist d1,AddDist d2)
{
	//res_feet = d1.feet + d2.feet ;
	res_inch = d1.inch + d2.inch ;
	
	if(res_inch > 12)
	{
		res_feet = d1.feet + d2.feet + (res_inch / 12);
		res_inch = res_inch % 12 ;
	}
	else
	{
		res_feet = d1.feet + d2.feet ;
	}
}
void AddDist :: Output()
{
	cout << "\n Result : " <<  endl << "Feet = " << res_feet << "\tInch = " << res_inch;
}
int main()	//MAIN FUNCTION
{
	AddDist d ,d1,d2; 	//CLASS OBJECT
	cout << endl << "/*CPP PROGRAM TO ADDITION OF TWO DISTANCE\n-GESHWAR KUMAR\n-22/07/2016*/\n\n" ;
	/*FUNCTION CALLING USING OBJECT*/
	cout << "Enter the fisrt length:" << endl ;
	d1.Input() ;
	cout << "Enter the second length:" << endl ;
	d2.Input() ;
	d.Add(d1,d2);
	d.Output();
return 0 ;
}	//END MAIN
