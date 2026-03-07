#include<iostream>
using namespace std;
main(){
    int Speed;
    float speed_info;
    cout <<"Speed: ";
    cin>> Speed;
    if (Speed <= 10){
        cout<<"Slow ";
    }
    if (Speed > 10){
        if (Speed <= 50){
        cout<< "Average ";
    }
    }
    if (Speed > 50){
        if (Speed <= 150){
            cout<<"Fast";
        }
    } 
    if (Speed > 150){
        if (Speed <= 1000){
            cout<<"Ultra fast";
        }
    }   
    if (Speed > 1000){
        cout<<"Extremely fast";
    }
}