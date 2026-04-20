#include<iostream>
using namespace std;

void Time_Travel(int hours, int minutes);
main(){
    int hours, minutes;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    Time_Travel (hours, minutes);
}
void Time_Travel(int hours, int minutes)
{
    int hours_mins = hours * 60;
    int Total_Min = hours_mins + minutes;
    int add_Minutes = Total_Min + 15; 
    int New_Hours = add_Minutes /60;
    int New_Min = add_Minutes % 60;
    cout << New_Hours << " : " << New_Min;
    
}