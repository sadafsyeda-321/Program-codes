#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the number of elements for the first array : ";
    cin>>n;
    cout<<"Enter "<< n <<" elements for the first array, one per line: \n";
    int numbers[n];
    int even=0;
    for (int i = 0; i < n; i++)
    {
        cin>>numbers[i];
        if (numbers[i]%2 ==0 ){
            even++;
        }
    }
    cout<<"Total even numbers: "<< even <<endl;
    }