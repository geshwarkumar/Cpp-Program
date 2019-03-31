/*CPP PROGRAM TO DEMONSTRATE DMA AND ACCESS THROUGH POINTER OBJECT
-GESHWAR KUMAR
-27/07/2016*/

//#include<iostream>	//FOR NEW VERSION
//#include<stdlib.h>
#include<iostream.h> 	//FOR OLD VERSION
#include<conio.h>

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
	cout << "Input Values:\n";
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
	DemoDMA *ptrdma,dma(6); //SIZE = 6
	clrscr();
	//system("cls");
	cout << "\n/*CPP PROGRAM TO DEMONSTRATE DYNAMIC MEMORY ALLOCATION AND ACCESS THROUGH POINTER OBJECT\n-GESHWAR KUMAR\n-27/07/2016*/\n";
	ptrdma = &dma ;	//CALL OBJECT THROUGH POINTER
	/*FUNCTION CALLING*/
	ptrdma->Input();
	ptrdma->Output();
getch();
//system("pause");
return 0;
}