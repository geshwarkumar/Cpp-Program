/*CPP PROGRAM TO DIVISION OF TWO COMPLEX NUMBER USING RETURN TYPE FUNCTION
-GESHWAR KUMAR
-24/07/2016*/

#include<iostream> 	//FOR NEW VERSION
//#include<iostream.h>     //FOR OLD VERSION

using namespace std ;	//FOR NEW VERSION

class DivComplex
{
	private :
		int real,img,res_real,res_img ;
	public :
		/*CONSTRUCTER DEFINITION*/
		DivComplex()
		{
			real = img = res_real = res_img = 0;
		}
		/*FUNCTION DECLARATION*/
		void Input() ;
		DivComplex Division(DivComplex,DivComplex) ;
		void Output() ;
};	//END CLASS

/*FUNCTION DEFINITION OUTSIDE THE CLASS*/
void DivComplex :: Input()
{
	cout << "Real Part = " ;cin >> real ;
	cout << "Imaginary Part = ";cin >> img ;
}
DivComplex DivComplex :: Division(DivComplex d1,DivComplex d2)
{
	DivComplex temp ;
	if(d2.real == 0 && d2.img == 0)
	{
		cout << "Division by '0 + 0i' is not allowed...";
		exit(0) ;
	}
	else
	{
		
	}
	cout << "\n Given complex number are : " <<  endl << "a + ib = " << d1.real << " + " << d1.img << "i" << endl ;	//FIRST COMPLEX NO
	cout << "c + id = "<< d2.real <<" + " << d2.img << "i" <<endl ;	//SECOND COMPLEX NO
return temp ;
}
void DivComplex :: Output()
{
	cout << "\nMultiplication = ";
	if(res_img >= 0)
	{
		cout << res_real << " + " << res_img << "i" ;
	}
	else
	{
		cout << res_real << " " << res_img << "i" ;
	}
}
int main()	//MAIN FUNCTION
{
	DivComplex d ,d1,d2,res; 	//CLASS OBJECT
	cout << endl << "/*CPP PROGRAM TO DIVISION OF TWO COMPLEX NUMBER\n-GESHWAR KUMAR\n-22/07/2016*/\n\n" ;
	/*FUNCTION CALLING USING OBJECT*/
	cout << "Enter the fisrt complex number:(a+ib)" << endl;
	d1.Input() ;
	cout << "Enter the second complex number:(c+id)" << endl ;
	d2.Input() ;
	res = d.Division(d1,d2);
	res.Output();
return 0 ;
}	//END MAIN
