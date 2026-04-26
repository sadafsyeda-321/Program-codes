#include<iostream>
using namespace std;

void printCars(int cars[] [5], int colSize);
main(){
    int rowSize;
    cin >> rowSize;
    int columnSize;
    cin >> columnSize;
    int cars[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };
    printCars(cars, columnSize);
}
void printCars(int cars[] [5], int colSize)
{
    int sum;
    for (int rows = 0; rows < 5; rows++)
    {
        sum = sum + cars[rows][colSize];
    }
    cout << sum;
}