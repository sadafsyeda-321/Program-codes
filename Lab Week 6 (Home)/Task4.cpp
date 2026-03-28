#include<iostream>
using namespace std;
main(){
    string name[5];
    cout<<"Enter the names of 5 students: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>name[i];
    }
    cout<<"Student names are: \n";
    for(int i=0; i<5; i++){
        cout<<name[i] <<endl;
    }
    }