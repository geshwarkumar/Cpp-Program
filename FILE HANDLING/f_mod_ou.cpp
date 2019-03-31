/*CPP PROGRAM TO DEMONSTRATE FILE MODE:OUT
-GESHWAR KUMAR
-27/09/2016*/

#include<fstream.h>

int main()
{
	char name[20];
	int marks;

	/*OBJECT*/
	ofstream fobj;

	/*OPEN FILE*/
	fobj.open("file_out.txt",ios::out);

	/*INPUT*/
	cout<<"Enter name: ";cin>>name;
	cout<<"Enter marks: ";cin>>marks;

	/*WRITE INTO FILE*/
	fobj<<name<<"\t";
	fobj<<marks<<endl;

	/*CLOSE FILE*/
	fobj.close();
return 0;
}//END MAIN