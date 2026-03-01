#include <iostream>
using namespace std;
main(){
int Width;
int Area_painted;
int Height;
int Number_of_walls_painted;
cout<<"Enter Width= ";
cin>> Width;
cout<<"Enter Height= ";
cin>> Height;
cout<<"Number of square meters you can paint= ";
cin>>Area_painted;
Number_of_walls_painted=Area_painted/(Width*Height);
cout<<"Number of walls painted= "<<Number_of_walls_painted;
}