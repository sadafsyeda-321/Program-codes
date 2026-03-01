#include<iostream>
using namespace std;
main(){
int bag_weight;
int bag_price;
int bag_per_area;
int Fertilizer_price;
int Fertilizer_cost_per_area;
cout<<"Enter bag_weight:";
cin>> bag_weight;
cout<< "Enter bag_price:";
cin>> bag_price;
cout<<"Enter bag_per_area:";
cin>>bag_per_area;
Fertilizer_price=bag_price/bag_weight;
cout<<"Fertilizer price will be:" <<Fertilizer_price<<endl;
Fertilizer_cost_per_area= bag_price * bag_per_area;
cout<<"Fertilizer cost per area:"<<Fertilizer_cost_per_area;
}
