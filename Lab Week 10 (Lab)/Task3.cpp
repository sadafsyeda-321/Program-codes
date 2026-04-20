#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Greater Number: " << max(num1,num2);   //this max shows the result value in front of it
    return 0;
}