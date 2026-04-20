#include<iostream>
#include<cmath>

using namespace std;
// Prototype
float calculateBalance(float balance, int years);

// Global Variables
float type1 = 0.05;
float type2 = 0.07;
float type3 = 0.10;
float Year_Type = 0.02;

main(){
    float balance;
    int years;
    cout << "Enter Balance and Years: ";
    cin >>balance;
    cin >> years;
    float result;
    result = calculateBalance(balance, years);
    cout << "Updated Balance: " << result;
}

    // Function
    float calculateBalance(float balance, int years)
    {
        float interest, Total_Balance;
    if (balance < 10000)
    {
        interest = balance * type1;
        if (years >= 3)
        {
            interest = interest + (balance * Year_Type);
        }
    }
    if (balance >= 10000 && balance <= 50000)
    {
        interest = balance * type2;
        if (years >= 3)
        {
            interest = interest + (balance * Year_Type);
        }
    }
    if (balance > 50000)
    {
        interest = balance * type3;
        if (years >= 3)
        {
            interest = interest + (balance * Year_Type);
        }
    }
    Total_Balance = balance + interest;
    return Total_Balance;
}
