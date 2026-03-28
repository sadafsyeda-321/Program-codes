#include<iostream>
using namespace std;
main(){
    float Total,due_amount,Remaining_Amount;
    float array[4];
    bool Payable=false;
    cout<<"Enter quarters: ";
    cin>>array[0];
    cout<<"Enter dimes: ";
    cin>>array[1];
    cout<<"Enter nickels: ";
    cin>>array[2];
    cout<<"Enter pennies: ";
    cin>>array[3];
    cout<<"Enter the due amount: ";
    cin>>due_amount;
    array[0]=array[0] * 0.25;
    array[1]=array[1] * 0.10;
    array[2]=array[2] * 0.05;
    array[3]=array[3] * 0.01;
    Total=array[0] + array[1] + array[2] + array[3];
    Remaining_Amount=Total-due_amount;
    if (Remaining_Amount>=0){
        Payable=true;
    }
    if (Payable==true){
        cout<<"Can you pay the amount? Yes " ;
    }
    else{
        cout<<"Can you pay the amount? No ";
    }
}