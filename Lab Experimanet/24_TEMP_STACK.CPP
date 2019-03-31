/*Class template for stack implementation
-GESHWAR KUMAR*/
#include<iostream>
#include<cstdlib>
#define default_value 10
using namespace std;
 
template< class T > class Stack
{
    public:
    Stack(int = default_value);//default constructor
    ~Stack()//destructor
    {delete [] values;}
    bool push( T );
    T pop();
    bool isEmpty();
    bool isFull();
    private:
    int size;
    T *values;
    int index;
 
};
 
template< class T > Stack<T>::Stack(int x):
    size(x),//ctor
    values(new T[size]),
    index(-1)
{ /*empty*/  }
 
template< class T > bool Stack<T>::isFull()
{
    if((index + 1) == size )
    return 1;
    else
    return 0;
}
 
template< class T > bool Stack<T>::push(T x)
{
    bool b = 0;
    if(!Stack<T>::isFull())
    {
    index += 1;
    values[index] = x;
    b = 1;
    }
    return b;
}
 
template< class T > bool Stack<T>::isEmpty()
{
    if( index  == -1 )//is empty
    return 1;
    else
    return 0; //is not empty
}
 
template< class T > T Stack<T>::pop()
{
    T val = -1;
    if(!Stack<T>::isEmpty())
    {
    val = values[index];
    index -=  1;
    }
    else
    {
    cerr << "Stack is Empty : ";
    }
    return val;
 
}
 
int main()
{
    Stack <double> stack1;
    Stack <int> stack2(5);
    int y = 1;
    double x = 1.1;
    int i, j; 
    cout << "\n pushed values into stack1: ";
 
    for( i = 1  ; i <= 11 ; i++) //start enter 11 elements into stack
    {
    if(stack1.push(i*x))
        cout << endl << i*x;
    else
        cout << "\n Stack1 is full: ";
    }
 
    cout << "\n\n popd values from stack1 : \n";
    for( j = 1 ; j <= 11 ; j++)
    cout << stack1.pop() << endl;
 
 
 
    cout << "\n pushd values into stack2: ";
 
    for( i = 1  ; i <= 6 ; i++) //start enter 6 elements into stack
    {
    if(stack2.push(i*y))
        cout << endl << i*y;
    else
        cout << "\n Stack2 is full: ";
    }
 
    cout << "\n\n popd values from stack2: \n";
    for( j = 1 ; j <= 6 ; j++)
    cout << stack2.pop() << endl;
    cout << endl << endl;
    return 0;
}
