
#include<iostream>
using namespace std;
main(){
    int n;
    cin >> n;                                   
                                        // char num = 'A'
    char num='A';                                   

    for (int i = 0; i < n ; i++)
    {
        
        for (int j = 0; j < i+1; j++)
        {
            cout << num;                   // cout <<i+1;
        }                                  // 1
        num++;                              //22
                                            //333
                                            
        cout << endl;

    }
    

}