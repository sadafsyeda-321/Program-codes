#include<iostream>
using namespace std;
void Calculate_Pool_State(int n1, int n2, int n3, float n4);
main(){\
    int Volume, Pipe_1, Pipe_2;
    float hour;
    cout << "Enter the volume of pool in litres: ";
    cin >> Volume;
    cout << "Enter the flow rate of 1st pipe per hour: ";
    cin >> Pipe_1;
    cout << "Enter the flow rate of 2nd pipe / hour: ";
    cin >>Pipe_2;
    cout << "Enter the hours the worker is absent: ";
    cin >> hour;
    Calculate_Pool_State(Volume, Pipe_1, Pipe_2, hour);

}
void Calculate_Pool_State(int Volume, int Pipe_1, int Pipe_2, float hour)
{
    float Total_Water = (Pipe_1 + Pipe_2) * hour;
    float Pool_Percentage;
    int overflow, Pipe_1_Percentage, Pipe_2_Percentage;
    if (Total_Water <= Volume)
    {
        // Pool Filling
        Pool_Percentage = (Total_Water / Volume) * 100;
        Pipe_1_Percentage = (Pipe_1 *hour / Total_Water) * 100;
        Pipe_2_Percentage = (Pipe_2 * hour / Total_Water ) * 100;
        cout << "Pipe is " << Pool_Percentage << " full. \n";
        cout << "Pipe 1: " << Pipe_1_Percentage << "%  & Pipe 2:  " << Pipe_2_Percentage << "%";

    }
    else if (Total_Water > Volume)
    {
        //Overflow
        overflow = Total_Water - Volume;
        cout << "For " << hour << " hours, the pool overflows with " << overflow << " Litres.";

    }
    
    
}