/*CPP PROGRAM TO DEMONSTRAT FILE HANDLING READ()
-GESHWAR KUMAR
-23/09/2016*/
#include<fstream.h>
int main()
{
		char name[30];
		int marks;
		
		ifstream fin("student.out");//connect student.out to fout
		//read first student details
		fin>>name;
		fin>>marks;
		/*OUTPUT*/
		cout<<"Enter name:"<<name<<endl;
		cout<<"Enter Marks:"<<marks<<endl;

		//read second student details
		fin>>name;
		fin>>marks;
		/*OUTPUT*/
		cout<<"Enter name:"<<name<<endl;
		cout<<"Enter Marks:"<<marks<<endl;

return 0;
}