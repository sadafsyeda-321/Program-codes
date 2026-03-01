#include <iostream>
using namespace std;
main(){
int age;
float moves;
float average_years;
cout<<"Enter Person's age:";
cin>> age;
cout<<"Enter the number of times they've moved:";
cin>> moves;
average_years=(age/(moves+1));
cout<<"Average number of years lived in the same house="<<average_years;
}