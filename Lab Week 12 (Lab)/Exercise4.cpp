#include <iostream>
using namespace std;

void modifyWithPointer(int *p)
{
    *p = 50;
}
void modifyWithReference(int &r)
{
    r =100;
}

main ()
{
int a = 10 , b = 20;
modifyWithPointer(&a);
modifyWithReference(b);

cout << "value of a after pointer modification= " << a <<endl ;
cout << "value of b after reference modification = " << b << endl ;

}