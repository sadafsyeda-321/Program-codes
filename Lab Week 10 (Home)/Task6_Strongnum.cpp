
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
    while (temp != 0)
    {
        mod = temp % 10;
        temp = temp / 10;
        int factorial = 1;
        for (int i = 1; i <= mod; i++)
        {
            factorial = i * factorial;
    
        }
        ans = ans +factorial;

    }
    if (n == ans){
        answer = "true ";
    }
    else {
        answer = "false ";
    }
    return answer;
}