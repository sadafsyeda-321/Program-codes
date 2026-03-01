#include <iostream>
using namespace std;
main(){
int age;
float moves;
float average_years;
cout<<"Enter age:";
cin>> age;
cout<<"Enter moves:";
cin>> moves;
average_years=(age/(moves+1));
cout<<"average_years="<<average_years;
}