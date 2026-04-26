#include<iostream>
using namespace std;
main(){
    int n;
    cin >> n;
    char num = 'A';
    for (int i = 0; i < n ; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;

    }
    

}