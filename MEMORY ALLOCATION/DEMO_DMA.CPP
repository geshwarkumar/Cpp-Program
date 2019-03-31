/*CPP PROGRAM TO DEMONSTRATE DYNAMIC MEMORY ALLOCATION
-GESHWAR KUMAR
-27/07/2016*/

//#include<iostream>	//FOR NEW VERSION
#include<stdlib.h>
#include<iostream.h> 	//FOR OLD VERSION

//using namespace std ;

class DemoDMA
{
	private :
		int *ptr,size ;
	public :
		/*CONSTRUCTOR DECLARATION*/
		DemoDMA()	//DEFAULT CONSTRUCTOR
		{
			size = 0 ;
		}
		DemoDMA(int s)
		{
			size = s ;         //SIZE ACCEPT AT RUN TIME
			ptr = new int[size] ;   //MEMORY ALLOCATION
		}
		/*FUNCTION DECLARATION*/
		void Input();
		void Output();
		/*DESTRUCTOR DECLARATION*/
		~DemoDMA()
		{
			delete ptr ;	//MEMORY DEALLOCATION
		}
};
/*FUNCTION DEFINITION*/
void DemoDMA :: Input()
{
	for(int iter=1;iter<=size;iter++)
	{
		cout << "Enter " << iter << " element: ";
		cin >> ptr[iter];
	}
}
void DemoDMA :: Output()
{
	cout << "Output:" << endl;
	for(int iter=1;iter<=size;iter++)
	{
		cout << ptr[iter] << " ";
	}
}

/*MAIN FUNCTION*/
int main()
{
	DemoDMA dma(6); //SIZE = 6
	cout << "\n/*CPP PROGRAM TO DEMONSTRATE DYNAMIC MEMORY ALLOCATION\n-GESHWAR KUMAR\n-27/07/2016*/";
	/*FUNCTION CALLING*/
	dma.Input();
	dma.Output();
system("pause");
return 0;
}