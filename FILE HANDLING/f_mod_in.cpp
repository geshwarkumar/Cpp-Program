/*CPP PROGRAM TO DEMONSTRATE FILE MODE:IN
-GESHWAR KUMAR
-27/09/2016*/

#include<fstream.h>

int main()
{
	char name[20];
	int marks;

	/*OBJECT*/
	ifstream fobj;

	/*OPEN FILE*/
	fobj.open("file_out.txt",ios::in);

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