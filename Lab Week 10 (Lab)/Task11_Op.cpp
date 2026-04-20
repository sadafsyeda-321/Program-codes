#include <iostream>
using namespace std;

void num_to_Text(int n);
main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    num_to_Text(num);
}
void num_to_Text(int n)
{
    int ones = 0;
    ones = n % 10;
    int tens = n - ones;

    if (tens >= 10 && tens <= 90)
    {
        // For Tens

        if (tens == 10)
        {
            cout << "Ten ";
        }
        else if (tens == 20)
        {
            cout << "Twenty ";
        }
        else if (tens == 30)
        {
            cout << "Thirty ";
        }
        else if (tens == 40)
        {
            cout << "Forty ";
        }
        else if (tens == 50)
        {
            cout << "Fifty ";
        }
        else if (tens == 60)
        {
            cout << "Sixty ";
        }
        else if (tens == 70)
        {
            cout << "Seventy ";
        }
        else if (tens == 80)
        {
            cout << "Eighty ";
        }
        else if (tens == 90)
        {
            cout << "Ninety ";
        }
    }
    if (n > 10 && n < 20)
    {
        // Number range 11 - 19

        if (n == 11)
        {
            cout << "Eleven \n";
        }
        else if (n == 12)
        {
            cout << "Twelve \n";
        }
        else if (n == 13)
        {
            cout << "Thirteen \n";
        }
        else if (n == 14)
        {
            cout << "Fourteen \n";
        }
        else if (n == 15)
        {
            cout << "Fifteen \n";
        }
        else if (n == 16)
        {
            cout << "Sixteen \n";
        }
        else if (n == 17)
        {
            cout << "Seventeen \n";
        }
        else if (n == 18)
        {
            cout << "Eighteen \n";
        }
        else if (n == 19)
        {
            cout << "Nineteen \n";
        }
    }
    if (ones > 0 && ones < 10)
    {
        if (ones == 1)
        {
            cout << "One ";
        }
        if (ones == 2)
        {
            cout << "Two ";
        }
        if (ones == 3)
        {
            cout << "Three ";
        }
        if (ones == 4)
        {
            cout << "Four ";
        }
        if (ones == 5)
        {
            cout << "Five ";
        }
        if (ones == 6)
        {
            cout << "Six ";
        }
        if (ones == 7)
        {
            cout << "Seven ";
        }
        if (ones == 8)
        {
            cout << "Eight ";
        }
        if (ones == 9)
        {
            cout << "Nine ";
        }
    }
}