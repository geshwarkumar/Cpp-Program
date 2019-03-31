/*CPP PROGRAM TO ADDITION OF TWO COMPLEX NO USING OPERATOR OVERLOADING AND INPUT COMPILE TIME
-GESHWAR KUMAR
-29/07/2016*/

#include<iostream.h>

class AddComp
{
	private :
		int real,img,res_real,res_img ;
	public :
		AddComp()
		{
			real = img = res_real = res_img = 0;
		}
		AddComp(int r)
		{
			 real = img = r ;
		}
		AddComp(int r,int i)
		{
			 real = r ,img = i ;
		}
		AddComp operator +(AddComp c1)
		{
			AddComp c3;
			c3.res_real = real + c1.real ;
			c3.res_img = img + c1.img ;
		return c3 ;
		}
		void Output();

};
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
{
	AddComp c,c1(2),c2(2,3);
	c = c1 + c2 ;
	c.Output();

return 0;
}