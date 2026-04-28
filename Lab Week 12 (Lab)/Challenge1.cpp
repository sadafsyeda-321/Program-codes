#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x= 15, y = 25;
    cout << "Value of x= " << x <<endl;
    cout << "Value of y= " << y <<endl;
    swap( x, y);
    cout << "Swapped valiue of x: " << x <<endl;
    cout << "Swapped valiue of y: " << y <<endl;
}
