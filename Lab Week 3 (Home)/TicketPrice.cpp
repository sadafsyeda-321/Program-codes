#include<iostream>
using namespace std;
main(){
string Name;
int Adult_Ticket_Price;
float Child_Ticket_Price;
int Adult_Ticket_sold;
float Child_Ticket_sold;
float percentage_charity;
float Total_money_earned;
float Remaining_money;
float percentage_given_to_charity;
cout<<"Enter movie name: ";
cin>>Name;
cout<<"Enter Adult Ticket Price: ";
cin>>Adult_Ticket_Price;
cout<<"Enter Child Ticket Price: ";
cin>>Child_Ticket_Price;
cout<<"Enter Adult Ticket Sold: ";
cin>>Adult_Ticket_sold;
cout<<"Enter Child Ticket Sold: ";
cin>>Child_Ticket_sold;
Total_money_earned=(Adult_Ticket_Price*Adult_Ticket_sold)+(Child_Ticket_Price*Child_Ticket_sold);
cout<<"Total money earned will be: " << Total_money_earned <<endl;
cout<<"Percentage of money given to charity will be: ";
cin>> percentage_charity;
percentage_given_to_charity=Total_money_earned * (percentage_charity/100);
cout<<"percentage_given_to_charity: "<<percentage_given_to_charity<<endl;
Remaining_money=(Total_money_earned)-(percentage_given_to_charity);
cout<<"Remaining money will be: "<<Remaining_money;
}
