#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the numbers: ";
    cin>>n;
    int numbers[n];
    cout<<"Enter "<<n <<" numbers, one per line: "<<endl;
    for (int i=0;i<n;i++){
    cin>>numbers[i];
    }
    int largest=numbers[0];
    int smallest=numbers[0];
    for (int i=0;i<n;i++){
        if (numbers[i] > largest ){
            largest=numbers[i];
        }

        if (numbers[i] < smallest)
        {
            smallest=numbers[i];
        }
        
    }
    cout<<"Largest number: " << largest << endl;
    cout<<"Smallest number: " <<smallest << endl;
}