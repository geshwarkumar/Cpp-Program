/*C++ code to implement pure virtual function
-GESHWAR KUMAR*/

#include<iostream.h>

using namespace std ;
 
class  Base 
{
	private: int x;
		float y;
	public : virtual void getdata( );
		virtual void display( )=0;
};
class Dev : public Base
{
	private:  int roll;
		 char name[20];
	public : void getdata( );
		void  display( );
};	
void Base :: getdata( ){  }
 
void Dev :: getdata( )
{
	cout<<” Enter Roll of  the Student “;
	cin>> roll;
	cout<<” Enter name of  the student”;
	cin>>name;
}
void Dev :: display( )
{
	cout<<”Name is :”<<name<<endl;
	cout<<” Roll no is :”<<roll <<endl;
}
 
int main( )
{
	Base * ptr;
	Dev obj;

	ptr = &obj;
	ptr -> getdata( );
	ptr -> display( );
return 0 ;
}


