/*CPP PROGRAM TO CONCATE TWO STRING
-GESHWAR KUMAR
-28/07/2016*/

#include<iostream.h>
#include<string.h>

class ConStr           //CLASS DEFINITION
{
	private :
		char *str1,*str2,*con_str ;
	public :
		/*CONSTRUCTER DEFINITION*/
		ConStr()
		{
			str1 = str2 = con_str = '\0';
		}
		/*FUNCTION DEFINITION*/
		void Input()
		{
			cout << "Enter 1st string";
		Concate operator +(Concate con)
		{
			Concate c3 ;
			c3.con_str = strcat(str1,con.str2);
			return c3 ;
		}

		void Output()
		{
			cout << "\nConcated String is: " << con_str ;
		}
};
int main()
{
	Concate c,c1("Ram"),c2(0,"Mohan");
	c = c1 + c2 ;
	c.Output();

return 0;
}