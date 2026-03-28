#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"How many numbers do you want to print? ";
    cin>>n;
    int numbers[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>numbers[i];
    }
    cout<<"The numbers you have entered are: ";
    for (int i = 0; i < n; i++)
    {
        cout<<numbers[i] <<" ";
    }
}