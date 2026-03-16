#include<iostream>
using namespace std;
main(){
    int multiple, table;
    cin>>table;
    for(int num=1; num<=20; num= num+1)
    { multiple= table * num;
    cout<< table << " * " << num <<" = " << multiple <<endl;
}
}