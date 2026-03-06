#include<iostream>
using namespace std;
main(){
    float bill;
    float discount;
    float discounted_bill;
    cout << "Enter your bill:";
     cin>>bill;
     if (bill <= 5000){
discount =(0.05)* bill;
cout<<"discount: "<< discount <<endl;
discounted_bill = bill-discount;
cout<<"discounted_bill= "<< discounted_bill;
     }
     else {
      discount = (0.01)*bill;
      cout<<"discount: "<< discount;
        discounted_bill = bill- discount;
        cout<<"Discounted bill="<<discounted_bill;
     }
        
}   