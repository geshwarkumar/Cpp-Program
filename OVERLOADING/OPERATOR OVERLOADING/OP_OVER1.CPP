/*CPP OVERLOAD += OPERATOR*/

#include<iostream.h>

class Demo
{
	private :
		int t ;float f;
	public :
		Demo()
		{
			t = f = 0 ;
		}
		Demo(int a,float b){t=a,f=b;}
		Demo operator ==(Demo d);
		void Output()
		{
			cout << "t = " << t << "f = " << f ;
		}
};
Demo Demo :: operator ==(Demo d)
{
	Demo temp ;                //t+=d.t;f+=d.f;temp.t=t;temp.f=f;
	if(f == d.t)
	{

	//f == d.f ;
	temp.f = f ;
return temp ;
}
int main()
{
	Demo d1(2,0);//d1(1,2),d2(2,3);
	d1+=d1;
	d1.Output();
return 0;
}
