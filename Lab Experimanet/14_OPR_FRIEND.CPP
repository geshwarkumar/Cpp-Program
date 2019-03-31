/*C++ program to overload unary (pre, post), binary operators using friend function
-GESHWAR KUMAR*/
#include<iostream>

using namespace std;

class xyz{
  int x;
	int y;
	int z;
	public:
		void get(){
			cout<<"XYZ please\n";
			cin>>x>>y>>z;
		}
		void disp(){
			cout<<x<<y<<z<<endl;
		}
		void friend operator-(xyz &S);//pass by reference 
}s1;

void operator-(xyz &S){
S.x=-S.x;//object name must be used as it is a friend function
S.y=-S.y;
S.z=-S.z;
}
int main(){
	s1.get();
	cout<<"BEFORE OVERLOADING\n";
	s1.disp();
	cout<<"AFTER OVERLOADING \n";
	-s1;
	s1.disp();
return 0;
}

