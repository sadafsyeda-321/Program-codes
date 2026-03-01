#include <iostream>
using namespace std;
main(){
int Wins ;
int Draws;
int Losses;
int Points;
int Total_Points;
cout<<"Enter No. of Wins:";
cin>> Wins ;
cout<<"Enter No. of losses:";
cin>> Losses;
cout<<"Enter No. of Draws:";
cin>> Draws;
Total_Points= (3*Wins)+(1* Losses)+(1*Draws);
cout<<"Pakistan has obtained total points= "<<Total_Points;
}