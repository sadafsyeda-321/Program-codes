#include <iostream>
using namespace std;
main(){
string name;
int matric ;
int inter ;
int Ecat;
float matric_,inter_,ecat_;
matric_ = 1100;
inter_ =550;
ecat_ =400;
float Aggregate;
cout<<"Enter name:";
cin>> name;
cout<<" Enter matric (out_of_1100):";
cin>> matric;
cout<<" Enter inter (out_of_550):";
cin>> inter;
cout<<" Enter Ecat(out_of_400): ";
cin>> Ecat;
Aggregate = (((Ecat/ecat_)*0.50) + ((inter/inter_)*0.40) + ((matric/matric_)*0.10))*100;
cout<<"Aggregate is: "<< Aggregate;
}