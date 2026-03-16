#include<iostream>
using namespace std;
main(){
    int value;
    cout<<"Please enter a positive number: ";
    cin>>value;
    while (value<=0)
    {
        cout<<"Error. "<< value <<" is not a Positive number."<<endl;
        cout<<"Please enter a Positive number. ";
        cin>>value;
    }
    cout<<"Program ends."<<endl;
}
