#include<iostream>
using namespace std;
main(){
    string Password, User_name;
    Password="S123H";
    cout<<"Enter the password:";
    cin>>User_name;
if (Password == User_name){ 
    cout<<"Wow! I have cracked the code";
}
else{
    cout<<"Try again";
}
}