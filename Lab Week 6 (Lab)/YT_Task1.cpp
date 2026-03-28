#include<iostream>
using namespace std;
main(){
    int size=10;
    int marks[size];
for (int i=0;i<size;i++)
{
cout<<"Enter marks of the student "<<i+1<<": ";
cin>>marks[i];
}
int sum=0;
for (int i = 0; i < size; i++)
{
    sum= sum+marks[i];
}
int largest=marks[0];
for (int i = 1; i < size; i++){
    if (marks[i]>largest){
        largest=marks[i];
    }
}
cout<<"Largest marks: "<< largest <<endl;
}

