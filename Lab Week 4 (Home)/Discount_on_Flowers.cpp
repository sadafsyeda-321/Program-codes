#include<iostream>
using namespace std;
main(){
    int Red_Rose,White_Roses,Tulips;
    float Original_Price,Discount,Discounted_Price;
    float red=2.00;
    float white=4.10;
    float tulips=2.50;
    cout<<"Red Rose= ";
    cin>>Red_Rose;
    cout<<"White Rose= ";
    cin>>White_Roses;
    cout<<"Tulips= ";
    cin>>Tulips;
    Original_Price=(red*Red_Rose)+(white*White_Roses)+(Tulips*tulips);
    cout<<"Original Price: " << Original_Price <<endl;
    if (Original_Price > 200){
    Discount =(0.2)* Original_Price;
    Discounted_Price = Original_Price - Discount;
    cout<< "Price after discount: " << Discounted_Price;
    }
}
