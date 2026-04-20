#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c, complex_sol;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    float determinant;
    determinant = pow(b,2) - (4*a*c);
    float root1, root2;
    float i;
    if (determinant == 0)
    {
        root1 = root2 = -b/2*a;
        cout<<"Solution: x = " << root1 ;
    }
    else if (determinant > 0)
    {
        root1 = (-b + sqrt(determinant))/(2*a);
        root2 = (-b - sqrt(determinant))/(2*a);
        cout<<"solution: x = " << root1 <<" and x = "<< root2 ;
    }
    else if (determinant < 0)
    {
        float root1a, root1b;
        root1a = -b/2*a;
        root1b = sqrt(- (determinant))/2*a;
        cout<<"Complex solution: x = " << root1a <<" + " << root1b <<" and x = " << root1a <<" - " << root1b ;
    }

}