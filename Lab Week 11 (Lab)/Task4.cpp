#include<iostream>
using namespace std;


void add(int matrix[] [3], int rowSize);

int main(){
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;
    int matrix[rowSize][3];
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" <<i <<"]" <<"[" <<j <<"]: ";
            cin >> matrix [i][j];
        }
    }
    add(matrix,rowSize);
}

void add(int matrix[] [3], int rowSize)
{
    int sum = 0;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + matrix[i][j];
        }
        
    }
    cout << "Sum is: " <<sum;
}


