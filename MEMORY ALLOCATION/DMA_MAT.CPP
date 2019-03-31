/*CPP PROGRAM TO DMA OF 2D ARRAY/MATRIX 3x3
-GESHWAR KUMAR
-27/07/2016*/

//#include<iostream>	//FOR NEW VERSION
//#include<stdlib.h>
#include<iostream.h> 	//FOR OLD VERSION
#include<conio.h>

//using namespace std ;

class DemoMat
{
	private :
		int **mat,row,col ;
	public :
		/*CONSTRUCTOR DECLARATION*/
		DemoMat()	//DEFAULT CONSTRUCTOR
		{
			row = col = 0;
		}
		DemoMat(int,int);

		/*FUNCTION DECLARATION*/
		void Input();
		void Output();
		/*DESTRUCTOR DECLARATION*/
		~DemoMat();

};
/*CONSTRUCTOR AND DESTRUCTOR DEFINITION*/
DemoMat :: DemoMat(int r,int c)
{
	row = r , col = c ;         //SIZE ACCEPT AT COMPILE TIME
	/*MEMORY ALLOCATE FOR ROW*/
	mat = new int*[row] ;
	/*MEMORY ALLOCATION FOR COLUMN */
	for(int iter=0;iter<row;iter++)
	{
		mat = new int[col];
	}
}
DemoMat :: ~DemoMat()
{
	for(int iter=0;iter<row;iter++)
	{
		delete mat[iter];               //DEALLOCATE COLUMN
	}
	delete mat ;	//MEMORY DEALLOCATION FOR ROW
}
/*FUNCTION DEFINITION*/
void DemoMat :: Input()
{
	cout << "Input values for 3x3 matrix:\n";
	for(int R=0;R<row;R++)
	{
		for(C=0;C<col;C++)
		{
			cin >> mat[R][C];
		}
	}
}
void DemoMat :: Output()
{
	cout << "Given 3x3 matrix are:\n";
	for(int R=0;R<row;R++)
	{
		for(C=0;C<col;C++)
		{
			cout << mat[R][C] << " ";
		}
		cout << endl;
	}
}

/*MAIN FUNCTION*/
int main()
{
	DemoMat *ptrdma,dma(3,3); //SIZE = 6
	clrscr();
	//system("cls");
	cout << "\n/*CPP PROGRAM TO IMPLEMENT 3X3 MATRIX USING DMA\n-GESHWAR KUMAR\n-27/07/2016*/\n";
	ptrdma = &dma ;	//CALL OBJECT THROUGH POINTER
	/*FUNCTION CALLING*/
	ptrdma->Input();
	ptrdma->Output();
getch();
//system("pause");
return 0;
}