#include<iostream>
using namespace std;

char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'},
};
bool gravity = false;

bool isBlackHole = true;

void displayWorld()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << objects[row][col];
            cout << "\t";
        }
        cout <<endl;
    }
    
}
void setGravityStatus(bool value)
{
    gravity = value;
}

void timeTick(int times)
{
    int count = 0;
    if(gravity)
    {
        while (count < times)
        {
            for (int row = 3 ; row >=0; row--)
            {
                for (int col = 0; col < 5; col++)
                {
                    if (objects [row][col] == '#')
                    {
                        if (objects [row+1][col] == '-')
                        {
                            objects[row+1][col] == '#';
                            objects[row][col] == '-';
                        }
                        
                    }
                    
                }
                
            }
            count++;
        }
        
    }
}

main(){
    displayWorld();
    setGravityStatus(true);
    timeTick(3);
}