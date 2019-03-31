/*CPP OVERLOAD += OPERATOR*/

#include<iostream.h>

class Demo
{
	private :
		int t ;         //float f;
	public :
		Demo()
		{
			t = 0 ;
		}
		Demo(int a)   //(int a,float b){t=a,f=b;}
		{
			t = a ;
		}
		Demo operator +=(Demo d)
		{
			Demo temp ;                //t+=d.t;f+=d.f;temp.t=t;temp.f=f;
			t += d.t ;
			temp.t = t ;
		return temp ;
		}
		void Output()
		{
			cout << "t = " << t ;//<<f;
		}
};
int main()
{
	Demo d1(2);//d1(1,2),d2(2,3);
	d1+=d1;
	d1.Output();
return 0;
}
