#include<iostream>
using namespace std;
main(){
string word;
char letter;
bool IsFound=false;
cout<<"Enter word: ";
cin>>word;
cout<<"Enter Letter: ";
cin>>letter;
for (int idx =0;word[idx] !='\0'; idx=idx+1)
{
    if (word[idx]==letter)
    {
        IsFound=true;

    }
}
if (IsFound){
    cout<<"found";
}
else{
    cout<<"Not Found";
}
}