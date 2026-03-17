#include<iostream>
using namespace std;
main(){
int Choice;
string Book_name, Book_Borrowed,Books_Issued;
while(true){
cout<<"----- Library System -----"<<endl;
cout<<"1. Add Book"<<endl;
cout<<"2. View Book"<<endl;
cout<<"3. Borrow Book"<<endl; 
cout<<"4. Issue Book"<<endl;
cout<<"5. Exit"<<endl;
cout<<"Enter your choice (1_5): ";
cin>>Choice;
if(Choice==1){
cout<<"Enter the name of the book: ";
cin>>Book_name;
cout<<"You have added a book: "<<Book_name;
}
else if(Choice==2){
cout<<"Books to be viewed: "<<Book_name;
}
else if(Choice==3){
cout<<"Book to be borrowed: ";
cin>>Book_Borrowed;
}
else if(Choice==4){
cout<<"Book you wanted to be issued ";
cin>>Books_Issued;
}
else if(Choice==5){
cout<<"Exit.";
break;
}
else{
cout<<"Invalid Choice"<<endl;
}
}
}