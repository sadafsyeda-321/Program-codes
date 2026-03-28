#include<iostream>
using namespace std;
main(){
    int n[5]={1,2,3,4,5};
    int sum=0;
    float average=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+n[i];
    }
    average=sum/5;
    cout<<"Sum: "<<sum <<endl;
    cout<<"Average: "<<average;
}