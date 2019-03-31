/*CPP PROGRAM TO DEMONSTRATE DYNAMIC MEMORY ALLOCATION
-GESHWAR KUMAR
-27/07/2016*/

#include<iostream>	//FOR NEW VERSION
#include<string.h>

using namespace std ;

class DemoDMA
{
	private :
		int *ptri,size ;
		char *ptrs ;
	public :
		/*CONSTRUCTOR DECLARATION*/
		DemoDMA()	//DEFAULT CONSTRUCTOR
		{
			size = 0 ;
		}
		DemoDMA(int s)
		{
			size = s ;         //SIZE ACCEPT AT RUN TIME
			ptri = new int[size] ;   //MEMORY ALLOCATION
			ptrs = new char[size] ;
		}
		/*FUNCTION DECLARATION*/
		void Input();
		void Output();
		/*DESTRUCTOR DECLARATION*/
		~DemoDMA()
		{
			delete ptri ;	//MEMORY DEALLOCATION
			delete ptrs ;
		}
};
/*FUNCTION DEFINITION*/
void DemoDMA :: Input()
{
	cout  << "Input Integer Element:" << endl ;	
	for(int iter=1;iter<=size;iter++)
	{
		cout << "Enter " << iter << " element: ";
		cin >> ptri[iter];
	}
	cout  << "\nInput String Element:" << endl ;cin >> ptrs ;	
}
void DemoDMA :: Output()
{
	cout << "Output:Integer Elements:" << endl;
	for(int iter=1;iter<=size;iter++)
	{
		cout << ptri[iter] << " ";
	}
	cout << "\nString Elements:" << endl;
	for(int iter=1;iter<=size;iter++)
	{
		cout << ptrs[iter] << " ";
	}
	cout << endl ;
}

/*MAIN FUNCTION*/
int main()
{
	DemoDMA dma(5); //SIZE = 5
	cout << "\n/*CPP PROGRAM TO DEMONSTRATE DYNAMIC MEMORY ALLOCATION\n-GESHWAR KUMAR\n-27/07/2016*/\n";
	/*FUNCTION CALLING*/
	dma.Input();
	dma.Output();
//system("pause");
return 0;
}
