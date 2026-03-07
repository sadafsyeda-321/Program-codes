#include<iostream>
using namespace std;
main(){
    int Working_days,Holidays,Time,Difference;
    int hours,minutes;
    int Holiday_Time=127;
    int Working_days_time=63;
    cout<<"Holidays: ";
    cin>> Holidays;
    Working_days = (365 - Holidays);
    Time=(Working_days*Working_days_time)+(Holiday_Time*Holidays);
    Difference = (Time) - (hours * 60) ;
    hours=(Time / 60);
    minutes= Time % 60;
    if (Time <= 30000){
        cout<<"Tom sleeps well. " << endl; 
        cout<<hours << " hours and " <<minutes <<" minutes less for play ";
    }
    else{
        Time > 30000;
        cout<<"Tom will run away" << endl;
        cout<<hours <<" hours and " <<minutes <<" minutes for play ";
    }
}