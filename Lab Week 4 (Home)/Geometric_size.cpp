#include<iostream>
using namespace std;
main(){
    float square, rectangle, circle, triangle;
    float Square_Area, Rectangle_area, Circle_area, Triangle_area;
    float length, width, base, height, radius;
    string shape;
    cout<<"Shape: ";
    cin>> shape;
    if (shape== "Square"){
        cin>> length;
        Square_Area= length * length;
        cout<<"Area of square: "<<Square_Area;
    }
    if (shape=="Rectangle"){
        cin>>length;
        cin>>width;
        Rectangle_area= length * width;
        cout<<"Area of rectangle: " << Rectangle_area;
    }
    if (shape=="Circle"){
        cin>>radius;
        Circle_area= (3.14) * radius * radius;
        cout<<"Area of circle: "<< Circle_area;
    }
    if (shape=="Triangle"){
        cin>>base;
        cin>>height;
        Triangle_area= (0.5) * base * height;
        cout<<"Area of triangle: "<<Triangle_area;
    }
}