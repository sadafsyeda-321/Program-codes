#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the numbers: ";
    cin>>n;
    int count=0;
    int num;
    int arr[n];
    cout<<"Enter "<<n <<" numbers, one per line: "<<endl;
    for (int i=0;i<n;i++){
        cin>>num;

        bool Isfound=false;
        for (int j=0; j<n ; j++){
            if (arr[j]==num){
                Isfound=true;
                break;
            }
        }
        if (Isfound==true)
    {
            cout<<"Already Entered: " <<num <<endl;
        }
        else{
            arr[count]=num;
            count++;
        }
    }
        cout<<"Unique numbers entered: ";
        for (int i = 0; i < count; i++)
        {
            cout<<arr[i] << " ";
        }
        }
    