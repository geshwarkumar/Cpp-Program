/*CPP PROGRAM TO OPEN FILE IN WRITE MODE
-GESHWAR KUMAR
-26/09/2016*/
#include<fstream.h>

int main()
{
	ofstream fobj;     //OBJECT FOR OUTPUT STREAM

	int empid;
	char name[20],add[20];

	fobj.open("employee");      //OPEN THE FILE

	/*READ DATA TO WRITE INTO FILE*/
	cout<<"Eid:";cin>>empid;
	cout<<"Name:";cin>>name;
	cout<<"Address:";cin>>add;

	/*WRITE INTO FILE*/
	fobj<<empid<<endl;
	fobj<<name<<endl;
	fobj<<add<<endl;

	fobj.close();	//CLOSE THE FILE

return 0;
}
