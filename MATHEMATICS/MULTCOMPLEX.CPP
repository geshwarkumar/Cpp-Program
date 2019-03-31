/*CPP PROGRAM TO MULTIPLICATION OF TWO COMPLEX NUMBER USING RETURN TYPE FUNCTION
-GESHWAR KUMAR
-24/07/2016*/

#include<iostream> 	//FOR NEW VERSION
//#include<iostream.h>     //FOR OLD VERSION

using namespace std ;	//FOR NEW VERSION

class MultComplex
{
	private :
		int real,img,res_real,res_img ;
	public :
		/*CONSTRUCTER DEFINITION*/
		MultComplex()
		{
			real = img = res_real = res_img = 0;
		}
		/*FUNCTION DECLARATION*/
		void Input() ;
		MultComplex Multiply(MultComplex,MultComplex) ;
		void Output() ;
};	//END CLASS

/*FUNCTION DEFINITION OUTSIDE THE CLASS*/
void MultComplex :: Input()
{
	cout << "Real Part = " ;cin >> real ;
	cout << "Imaginary Part = ";cin >> img ;
}
MultComplex MultComplex :: Multiply(MultComplex m1,MultComplex m2)
{
	MultComplex temp ;
	
	temp.res_real = (m1.real * m2.real) - (m1.img * m2.img);
	temp.res_img = (m1.real * m2.img) + (m2.real * m1.img) ;
	
	cout << "\n Given complex number are : " <<  endl << "a + ib = " << m1.real << " + " << m1.img << "i" << endl ;	//FIRST COMPLEX NO
	cout << "c + id = "<< m2.real <<" + " << m2.img << "i" <<endl ;	//SECOND COMPLEX NO
return temp ;
}
void MultComplex :: Output()
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
	MultComplex d ,d1,d2,res; 	//CLASS OBJECT
	cout << endl << "/*CPP PROGRAM TO MULTIPLICATION OF TWO COMPLEX NUMBER\n-GESHWAR KUMAR\n-22/07/2016*/\n\n" ;
	/*FUNCTION CALLING USING OBJECT*/
	cout << "Enter the fisrt complex number:(a+ib)" << endl;
	d1.Input() ;
	cout << "Enter the second complex number:(c+id)" << endl ;
	d2.Input() ;
	res = d.Multiply(d1,d2);
	res.Output();
return 0 ;
}	//END MAIN
