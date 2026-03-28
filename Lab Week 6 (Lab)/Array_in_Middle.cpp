#include<iostream>
using namespace std;
main(){
    int First_Array[2];
    int Second_Array[100];
    int Final[150];
    int n1;
    int n2; //array size for differentiation i-e while adding in one 
    cout<<"Enter the number of elements for the first array : ";
    cin>>n1;
    cout<<"Enter "<< n1 <<" elements for the first array, one per line: \n";
        for (int i = 0; i < n1; i++)
    {
        cin>>First_Array[i];
    }
    cout<<"Enter the number of elements for the second array: ";
    cin>>n2;
    cout<<"Enter "<< n2 <<" elements for the first array, one per line: \n";
    for (int i = 0;i<n2 ; i++)
    {
        cin>>Second_Array[i];
    }
    Final[0]=First_Array[0];
    for (int i = 0; i < n2; i++)
    {
        Final[i+1]=Second_Array[i];
    }
    Final[n2+1]=First_Array[1];
    cout<<"Resulting array: [ ";
    for (int i=0;i<n2+2;i++)
    {
        cout<<Final[i];
        if (i<n2+1)
        {
            cout<<" , ";
        }
    }
        cout<<" ] "<<endl;
    }
