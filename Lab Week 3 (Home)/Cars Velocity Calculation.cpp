#include <iostream>
using namespace std;
main(){
int Initial_Velocity ;
int Acceleration;
int Time;
int Final_Velocity;
cout<<"Enter Initial_Velocity:";
cin>> Initial_Velocity ;
cout<<"Enter Acceleration:";
cin>> Acceleration;
cout<<"Enter Time:";
cin>> Time;
Final_Velocity=( Acceleration*Time)+ Initial_Velocity;
cout<<"Enter Final_Velocity:"<<Final_Velocity;
}