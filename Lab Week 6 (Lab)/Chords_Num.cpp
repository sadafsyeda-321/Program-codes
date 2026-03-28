#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the number of chords: ";
    cin>>n;
    cout<<"Enter "<< n <<" elements for the first array, one per line: \n";
    string chords[n];
    for (int i = 0; i < n; i++)
    {
        cin>>chords[i];
    }
    for (int i = 0; i < n; i++)
    {
        int length=chords[i].length();

        if (chords[i] [length-1] !='7')
        {
            chords[i] =chords[i]+ "7";

        }
        
    }
    cout<<"Jazzified chords: ";
    for (int i = 0; i < n; i++)
    {
        cout<< chords[i] <<"  ";
    }
    
}
    