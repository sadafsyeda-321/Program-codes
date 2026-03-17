#include <iostream>
using namespace std;
main(){
int age=18, money,year_to_be_lasted;
cout<<"Enter the inheritance money (1-1000000): ";
cin>>money;
cout<<"Enter the number of years needed to survive i-e from (1881-1988): ";
cin>>year_to_be_lasted;
for(int y=1800;y<=year_to_be_lasted;y++){
if(y%2==0){
money=money-12000;
}
else{
money=money-(12000+50*age);
}
age++;
}
if(money>=0){
cout<<"Yes! He will live a carefree life easily and will have "<<money<<" dollars left";
}
else{
cout<<"He will need "<< -money<<" dollars to survive." ;
}
}