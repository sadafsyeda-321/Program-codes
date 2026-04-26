#include<iostream>
using namespace std;
main(){
    int n;
    cout <<"Enter number: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2 ; i <= n-1; i++)
    {
        if (n % i ==0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime Number ";
    }
    else {
        cout << "Non Prime Number ";
    }
    
}