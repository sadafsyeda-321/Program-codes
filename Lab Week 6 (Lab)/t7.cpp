#include<iostream>
using namespace std;
main(){
    string word;
    char letter;
    bool IsFound=false;
    cout<<"Enter a word: ";
    cin>>word;
    cout<<"Enter the character: ";
    cin>>letter;
    for(int i=0;word[i]!='\0';i++)
    {
        if (word[i]==letter)
        {
            IsFound=true;
            break;
        }
    }
    if (IsFound)
    {
        cout<<letter<<" is found in " <<word;
    }
    else
    {
        cout<<letter<<" is not found in "<<word;
    }
}