#include<iostream>
using namespace std;
main(){
    float Temp1,Temp2;
    float Difference_in_Temp;
    cout <<"Temperature City 1: ";
    cin>> Temp1;
    cout <<"Temperature City 2: ";
    cin>> Temp2;
    Difference_in_Temp= Temp2 - Temp1;
    if (Difference_in_Temp > 10.00){
    cout<< "Difference is too big."<<endl;
    cout<< "Program ends.";
    }
    else {
        cout <<"Program ends. ";
    }
}