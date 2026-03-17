#include<iostream>
using namespace std;
main(){
int age, washing_machine_Price,toyPrice,n_toy=0,tP_toy;
int money=0,total_money,remaining_money,even_year_increase=10;
cout<<"Enter age: ";
cin>>age;
cout<<"Enter washing machine Price: ";
cin>>washing_machine_Price;
cout<<"Enter toy Price: ";
cin>>toyPrice;
for(int i=1;i<=age;i++){
if(i%2==0){
money=(money+even_year_increase)-1;
even_year_increase=even_year_increase+10;
}
else{
    n_toy++;
}
}
tP_toy=n_toy*toyPrice;
total_money=tP_toy+money;
remaining_money=total_money-washing_machine_Price;
if(total_money>=washing_machine_Price){
    cout<<"Yes!" <<endl <<remaining_money;
}
else{
cout<<"No!"<<endl<<-(remaining_money);
}
}