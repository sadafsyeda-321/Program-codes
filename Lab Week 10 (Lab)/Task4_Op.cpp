#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int distance, angle;
    float height;
    cout<<"Enter the distance from the base of the tree (in feet): ";
    cin>>distance;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin>>angle;
    float radians;
    radians = angle/57.2958;
    height = distance * tan(radians);
    cout<<"The height of the tree is: " << height << " feet ";
    return 0;
}