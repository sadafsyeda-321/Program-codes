#include<iostream>
using namespace std;

void printCars(int cars [][5], int rowSize);
main(){
    int rowSize;
    cin >> rowSize;
    int cars[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };
    printCars(cars, rowSize);
}
void printCars(int cars [][5], int rowSize)
{
    int sum = 0;
    sum = sum + rowSize;
    for (int row = 0; row < 5; row++)
    {
        if (sum == rowSize)
        {
            
        }
        else
        {
            cout << " 2D array is: " << cars [row] [5] ;
        }
        
    }
}
