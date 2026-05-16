#include <iostream>
using namespace std;


// void value(int a, int b)
// {
//     int temp =a ;
//     a=b;
//     b= temp;
//     cout << temp << temp b;

// }
// void swap(int &a, int &b)
// {
//     int temp =a ;
//     a=b;
//     b= temp;

// }
main ()
{
int x = 10;
int *ptr = &x;
cout << "value of x = " << x <<endl ;
cout << "value of ptr = " << ptr << endl ;
cout << "value of *ptr = " << *ptr << endl ;
}