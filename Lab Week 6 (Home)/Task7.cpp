#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of products: ";
    cin>>n;
    string Product_Names[n];
    float prices[n];
    int quantity[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter name of product " <<i+1<< " : \n";
        cout<<"Name: ";
        cin>>Product_Names[i];
        cout<<"Enter price of "<< Product_Names[i]<<" : $ ";
        cin>>prices[i];
        cout<<"Enter quantity of "<< Product_Names[i]<<" : ";
        cin>>quantity[i];
    }

    cout<<"Product Inventory Report\n";
    cout<<"------------------------\n";
    float Total=0;
    for (int i=0;i<n;i++)
    {
        float Total_amount=prices[i] * quantity[i];
        Total+=Total_amount;
        cout<<"Product: "<<Product_Names[i]<<endl;
        cout<<"Price: $"<<prices[i]<<endl;
        cout<<"Quantity: "<<quantity[i]<<endl;
        cout<<"Total: $ "<<Total_amount<<endl;
    }
    cout<<"Overall Total Value: $ "<< Total<<endl;
}