#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of flights: ";
    cin>>n;
    int Flight_Num[100];
    string destination[100];
    int SeatsAvailable[100];
    bool Found=false;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter flight number for flight "<<i+1<<": ";
        cin>>Flight_Num[i];
        cout<<"Enter destination: ";
        cin>>destination[i];
        cout<<"Enter seats available: ";
        cin>>SeatsAvailable[i];
    }

    cout<<"FLIGHT INFORMATION DESK \n";
    cout<<"------------------------\n";
    
    for (int i=0;i<n;i++)
    {
        cout<<"Flight "<<Flight_Num[i]<<" to "<<destination[i]<<" has "<<SeatsAvailable[i]<<" seats available."<<endl;
    }
    cout<<endl;
    cout<<"Flights with less than 5 seats\n";
    cout<<"-------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        if(SeatsAvailable[i]<5)
        {
            cout<<"Flight "<<Flight_Num[i]<<" to "<<destination[i]<<" has "<<SeatsAvailable[i]<<" seats left!"<<endl;
            Found = true;
        }
    }
    if(!Found)
    {
         cout<<"No flight with less than 5 seats available.";
    }
}