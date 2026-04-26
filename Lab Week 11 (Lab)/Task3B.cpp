#include <iostream>
using namespace std;

void printCars(int cars[][5], int rowSize);

main()
{
    int rowSize;
    cin >> rowSize;        
    int colSize;
    cin>> colSize;
    int cars[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };
    printCars(cars, rowSize);
}
void printCars(int cars[] [5], int rowSize)
{
    int sum = cars[0][0] + cars[1][0] + cars[2][0] + cars[3][0] + cars[4][0];
    cout << sum;
    }