#include<iostream>
using namespace std;
main(){
int select;
int num_1, num_2, result;
while(true){
cout<<"------ Simple Calculator ------"<<endl;
cout<<"1. Addition" <<endl;
cout<<"2. Sutraction" <<endl;
cout<<"3. Multiplication" <<endl;
cout<<"4. Division" <<endl;
cout<<"5. Clear screen" <<endl;
cout<<"6. Exit" <<endl;
cout<<"Enter your choice(1-6): ";
cin>>select;
if(select==1){
cout<<"Enter first number: ";
cin>>num_1;
cout<<"Enter second number: ";
cin>>num_2;
result=num_1+num_2;
cout<<"Result: "<< result <<endl;
}
else if(select==2){
cout<<"Enter first number: ";
cin>>num_1;
cout<<"Enter second number: ";
cin>>num_2;
result=num_1-num_2;
cout<<"Result: "<< result <<endl;
}
else if(select==3){
cout<<"Enter first number: ";
cin>>num_1;
cout<<"Enter second number: ";
cin>>num_2;
result=num_1*num_2;
cout<<"Result: "<< result <<endl;
}
else if(select==4){
cout<<"Enter first number: ";
cin>>num_1;
cout<<"Enter second number: ";
cin>>num_2;
result=num_1/num_2;
cout<<"Result: "<< result <<endl;
}
else if(select==5) {
cout<<"Clear the Screen."<<endl;
}
else if(select==6){
cout<<"Exit." << endl;
break;
}
else{
cout<<"Invalid choice. "<<endl;
}
}
}