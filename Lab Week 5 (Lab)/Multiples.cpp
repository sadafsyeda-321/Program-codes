#include <iostream>
using namespace std;
main(){
    int multiple;
    int table;
    cout<< "Multiplication table of 24:" << endl;
    for (int num=1; num <= 10; num= num+1)
    {
        table= 24;
        multiple=table*num;
        cout<< table <<" * " << num << " = " << multiple << endl;
    }
    cout<<endl;
    cout<< "Multiplication table of 50: "<<endl;
    for (int num=1; num <= 10; num=num + 1)
    {
        table=50;
        multiple=table*num;
        cout<< table <<" * " << num << " = " << multiple <<endl;
    }
    cout<<endl;
    cout<< "Multiplication table of 29 " << endl;
    for (int num = 1; num <= 10; num = num +1 )
    {
        table= 29;
        multiple=table*num;
        cout<< table <<" * " << num << " = " << multiple <<endl;
    }
}