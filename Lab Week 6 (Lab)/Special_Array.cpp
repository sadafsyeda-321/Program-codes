#include<iostream>
using namespace std;
main(){
    int n;
    int n1[n];
    string Vowels=" ";
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter "<< n <<" elements for the first array, one per line: \n";
    for (int i = 0; i < n; i++)
    {
        cin>>n1[i];
    }
    bool isSpecial=true;
    for (int i = 0; i < n; i++)
    {
        if (i%2 ==0 )
            { 
                if (n1[i] %2 !=0)
        {
           isSpecial=false;
           break;
        }
    }
        else {
        if    (n1[i] %2 ==0)
        {
        isSpecial=false;
            break;
        }
    }
}
    if (isSpecial){
        cout<<"The array is special. \n";
    }
    else{
        cout<<"The array is not special. \n";
    }
}
