#include<iostream>
using namespace std;

int diagonalSum(int mat[][100], int size)
{
    int row = 0; 
    int cols = size -1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + mat[row][cols] ;
        row++;
        cols--;
            }
            return sum;;
        }
        
    


int main(){
int matrix[4][100] = {{1,7,5},{2,9,3},{4,1,8},{20,0,1}};
int rows = 4;
int size=3 ;
int cols=size - 1;

cout <<diagonalSum(matrix, size);


}