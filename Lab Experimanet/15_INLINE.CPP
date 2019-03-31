/*C++ program to demo inline function
-GESHWAR KUMAR*/
#include<iostream>

using namespace std ;
 
class line
{
   public:
              inline float mul(float x,float y)
              {
                            return(x*y);
              }
              inline float cube(float x)
              {
                            return(x*x*x);
              }
};

int main()
{
              line obj;
              float val1,val2;
              
              cout<<"Enter two values:";
              cin>>val1>>val2;
              cout<<"\nMultiplication value is:"<<obj.mul(val1,val2);
              cout<<"\n\nCube value is\t:"<<obj.cube(val1)<<"\t"<<obj.cube(val2)<<endl;
return 0 ;
}
