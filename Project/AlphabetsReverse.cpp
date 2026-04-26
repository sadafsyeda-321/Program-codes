#include<iostream>
using namespace std;
main(){
    int n;
    cin >> n;
    char alphabets = 'A';
    for (int i = 0; i<n; i++)
        {
            for (int j = i+1; j >= 0; j--)
            {
                cout << alphabets;
                alphabets++;
            }
            cout << endl;
        }
    }