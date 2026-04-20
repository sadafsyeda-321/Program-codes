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
    float result = Tax_Calculator(type , price);
    string Vehicle_Type = Vehicle(type);
    cout << "Final price of vehicle of type " << Vehicle_Type << " after adding the tax is $" << result;
    
}

float Tax_Calculator(char type, float price){
    float tax_Amount =0;
    float Final_Price ;
    if (type == 'M')
    {
        tax_Amount = price * Tax_on_M;
        Final_Price = price * tax_Amount;
    }
    else if (type == 'E')
    {
        tax_Amount = price * Tax_on_E;
        Final_Price = price * tax_Amount;
    }
    else if (type == 'S')
    {
        tax_Amount = price * Tax_on_S;
        Final_Price = price * tax_Amount;
    }
    else if (type == 'V')
    {
        tax_Amount = price * Tax_on_V;
        Final_Price = price * tax_Amount;
    }
    else if (type == 'T')
    {
        tax_Amount = price * Tax_on_T;
        Final_Price = price * tax_Amount;
    }
    return Final_Price;
}
    
    string Vehicle(char type)
    {
        string Vehicle;
        if (type == 'M')
        {
            Vehicle = "Motorcycle";
        }
        else if (type == 'E')
        {
            Vehicle = "Electric";
        }
        else if (type == 'S')
        {
            Vehicle = "Sedan";
        }
        else if (type == 'V')
        {
            Vehicle = "Van";
        }
        else if (type == 'T')
        {
            Vehicle = "Truck";
        }
        return Vehicle;
    }