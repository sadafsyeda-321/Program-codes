#include <iostream>
using namespace std;

main ()
{
int x = 10;
int *ptr = &x;
cout << "Value of x = " << x <<endl ;
cout << "Address of x = " << &x << endl ;
cout << "Value of *ptr = " << *ptr << endl ;
}
