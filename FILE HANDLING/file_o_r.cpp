/*CPP PROGRAM TO OPEN FILE IN WRITE MODE
-GESHWAR KUMAR
-26/09/2016*/
#include<fstream.h>

int main()
{
	ifstream fobj;     //OBJECT FOR INPUT STREAM

	int empid;
	char name[20],add[20];

	fobj.open("employee");      //OPEN THE FILE

	/*READ FROM FILE*/
	fobj>>empid;
	fobj>>name;
	fobj>>add;

	/*READ DATA TO WRITE INTO FILE*/
	cout<<"Eid:"<<empid<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Address:"<<add;


	fobj.close();	//CLOSE THE FILE

return 0;
}
