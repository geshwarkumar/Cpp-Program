/*C++ for friend function to calculate the total income of a home (Father’s income & mother’s income)
-Geshwar Kumar*/

#include<iostream>

using namespace std ;

class TotalSal{
	int sal_w,sal_h ;
	public :
		TotalSal(){
			sal_w = 5000 ;
		}
		TotalSal(int h){
			sal_h = h ;
		}
		friend int CalSal(TotalSal s1,TotalSal s2){
			return (s1.sal_w + s2.sal_h);
		}
};

int main(){
	TotalSal s1,s2(20000);
	int total ;
	total = CalSal(s1,s2);
	cout << "Total Income: " << total << endl ;
return 0 ;
}
