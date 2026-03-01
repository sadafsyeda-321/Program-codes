#include <iostream>
using namespace std;
main(){
int width;
int paint_area;
int height;
int walls_painted;
cout<<"Enter width:";
cin>> width;
cout<<"Enter height:";
cin>> height;
cout<<"paint_area=";
cin>>paint_area;
walls_painted=paint_area/(width*height);
cout<<"walls_painted="<<walls_painted;
}