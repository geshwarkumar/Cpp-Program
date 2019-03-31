/*CPP PROGRAM TO IMPLEMENT MULTIPATH
-GESHWAR KUMAR
-10/08/2016*/

#include<iostream.h>
#include<conio.h>

class Student    //BASE CLASS
{
	protected :
		int rollno;
		char name[20],branch[10];
	public :
		void Input()
		{
			cout << "\nEnter Rollno,Name & Branch:\n";
			cin >> rollno >> name >> branch;
		}
		void Output()
		{
			cout << "Rollno = "<<rollno<<" Name = "<<name<<" Branch = "<<branch;
		}
};    //END BASE CLASS
class InternalExam : virtual public Student	//DERIVED CLASS 1
{
	protected :
		int s1,s2 ;
	public :
		void InputD()
		{
			cout << "\nEnter Internal Marks(s1 & s2): " ;
			cin >> s1 >> s2 ;
		}
		void OutputD()
		{
			cout << "\nObtained Internal Marks: s1 = "<<s1<<" s2 = "<<s2;
		}
		int TotalInt()
		{
			return (s1+s2);
		}
};	//END DERIVED CLASS 1
class ExternalExam : public virtual Student	//DERIVED CLASS 2
{
	protected :
		int p1,p2 ;
	public :
		void InputD()
		{
			cout<<"\nEnter External Marks(p1 & p2): ";
			cin>>p1>>p2;
		}
		void OutputD()
		{
			cout << "\nObtained External Marks: p1 = "<<p1<<" p2 = "<<p2;
		}
		int TotalExt()
		{
			return (p1 + p2);
		}
};	//END DERIVED CLASS 2
class Result : public InternalExam,public ExternalExam	//SUBDERIVED CLASS
{
	protected :
		int total ;
	public :
		void Total()
		{
			total = TotalInt() + TotalExt() ;	//THROUGH FUCTIONS
		}
		void OutputD()
		{
			cout << "\nTotal Marks: "<<total;
		}
};	//END SUBDERIVED CLASS
int main()	//MAIN FUNCTION
{
	clrscr();
	Result res ;
	/*INPUT FUNCTIONS CALL*/
	res.Input(); //BASE CLASS
	res.InternalExam :: InputD();	//DERIVED CLASS 1
	res.ExternalExam :: InputD();	//DERIVED CLASS 2
	/*CALCULATE FUNCTIONS CALL*/
	res.Total();	//SUBDERIVED CLASS
	/*OUTPUT FUNCTION CALL*/
	res.Output();	//BASE CLASS
	res.InternalExam :: OutputD();	//DERIVED CLASS 1
	res.ExternalExam :: OutputD();	//DERIVED CLASS 2
	res.OutputD();	//SUBDERIVED CLASS
getch();
return 0;
}