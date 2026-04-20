#include<iostream>
#include<cmath>
using namespace std;

float TrainingDays = 0.1;
int Total_Hours = 10;

void Project_time_Calculation(float hr, int day, int worker);

main(){
    float hours;
    cout << "Enter needed hours: ";
    cin >> hours;
    int days;
    cout << "Enter number of days: ";
    cin >> days;
    int workers;
    cout << "Enter number of workers: ";
    cin >> workers;
    Project_time_Calculation(hours,days, workers);

}
void Project_time_Calculation(float hours, int days, int workers)
{
    float Total_days = days * TrainingDays;
    float calculated_Days = days - Total_days;
    float Total_Hours = calculated_Days *10 * workers;
    float Calculated_Hours = floor (Total_Hours - hours);
    if (Calculated_Hours >= 0){
        cout << "Yes! " << Calculated_Hours << " hours left ";
    }
    else{
        cout << "Not Enough Time! " << -1 * Calculated_Hours << " hours needed ";
    }
}