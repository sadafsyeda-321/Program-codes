#include<iostream>
using namespace std;
main(){
string Name;
int Target_weight_loss;
int days_required;
int days;
cout<<"Enter Name:";
cin>> Name;
cout<< "Enter Target_weight_loss:";
cin>> Target_weight_loss;
days_required= (Target_weight_loss)*(15);
cout<< Name << " will need " <<days << " days to lose "<< Target_weight_loss <<" kgs of weight by following the doctor's suggestion";
}
