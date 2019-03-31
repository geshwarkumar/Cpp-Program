/*CPP PROGRAM TO I/O OPERATION ON FILE ,RANDOM
-GESHWAR KUMAR
-04/10/2016*/
#include<iostream.h>
#include<fstream.h>
#define R_SIZE 6
int main()
{
	char reader[R_SIZE+1];

	fstream fstr("test.del",ios::binary|ios::in|ios::out);
	for(int i=0;i<10;i++)
	{
		fstr<<i;
	}
	fstr.seekg(2);

	fstr<<"Hello";

	fstr.seekg(4);
	fstr.read(reader,R_SIZE);

	reader[R_SIZE]=0;
	cout<<reader<<endl;
return 0;
}
