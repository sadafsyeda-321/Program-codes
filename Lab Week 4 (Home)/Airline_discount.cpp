#include<iostream>
using namespace std;
main(){
    string Country;
    int Price;
    float Discount;
    float Discounted_Price;
    cout<<"Country: ";
    cin>> Country;
    cout<<"Ticket Price: ";
    cin>> Price;
    if (Country== "Ireland"){
    Discount=(0.10)* Price;
    Discounted_Price=Price-Discount;
    cout<<"Discounted Price: " << Discounted_Price;
    }
    else{
        Discount=(0.05)*Price;
        Discounted_Price=Price-Discount;
        cout<<"Discounted Price: " << Discounted_Price;
    }
}