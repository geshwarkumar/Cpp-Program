/*CPP PROGRAM TO OVERLOAD AND WITHOUT OVERLOAD THE OPERATORS +,-,*,/,+=,-=,*=,/= FOR COMPLEX NUMBERS
-GESHWAR KUMAR
-21/10/2016*/

#include<iostream>
#include<math.h>

using namespace std;

/*CLASS DEFINITION*/
class Complex
{
	/*VARIABLE DECLARATION*/
		int real,img,res_real,res_img ;
	public :
		/*CONSTRUCTER DEFINITION*/
		Complex()
		{
			real = img = res_real = res_img = 0;
		}
		Complex(Complex c1,Complex c2)
		{
			cout << "\n Given complex number are : " <<  endl << "a + ib = " << c1.real << " + " << c1.img << "i" << endl ;	//FIRST COMPLEX NO
			cout << "c + id = "<< c2.real <<" + " << c2.img << "i" <<endl ;	//SECOND COMPLEX NO

		}
		/*FUNCTION DECLARATION*/
		void Input() ;
                void Output() ;
		Complex Add(Complex,Complex);
		Complex Sub(Complex,Complex);
		Complex Div(Complex,Complex);
		Complex Multiply(Complex,Complex);
		/*OPERATOR OVERLOAD*/
		Complex operator +(Complex) ;
		Complex operator -(Complex) ;
		Complex operator *(Complex) ;
		Complex operator /(Complex) ;
		
};//END CLASS
/*FUNCTION DEFINITION INPUT & OUTPUT*/
void Complex :: Input()
{
	cout << "Real Part = " ;cin >> real ;
	cout << "Imaginary Part = ";cin >> img ;
}
void Complex :: Output()
{
	if(res_img >= 0)
	{
		cout << res_real << " + i" << res_img ;
	}
	else
	{
		cout << res_real << " " << res_img << "i" ;
	}	
	cout << endl ;
}//END
/*FUNCTION DEFINITION FOR OPERATION WITHOUT OVERLOADING*/
Complex Complex :: Add(Complex c1,Complex c2)
{
	Complex temp ;
	
	temp.res_real = c1.real + c2.real ;
	temp.res_img = c1.img + c2.img ;
	
return temp ;
}
Complex Complex :: Sub(Complex c1,Complex c2)
{
	Complex temp ;
	
	temp.res_real = c1.real - c2.real ;
	temp.res_img = c1.img - c2.img ;
	
return temp ;
}
Complex Complex :: Multiply(Complex c1,Complex c2)
{
	Complex temp ;
	
	temp.res_real = (c1.real * c2.real) - (c1.img * c2.img);
	temp.res_img = (c1.real * c2.img) + (c2.real * c1.img) ;
	
return temp ;
}
Complex Complex :: Div(Complex c1,Complex c2)
{
	Complex temp ;
	
	temp.res_real = ((c1.real * c2.real) + (c1.img * c2.img)) / (pow(c2.real,2)+pow(c2.img,2)) ;
	temp.res_img = ((c1.img * c2.real) - (c1.real * c2.img)) / (pow(c2.real,2)+pow(c2.img,2)) ;
	
return temp ;
}

/*FUNCTION DEFINITION FOR OPERATION WITH OVERLOADING*/
Complex Complex :: operator +(Complex c)
{
        Complex temp;
	temp.res_real = real + c.real ;
	temp.res_img = img + c.img ;
return temp ; 
}
Complex Complex :: operator -(Complex c)
{
        Complex temp ;
	
	temp.res_real = real - c.real ;
	temp.res_img = img - c.img ;
	
return temp ; 
}
Complex Complex :: operator *(Complex c)
{
        Complex temp ;
	
	temp.res_real = (real * c.real) - (img * c.img);
	temp.res_img = (real * c.img) + (c.real * img) ;
		
return temp ; 
}
Complex Complex :: operator /(Complex c)
{
        Complex temp ;
	
	temp.res_real = ((real * c.real) + (img * c.img)) / (pow(c.real,2)+pow(c.img,2)) ;
	temp.res_img = ((img * c.real) - (real * c.img)) / (pow(c.real,2)+pow(c.img,2)) ;
		
return temp ; 
}
int main()	//MAIN FUNCTION
{
	Complex com ,com1,com2,res; 	//CLASS OBJECT
	cout << endl << "/*CPP PROGRAM TO ADDITION OF TWO COMPLEX NUMBER\n-GESHWAR KUMAR\n-22/07/2016*/\n\n" ;
	/*FUNCTION CALLING USING OBJECT*/
	cout << "Enter the fisrt complex number:(a+ib)" << endl;
	com1.Input() ;
	cout << "Enter the second complex number:(c+id)" << endl ;
	com2.Input() ;
	Complex com3(com1,com2);
	/*CALL FUNCTION Add WITHOUT OVERLOAD*/
	cout << "RESULT WITHOUT OVERLOADING:" << endl ;
	res = com.Add(com1,com2);
	cout << "Addition of two complex number without overload + operator:" << endl;
	res.Output();

	res = com.Sub(com1,com2);
	cout << "Substraction of two complex number without overload - operator:" << endl;
	res.Output();
	
	res = com.Multiply(com1,com2);
	cout << "Multiplication of two complex number without overload * operator:" << endl;
	res.Output();

	res = com.Div(com1,com2);
	cout << "Division of two complex number without overload / operator:" << endl;
	res.Output();

	/*CALL FUNCTION Add WITH OVERLOAD*/
	cout << "RESULT WITH OVERLOADING:" << endl ;
	res = com1 + com2 ;
	cout << "Addition of two complex number with overload + operator:" << endl;
	res.Output();

	res = com1 - com2 ;
	cout << "Substraction of two complex number with overload - operator:" << endl;
	res.Output();

	res = com1 * com2 ;
	cout << "Multiplication of two complex number with overload * operator:" << endl;
	res.Output();

	res = com1 / com2 ;
	cout << "Division of two complex number with overload / operator:" << endl;
	res.Output();

return 0 ;
}	//END MAIN
