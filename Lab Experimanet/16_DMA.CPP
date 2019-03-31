/*C++ to demo Dynamic memory allocation i.e. (new and delete)
-GESHWAR KUMAR*/
#include <iostream>

using namespace std ;
 
int main()
{
    int *ptr = new int; // dynamically allocate an integer
    *ptr = 7; // put a value in that memory location
 
    //delete ptr; // return the memory to the operating system.  ptr is now a dangling pointer.
 
    cout << *ptr << endl; // Dereferencing a dangling pointer will cause undefined behavior
    delete ptr; // trying to deallocate the memory again will also lead to undefined behavior.
 
return 0;
}


