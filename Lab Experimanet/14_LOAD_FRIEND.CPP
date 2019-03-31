/*C++ program to overload unary (pre, post), binary operators using friend function
-Geshwar Kumar*/
#include<iostream>
using namespace std;
class Friend{
  	int x,y,z;
	int sum ;
	public:
		void get(){
			cout<<"Enter XYZ: ";
			cin>>x>>y>>z;
		}
		void disp(){
			cout<<x<<y<<z<<endl;
		}
		void friend operator-(Friend &S);//pass by reference 
		void friend operator +(Friend &S1,Friend &S2);
}s1;

void operator-(Friend &S){
S.x=-S.x;//object name must be used as it is a friend function
S.y=-S.y;
S.z=-S.z;
}
void operator +(Friend &S1,Friend &S2){
	cout << "Addition of two number: " << (S1.x + S2.y) << endl ;
}

int main(){
	s1.get();
	cout<<"BEFORE OVERLOADING\n";
s1.disp();
	cout<<"AFTER OVERLOADING \n";
	s1+s1;
	-s1;
s1.disp();
return 0;
}

