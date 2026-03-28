#include<iostream>
using namespace std;
main(){
    int n;
    string order;
    cout<<"Enter the number of students: ";
    cin>>n;
    cout<<"Enter names of "<< n << " students: \n";
    string pupil[n];
    for (int i = 0; i < n; i++)
    {
        getline (cin, pupil[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0 ; j < n-i-1 ; i++)
        {
            if(pupil[j] > pupil[j+1])
            {
                
                string order=pupil[j];
                pupil[j] = pupil[j+1];
                pupil[j+1] = order;
            }
        }
        
    }
    cout<<endl;
    cout<<"Students in alphabetical order: \n";
    for(int i=0; i<n; i++){
        cout<<pupil[i] <<endl;
    }
    }