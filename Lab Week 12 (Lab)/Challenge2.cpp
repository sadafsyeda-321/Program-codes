#include<iostream>
using namespace std;

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}

int main(){
    int a = 20, b = 36;
    cout << "Values of a: " << a <<endl;
    cout <<"Values of b: " << b <<endl;
    swapByReference(a, b);
    cout << "Swapped Reference of a: " <<a <<endl;   // show values swapped by ref
    cout << "Swapped Reference of a: " <<b <<endl;
}
// &a    show addresses swapped by ref
// &b