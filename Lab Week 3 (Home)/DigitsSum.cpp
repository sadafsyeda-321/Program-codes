#include <iostream>
using namespace std;
main(){
int n;
int n1;
int n2;
int n3;
int n4;
int Sum_of_the_individual_digits;
cout<<"Enter a 4-digit number: ";
cin>> n;
n1=n/1000;
n2=(n%1000)/100;
n3=(n%100)/10;
n4=(n%10);
Sum_of_the_individual_digits=n1+n2+n3+n4;
cout<<"Sum of the individual digits= " << Sum_of_the_individual_digits;
}