/*CPP SAMPLE PROGRAM WITH CLASS
-GESHWAR KUMAR
-15/07/2016*/

#include<iostream.h>
#include<string.h>

class Student      //CLASS DEFINITION
{
    private :
		int rn;
		char *name,*branch;
    public :
		/*FUNCTION DEFINTION INLINE / IN INSIDE THE CLASS */ 
		void Input(int rni,char *namei,char *branchi) //FUNCTION WITH ARGS
		{
			rn = rni ;
			name = namei ;
			branch = branchi ;
		}
		void Output()
		{
			cout<<"Roll No : "<<rn<<endl<<"Name : "<<name<<endl<<"Branch : "<<branch;
		}
};//END CLASS

int main()	//MAIN FUNCTION
{
	cout<<"/*CPP PROGRAM TO DEMONSTRATE CLASS-GESHWAR KUMAR*/\n"<<endl;
	Student std,std1,std2 ;	//CLASS OBJECT
	/*FUNCTIONS CALLING*/
	std.Input(101,"name1","branch1");
	std.Output();
	std1.Input(102,"name2","branch2");
	std1.Output();
	std2.Input(103,"name2","branch2");
	std2.Output();
return 0;
}

