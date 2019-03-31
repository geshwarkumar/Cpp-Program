/*CPP program to Overload Operator +(string concatenation) ,< ,> == (String Comparison)for string operations.
-GESHWAR KUMAR
-28/07/2016*/

#include<iostream>
#include<string.h>

using namespace std ;

class StrOpr           //CLASS DEFINITION
{
	private :
		char *str1,*str2,*con_str ;
	public :
		/*CONSTRUCTER DEFINITION*/
		StrOpr()
		{
			str1 = str2 = con_str = '\0';
		}
		
		void getstring()//INPUT STRING
		{	
			cout << "Enter first string: " ; 
			cin >> str1 ; 
			cout << "Enter second string: " ;
			cin >> str2 ; 	
			//strcpy(str,s);
		}
		void operator +(StrOpr con)
		{
			/*StrOpr c3 ;
			c3.con_str = strcat(str,con.str);
			return c3 ;*/
			strcat(str1,con.str2);
		}
		/*StrOpr operator ==(StrOpr com1)
		{
			if(strcmp(str,com1.str)==0)
        			cout<<"\nStrings are Equal";
    			else
        			cout<<"\nStrings are not Equal";
		}
		StrOpr operator <(StrOpr com2)
		StrOpr operator >(StrOpr com3)*/

		void Output()
		{
			cout << "\nConcated String is: " << con_str ;
		}
};
int main()
{
	StrOpr c,c1,c2;
	/*char *string1,*string2 ;
	cout << "Enter first string: " ; 
	cin >> string1 ; 
	c1.getstring(string1);
	cout << "Enter second string: " ;
	cin >> string2 ; 
	c2.getstring(string2);*/
	c.getstring();
	+c ;
	c.Output();

return 0;
}
