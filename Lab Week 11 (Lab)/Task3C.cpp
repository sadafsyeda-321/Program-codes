#include<iostream>
using namespace std;

void printCars(int cars[] [5], int rowSize);

main(){
    int rowSize[5];
    cin >> rowSize[5];        
    int colSize;
    cin>> colSize;
    int cars[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };
    printCars(cars, rowSize[5]);
}
void printCars(int cars[] [5], int rowSize)
{
     int sum;
    for (int col = 0; col < 5; col++)
    {
        sum = sum + cars[rowSize][col];
    }
    cout << sum;
}

