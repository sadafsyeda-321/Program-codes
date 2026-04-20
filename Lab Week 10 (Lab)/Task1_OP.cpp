#include <iostream>
#include<cmath>    //already in built library & helps in finding the m,innimum or maximum values
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Minimum Number of " <<num1 <<" and " <<num2 <<" is : " << min(num1,num2);   
    return 0;
}