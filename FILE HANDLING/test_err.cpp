/*CPP PROGRAM TO TESTING OF ERROR
-GESHWAR KUMAR
-26/09/2016*/
#include<fstream.h>

int main()
{
	ifstream fobj("student.out");

	if(!fobj)
	{
		 cerr<<"Cannot open test.txt\n";
		 exit(1);
	}

return 0;
}
