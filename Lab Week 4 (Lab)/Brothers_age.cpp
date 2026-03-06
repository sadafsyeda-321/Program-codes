#include<iostream>
using namespace std;
main(){
    int age1,age2,age3;
    string name1,name2,name3;
    cout<<"Enter name of first brother: ";
    cin>> name1;
    cout<<"Enter age of first brother: ";
    cin>> age1;
    cout<<"Enter name of second brother: ";
    cin>> name2;
    cout<<"Enter age of second brother: ";
    cin>> age2;
    cout<<"Enter name of third brother: ";
    cin>> name3;
    cout<<"Enter age of third brother: ";
    cin>> age3;
    if (age1 < age2){
    if (age1 < age3){
        cout<< name1 << " is the youngest.";
    }
    }
    if (age2 < age1){
    if (age2 < age3){
        cout<< name2 << " is the youngest.";
    }
    }
    if (age3 < age1){
    if (age3 < age2){
        cout<< name3 << " is the youngest.";
    }
}
}