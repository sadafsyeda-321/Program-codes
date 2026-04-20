#include<iostream>
#include<cctype>         // is-upper, is-lower, to-upper,to-lower library holder with many more
using namespace std;
char check(char alphabets);
main(){
    char alphabets;
    cout<<"Enter a character (A/a): ";
    cin>>alphabets;
    check(alphabets);
}
char check(char alphabets)
{
    if (isupper(alphabets))
    {
        cout<<"You have entered a Capital "<< alphabets;
        return alphabets;
    }
    else
    {
    cout<<"You have entered a small "<< alphabets;
    return alphabets;
}
}

