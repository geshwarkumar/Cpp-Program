/*CPP PROGRAM TO SUBTRACTION OF TWO COMPLEX NUMBER USING RETURN TYPE FUNCTION
-GESHWAR KUMAR
-24/07/2016*/

#include<iostream> 	//FOR NEW VERSION
//#include<iostream.h>     //FOR OLD VERSION

using namespace std ;	//FOR NEW VERSION

class SubComplex
{
	private :
		int real,img,res_real,res_img ;
	public :
		/*CONSTRUCTER DEFINITION*/
		SubComplex()
		{
			real = img = res_real = res_img = 0;
		}
		/*FUNCTION DECLARATION*/
		void Input() ;
		SubComplex Sub(SubComplex,SubComplex) ;
		void Output() ;
};	//END CLASS

/*FUNCTION DEFINITION OUTSIDE THE CLASS*/
void SubComplex :: Input()
{
	cout << "Real Part = " ;cin >> real ;
	cout << "Imaginary Part = ";cin >> img ;
}
SubComplex SubComplex :: Sub(SubComplex c1,SubComplex c2)
{
	SubComplex temp ;
	
	temp.res_real = c1.real - c2.real ;
	temp.res_img = c1.img - c2.img ;
	
	cout << "\n Given complex number are : " <<  endl << "a + ib = " << c1.real << " + " << c1.img << "i" << endl ;	//FIRST COMPLEX NO
	cout << "c + id = "<< c2.real <<" + " << c2.img << "i" <<endl ;	//SECOND COMPLEX NO
return temp ;
}
void SubComplex :: Output()
{
	cout << "\nDifference = ";
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
	SubComplex d ,d1,d2,res; 	//CLASS OBJECT
	cout << endl << "/*CPP PROGRAM TO SUBTRACTION OF TWO COMPLEX NUMBER\n-GESHWAR KUMAR\n-22/07/2016*/\n\n" ;
	/*FUNCTION CALLING USING OBJECT*/
	cout << "Enter the fisrt complex number:(a+ib)" << endl;
	d1.Input() ;
	cout << "Enter the second complex number:(c+id)" << endl ;
	d2.Input() ;
	res = d.Sub(d1,d2);
	res.Output();
return 0 ;
}	//END MAIN
