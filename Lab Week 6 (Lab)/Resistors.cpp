#include<iostream>
using namespace std;
main(){
    int resistors;
    float Resistance[100];
    float Total_R=0;
    cout<<"Enter the number of resistors in series circuit: ";
    cin>>resistors;
    cout<<"Enter the resistance values (in ohms) of the "<< resistors <<" resistors, one per line: \n";
    for(int i=0;i<resistors;i++)
    {
        cin>>Resistance[i];
        Total_R=Total_R+Resistance[i];
    }
    cout<<"Total resistance of series circuit: " << Total_R <<" ohms. \n";
}