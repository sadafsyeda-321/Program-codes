#include <iostream>
using namespace std;
main(){
float Imposter_Count;
int Players_Count;
float Chance_of_percentage;
cout<<"Enter Imposter_Count:";
cin>> Imposter_Count;
cout<<"Enter Players_Count:";
cin>> Players_Count;
Chance_of_percentage=100*(Imposter_Count/Players_Count);
cout<<"Chance_of_being_imposter="<<Chance_of_percentage<<"%";
}