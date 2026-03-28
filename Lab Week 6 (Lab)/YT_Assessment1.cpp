#include<iostream>
using namespace std;
main(){
    int n[3] = {34,98,45}, findnum;
    bool IsFound= false;
    cout<<"Please Enter value: ";
    cin>>findnum;
    for(int idx=0;idx<3;idx++){
        if (n[idx] ==findnum){
            IsFound=true;
        }
    }
            if (IsFound == true)
            {
               cout <<"The number is present."<<endl;
            }
    else{
        cout<<"The number is not present."<<endl;
    }
        }