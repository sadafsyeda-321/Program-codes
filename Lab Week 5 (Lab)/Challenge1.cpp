#include<iostream>
using namespace std;
main(){
    int n1,n2,num1,num2;
    int LCM;
    int GCD;
    cout<< "Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    num1=n1;
    num2=n2;
    while(n1 !=n2)
    if (n1>n2){
    n1=n1-n2;
    }
    else{
       n2=n2-n1;
    }
GCD=n1;
LCM=(num1*num2)/GCD;
cout<<"GCD of " << num1 << " and " << num2 <<" : "<<GCD <<endl;
cout<<"LCM of " << num1 << " and " << num2 <<" : "<< LCM <<endl;
}
