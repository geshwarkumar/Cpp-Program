/*CPP PROGRAM TO CHANGE THE SIGHN OF ANY NUMBER
-GESHWAR KUMAR
-27/07/2016*/

#include<iostream>
using namespace std ;
class Change
{
	private :
		int num ;
	public :
		Change()
		{
			num = 5;
		}
		void operator -()
		{
			  num = num * (-1) ;//-num ;
		}

		void Output()
		{
			cout << endl << num;
		}
};
int main()
{
	Change ch;
	-ch;
	ch.Output();
return 0;
}
