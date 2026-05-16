#include<iostream>
using namespace std;
main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Value at position[ " << i <<"] [" << j <<"] = ";
            cin >> arr[i][j];
            
        }
        
    }
    cout << "The matrix you entered is: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
            cout <<"\t";
        }
        cout <<endl;
    
    }
    bool isIdentity = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                
                if (arr[i][j] == 1)
                {
                   isIdentity=true;
                }
                else 
                {
                    isIdentity=false;
                }
            }
            if (i != j)
            {
                if (arr[i][j] == 0)
                {
                   isIdentity=true;
                }
                else 
                {
                    isIdentity=false;
                }
            }
            
        }

    }
    if (isIdentity == true)
    {
        cout <<"Given Matrix is Identity. ";
    }
    else
    {
        cout <<"Given Matrix is  not Identity. " ;
    }
    
}