/*CPP PROGRAM TO SORT THE NUMBER USING FUNCTION OVERLOADING
-GESHWAR KUMAR
-02/08/2016*/

#include<iostream.h>
#include<conio.h>
void sort_fun(int [],int);
void sort_fun(char [],int);
//void Output(int);
int iter1,iter2,temp;
int main()
{
	int arr1[]={55,11,44,22,33};
	char str1[]={'e','a','c','b','d'};

	clrscr();

	sort_fun(arr1,5);
	sort_fun(str1,5);
	//Output(5);
getch();
return 0;
}
void sort_fun(int arr[],int s)
{
	for(iter1=0;iter1<s;iter1++)
	{
		for(iter2=iter1+1;iter2<s;iter2++)
		{
			if(arr[iter1] > arr[iter2])
			{
				temp = arr[iter1] ;
				arr[iter1] = arr[iter2] ;
				arr[iter2] = temp ;
			}
		}

	}
	cout << endl << "Sorted integer elements in ascending order:" << endl;
	  for(iter1=0;iter1<s;iter1++)
	  {
		cout << arr[iter1] << " ";
	  }
}
void sort_fun(char str[],int s)
{
	for(iter1=0;iter1<s;iter1++)
	{
		for(iter2=iter1;iter2<=s;iter2++)
		{
			if(str[iter1]<str[iter2+1])
			{
				temp = str[iter1] ;
				str[iter1] = str[iter2+1] ;
				str[iter2+1] = temp ;
			}
		}
	}
	cout << endl << "Sorted character elements are in descending order:" << endl;
	  for(iter2=0;iter2<s;iter2++)
	  {
		cout << str[iter2] << " ";
	  }
}
/*void Output(int s)
{
	  cout << endl << "Sorted integer elements:" << endl;
	  for(iter1=0;iter1<s;iter1++)
	  {
		cout << arr[iter1] << " ";
	  }
	  cout << endl << "Sorted character elements are:" << endl;
	  for(iter2=0;iter2<s;iter2++)
	  {
		cout << str[iter1] << " ";
	  }
} */