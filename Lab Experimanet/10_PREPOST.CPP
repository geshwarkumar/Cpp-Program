/*CPP PROGRAM TO DEMONSTRATE PRE AND POST INCREAMENT
-GESHWAR KUMAR
-27/07/2016*/

#include<iostream>

using namespace std ;

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
			++count ;			
		return *(this);
		}
		Counter operator ++(int) //POST
		{
			count++ ;			
		return *(this);
		}
		Counter operator --()
		{
			--count ;			
		return *(this);
		}
		Counter operator --(int) //POST
		{
			count-- ;			
		return *(this);
		}
		void Output()
		{
			cout << count << endl ;
		}
};
int main()
{
	Counter c,c1 ;
	cout << "POST INCREAMENT OPERATOR:";
	c1=c++ ;
	c1.Output();
	cout << "PRE INCREAMENT OPERATOR:";
	c1=++c;
	c1.Output();
	cout << "POST DECREAMENT OPERATOR:";
	c1=c-- ;
	c1.Output();
	cout << "PRE DECREAMENT OPERATOR:";
	c1=--c;
	c1.Output();
return 0;
}
