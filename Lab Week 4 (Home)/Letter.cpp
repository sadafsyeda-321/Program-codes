#include<iostream>
using namespace std;
main(){
    int n;
    string letters;
    int ones;
    int tens;
    cout<< "Enter a number: ";
    cin>> n;
    ones =n%10;
    tens =n/10;
     if (tens==1){
        cout<<"Ten";
    }
    if (tens ==2){
    cout<<"Twenty";
    }
    if (tens ==3){
        cout<<"Thirty";
    }
     if (tens ==4){
        cout<<"Forty";
    }
     if (tens ==5){
        cout<<"Fifty";
    }
     if (tens ==6){
        cout<<"Sixty";
    }
    if (tens==7){
        cout<<"Seventy";
    }
    if (tens==8){
        cout<<"Eighty";
    }
    if (tens==9){
        cout<<"Ninety";
    }
    if (ones==1){
        cout<<"One";
    }
    if (ones==2){
    cout<<"Two";
    }
    if (ones ==3){
        cout<<"Three";
    }
     if (ones==4){
        cout<<"Four";
    }
     if (ones==5){
        cout<<"Five";
    }
     if (ones==6){
        cout<<"Six";
    }
    if (ones==7){
        cout<<"Seven";
    }
    if (ones==8){
        cout<<"Eight";
    }
    if (ones==9){
        cout<<"Nine";
    }
}