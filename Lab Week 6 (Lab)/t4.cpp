#include<iostream>
using namespace std;
main(){
    int n[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter number: ";
        cin>>n[i];
    }
    cout<<"The 1st element in array is: "<<n[0]<<endl;
    cout<<"The last element in array is: "<<n[4]<<endl;
}