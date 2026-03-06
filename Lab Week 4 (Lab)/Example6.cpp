#include<iostream>
using namespace std;
main(){
    int number, even;
    cout<< "Enter integer:";
    cin>> number;
    even=number%2;
    if (even == 0){
        cout<<"Number is even";
    }
    else{
        cout<<"Number is odd";
    }
    }