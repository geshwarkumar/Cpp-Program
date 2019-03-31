/*CPP PROGRAM TO ADDITION OF TWO COMPLEX NO USING OPERATOR OVERLOADING AND INPUT RUN TIME
-GESHWAR KUMAR
-29/07/2016*/

#include<iostream.h>
#include<conio.h>

class AddComp
{
	private :
		int real,img,res_real,res_img ;
	public :
		AddComp()
		{
			real = img = res_real = res_img = 0;
		}
		void Input()
		{
			cout << "Real part = ";cin >> real;
			cout << "Imaginary part = ";cin >> img;
		}

		AddComp operator +(AddComp);
		/*{
			AddComp c3;
			c3.res_real = real + c1.real ;
			c3.res_img = img + c1.img ;
		return c3 ;
		} */
		void Output();

};
AddComp AddComp :: operator +(AddComp c1)
{
	AddComp c3;
	c3.res_real = real + c1.real ;
	c3.res_img = img + c1.img ;
return c3 ;
}
void AddComp :: Output()
{
	if(res_img > 0)
	{
		cout << res_real << " + " << res_img << "i";
	}
	else
	{
		cout << res_real << " " << res_img << "i";
	}
}
int main()
{    clrscr();
	AddComp c,c1,c2;
	cout<<"Enter 1st complex no:\n";
	c1.Input();
	cout<<"\nEnter 2nd complex no:\n";
	c2.Input();
	cout<<"\nResult = ";
	c = c1 + c2 ;
	c.Output();
return 0;
}