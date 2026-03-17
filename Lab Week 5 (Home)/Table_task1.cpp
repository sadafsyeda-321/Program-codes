#include <iostream>
using namespace std;
main(){
    int multiple;
    int table;
    cout<< "Enter a number: " ;
    cin>>table;
    for (int num=1; num <= 10; num= num+1)
    {
        multiple=table*num;
        cout<< table <<" * " << num << " = " << multiple << endl;
    }
    cout<<endl;
}