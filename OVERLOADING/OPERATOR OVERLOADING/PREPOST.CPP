/*CPP PROGRAM TO DEMONSTRATE PRE AND POST INCREAMENT
-GESHWAR KUMAR
-27/07/2016*/

#include<iostream.h>

class Counter
{
	private :
		int count ;
	public :
		Counter()
		{
			count = 0;
		}
		Counter operator ++()    //PRE
		{
			return Counter(++count);
		}
		Counter operator ++(int) //POST
		{
			return Counter(count++);
		}
		void Output()
		{
			cout << count ;
		}
};
int main()
{
	Counter c,c1 ;
	c1=c++ ;
	c1.Output();
	c1=++c;
	c1.Output();
return 0;
}
