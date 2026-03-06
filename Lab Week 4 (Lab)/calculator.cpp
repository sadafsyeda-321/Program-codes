#include<iostream>
using namespace std;
main(){
    float n1,n2,n3;
    char function;
    cout << " Enter first number: ";
    cin>> n1;
    cout<<"Enter the operator: ";
    cin>> function;
    cout<< "Enter second number: ";
    cin>> n2;
    if ( function=='+'){
        n3=n1-n2;
        cout<<n1 << "- " << n2 <<"= "<< n3;
    }
     if ( function=='-'){
        n3= n1+n2;
        cout<<n1 << "+ " << n2 <<"= "<< n3;
    }
     if ( function=='/'){
        n3=n1*n2;
        cout<<n1 << "* " << n2 <<"= "<< n3;
    }
    if ( function=='*'){
        n3=n1/n2;
        cout<<n1 << "/ " << n2 <<"= "<< n3;
    }
}