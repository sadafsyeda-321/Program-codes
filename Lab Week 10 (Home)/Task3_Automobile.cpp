#include<iostream>
using namespace std;

float Tax_Calculator(char Type, float Price);
string Vehicle (char type);

float Tax_on_M = 0.06;
float Tax_on_E = 0.08;
float Tax_on_S = 0.1;
float Tax_on_V = 0.12;
float Tax_on_T = 0.15;

main (){
    float price;
    char type;
    cout << "Enter Vehicle Type: ";
    cin >> type;
    cout << "Enter Vehicle Price: ";
    cin >> price;
    
}