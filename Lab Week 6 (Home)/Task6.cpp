#include<iostream>
using namespace std;
main(){
    string name[100];
    int n;
    string order;
    cout<<"Enter the number of students: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>name[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1 ; j < n; i++)
        {
            if(name[i] > name[j])
            {
                //Swap names
                string swap=name[i];
                name[i] = name[j];
                name[j] = swap;
            }
        }
        
    }
    
    cout<<"Students in alphabetical order: \n";
    for(int i=0; i<n; i++){
        cout<<name[i] <<endl;
    }
    }