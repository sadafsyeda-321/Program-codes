#include<iostream>
using namespace std;

main(){
    
    for (int c = 5; c >= 1; c--)
    {
        for (int s =1; s<=5-c; s++)
        {
            cout<<" ";
        }
        for (int r = 5; r <=c; r++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    
    }

