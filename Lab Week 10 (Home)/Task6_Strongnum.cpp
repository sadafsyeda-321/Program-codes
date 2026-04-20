#include<iostream>
using namespace std;

string IsStrong(int Num);

bool strongNum = false;

main(){
    int number;
    cout << "Enter number: ";
    cin >> number;
    string result = IsStrong(number);
    if (result == "true"){
        cout << "Strong Num ";
    }
    else
    {
        cout << "Not Strong Num ";
    }
    
}

string IsStrong(int n){
    int temp = n;
    int mod;
    int ans = 0;
    string answer = "false";

}