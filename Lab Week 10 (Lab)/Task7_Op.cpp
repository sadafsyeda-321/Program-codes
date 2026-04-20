#include <iostream>
#include <cmath>

using namespace std;
bool IsSymmetrical(int n)
{
    int reverse;
    int n1, n2, n3;
    n1 = n / 100;
    n2 = (n / 10) % 10;
    n3 = (n % 10);
    reverse = (n3 * 100) + (n2 * 10) + n1;
    return (n == reverse);
}
main()
{
    int reverse;
    int n;
    cout << "Enter a three-digit number: ";
    cin >> n;
    IsSymmetrical(n);
    if (n == reverse)
    {
        cout << "The number is symmetrical " <<endl;
    }
    else
    {
        cout << "The number is not symmetrical \n";
        return 0;
    }
}