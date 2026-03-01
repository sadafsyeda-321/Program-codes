#include <iostream>
using namespace std;
main(){
int minutes;
int fps;
int Total_frames;
cout<<"Enter Value of minutes:";
cin>> minutes;
cout<<"Enter Value of fps:";
cin>> fps;
Total_frames=minutes*60*fps;
cout<<"Total_frames:"<<Total_frames;
}