#include<iostream>
using namespace std;
main(){
    int n;
    string name[100];
    int count=0;
    char letters;
    cout<<"Enter number of customers: ";
    cin>>n;
    cout<<"Enter the names of " << n << " customers: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>name[i];
    }
    cout<<"Enter a letter to check: ";
    cin>>letters;


    for(int i=0; i < n; i++){
        if ( toupper (name[i] [0]) == letters || tolower(name[i] [0])){
            count++;
        }
    }
    cout<<"Total names starting with '" << letters <<"' : " << count <<endl;
}