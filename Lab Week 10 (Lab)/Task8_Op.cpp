#include<iostream>

using namespace std;
int add(int n1,int n2, int n3,int n4, int n5);
main(){
    int n;
    int n1, n2, n3, n4, n5, result;
    cout<<"Enter a five digit number: ";
    cin>> n;
    n1=n/10000;
    n2=(n%10000)/1000;
    n3=(n%1000) / 100;
    n4=(n%100) / 10;
    n5=(n%10);
    result= add(n1,n2,n3,n4,n5);
    return 0;
}
    int add(int n1,int n2, int n3,int n4, int n5)
    {
        int sum;
        sum = n1 + n2 + n3 + n4 +n5;
        if (sum % 2 == 0)
    {
        cout<<"Evenish";
    }
    else{
        cout<<"Oddish";
    }
    return sum;
    }
