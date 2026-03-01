#include <iostream>
using namespace std;
main(){
float Vegetables_price;
float Fruits_price;
int Total_kgs_of_Vegetables;
int Total_kgs_of_Fruits;
float Total_earnings;
float Total_earnings_in_Rupees;
cout<<"Enter vegetables price: ";
cin>>Vegetables_price;
cout<<"Enter fruits price: ";
cin>>Fruits_price;
cout<<"Enter Total_kgs_of_Vegetables: ";
cin>>Total_kgs_of_Vegetables;
cout<<"Total_kgs_of_Fruits: ";
cin>>Total_kgs_of_Fruits;
Total_earnings=(Total_kgs_of_Vegetables*Vegetables_price) + (Total_kgs_of_Fruits*Fruits_price);
cout<<"Total_earnings: "<<Total_earnings<<endl;
Total_earnings_in_Rupees= (Total_earnings)/1.94;
cout<<"Total_earnings_in_Rupees= "<<Total_earnings_in_Rupees;
}