#include<iostream>
using namespace std;
main(){
    for (int i=0; i<5; i++)
    {
        for(int j=5; j> i; j--)
        {
            cout <<" ";
            
        }
        for (int k=0; k<=i;k++ )
        {
            cout<<"*";
        }


    cout<<endl;
    }

    for(int i=0; i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout <<" ";
        }
        for(int k =5;k>i;k--)
        {
            cout <<"*";
        }
        cout<<endl;
    }

}