#include<iostream>
using namespace std;
main(){
    int n,digits,d;
    int freq=0;
    cout<<" Enter the number: ";
    cin>>n;
    cout<<"Enter the digit:";
    cin>>d;
    for (n;n>0;n=n/10)
    {
        digits = n%10;
        if (digits==d){
        freq= freq+1 ;
    }
}
    cout<< " Frequency of " << d << " is: "<<freq;
}