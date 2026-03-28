#include<iostream>
using namespace std;
main(){
    string word;
    cout<<"Enter a string: ";
    getline (cin, word);
    string Vowels_Removed=" ";
    cout<<"String with vowels removed: "<< Vowels_Removed <<endl;
    for (int i = 0;word[i] !='\0'; i++)
    {
        if (word[i]!='a' && word[i]!='e' && word[i]!='i' && word[i]!='o' && word[i]!='u' && word[i]!='A' && word[i]!='E' && word[i]!='I' && word[i]!='O' && word[i]!='U')
        {
            cout<<word[i];
        }
    }
}