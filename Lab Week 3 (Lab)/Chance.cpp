#include <iostream>
using namespace std;
main(){
float imposter;
int players;
float Chance_in_percentage;
cout<<"Enter imposter:";
cin>> imposter;
cout<<"Enter players:";
cin>> players;
Chance_in_percentage=100*(imposter/players);
cout<<"Chance="<<Chance_in_percentage<<"%";
}