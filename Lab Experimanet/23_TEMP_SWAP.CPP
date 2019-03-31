/*Function template to swapping of two numbers
-GESHWAR KUMAR*/

#include<iostream>

using namespace std;

template <class T1,class T2>
void swap(T1 &a,T2 &b)      //Function Template
{
    T1 temp = a;
    	a = b;
    	b = temp;
}

int main()
{
    int x1 = 4,y1 = 7;
    float x2 = 4.5,y2 = 7.5;

    cout << "Before Swap:\n" ;
    cout << "x1= " << x1 << "\ty1= " << y1 << endl ;
    cout << "x2= " << x2 << "\ty2= " << y2 ;

    swap(x1,y1);
    swap(x2,y2);

    cout << endl << "\n\nAfter Swap:\n" ;
    cout << "x1= " << x1 << "\ty1= " << y1 << endl ;
    cout << "x2= " << x2 << "\ty2= " << y2 << endl ;

    return 0;
}


