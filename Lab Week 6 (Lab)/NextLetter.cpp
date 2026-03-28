#include<iostream>
using namespace std;
main(){
    string word;
    cout<<"Enter a character: ";
    cin>>word;
    for (int i = 0; word[i]!='\0'; i++)
    {
        /* code */
        char asciiCode=word[i];
    if (asciiCode=='z'){
    asciiCode='a';
    cout<<asciiCode;
    }
    else if (asciiCode=='Z'){
    asciiCode='A';
    cout<<asciiCode;
    }
    else if (asciiCode=asciiCode+1){
    cout<<asciiCode;
}
}
}