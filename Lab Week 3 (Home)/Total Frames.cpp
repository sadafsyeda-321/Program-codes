#include <iostream>
using namespace std;
main(){
int Number_of_Minutes;
int fps;
int Total_Number_of_Frames;
cout<<"Enter Value of Number_of_Minutes:";
cin>> Number_of_Minutes;
cout<<"Enter Value of fps:";
cin>> fps;
Total_Number_of_Frames=Number_of_Minutes*60*fps;
cout<<"Total_Number_of_Frames:"<<Total_Number_of_Frames;
}