#include<iostream>
#include<cmath>

using namespace std;

float power_9_m = pow(10, 9);
float power_6_m = pow(10, 6);

float pyramidVolume(float measurement[], string unit);

main()
{
    float measurement [3];
    cout << "Enter length, width, height (in meters): ";
    for (int i = 0; i < 3; i++)
    {
        cin >> measurement[i];

    }
    string unit;
    cout << "Enter output (millimeters, centimeters, meters , kilometers) : ";
    cin >> unit;
    float result = pyramidVolume (measurement , unit);
    cout << result << " cubic " << unit;
}

    float pyramidVolume(float m[] , string unit)
    {
    float Volume =1;
    for (int i = 0; i < 3; i++)
    {
        Volume = m[i] * Volume;
    }
    Volume = Volume/3;

    if (unit == "kilometers")
    {
        Volume = Volume/ power_9_m;
    }
    else if (unit  == "centimeters"){
        Volume = Volume * power_6_m;
        float pow_6_m = pow(6,10);
    }
    else if (unit == "millimeter")
    {
        Volume = Volume * power_9_m;
        float pow_9_meter = pow(9,10);
    }
    return Volume;
}