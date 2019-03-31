/*CPP PROGRAM TO ADDITION OF TWO MEASUREMENT VALUES IN FEET, INCH ALSO DO THE SAME THING USING OPERATOR OVERLOAD*/

#include <iostream>

using namespace std;

class Distance
{
     	int feet;
        float inch;
        public:
        	Distance();
        	Distance(int a,float b);
        	void setDistance();
        	int getFeet();
        	float getInch();
        	void distanceSum(Distance d);
		void operator +(Distance d);
};
int main()
{
        Distance D1,D2;
	cout << "Enter first values:" << endl;
        D1.setDistance();
	cout << "Enter second values:" << endl;
        D2.setDistance();
	cout << "Result Without overload:" << endl ;
        D1.distanceSum(D2);
	cout << "Result With overload:" << endl ;
	D1+D2;
        return 0;
}
/*Function Definitions*/
Distance::Distance()
{
        inch=feet=0;
}
Distance::Distance(int a,float b)
{
        feet=a;
        inch=b; 
}
void Distance::setDistance()
{
        cout<<"Enter distance in feet: ";
        cin>>feet;
        cout<<"Enter distance in inches: ";
        cin>>inch;
}
int Distance::getFeet()
{
        return feet;
}
float Distance::getInch()
{
        return inch;
}
void Distance::distanceSum(Distance d)
{
        cout<<"feet="<<d.feet+feet<<endl;
        cout<<"inches="<<d.inch+inch<<endl;
}
void Distance::operator +(Distance d)
{
        cout<<"feet="<<feet+d.feet<<endl;
        cout<<"inches="<<inch+d.inch<<endl;
}

