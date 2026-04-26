#include<iostream>
using namespace std;
main(){
    string pin;
    int balance=10000;
    int deposit_money, money_withdrawn ;
    int choice, amount, money;
    for (int i= 1; i<=3; i++)
    {
        cout<<"Enter Pin: ";
        cin>>pin;

        if (pin== "1234")
        {
            cout<<"Login successful "<<endl;
            break;
        }
        else{
            cout<<" Wrong Login "<<endl;
        }
        if (i==3 && !(pin=="1234"))
        {
            cout<< "Too many attempts. Program ends."<<endl;
    }
        for (int j=1;j<=4; j++)
    {
        cout<< endl<<"---- ATM Menu ----"<<endl;
        cout<< "1. Check balance "<<endl;
        cout<< "2. Deposit Money "<<endl;
        cout<< "3. Withdraw Money"<<endl;
        cout<< "4. Exit"<<endl;

        cout<< "Enter Choice: ";
        cin>>choice;
        if(choice==1)
        {
            cout<< "Current Balance: " <<balance;
            cout<<" Balance Checked Successfully "<<endl;
        }
        else if (choice==2)
        {
            cout<<"Deposited Money: ";
            cin>>deposit_money;
            balance= balance+deposit_money;
            cout<<"Money Deposited Successfully.";
            cout<<"Total money= " <<balance<<endl;
            }
            else if(choice==3)
            {
                cout<<"Amount: ";
                cin>>money_withdrawn;
                if (money_withdrawn > 0 && money_withdrawn<=balance)
                {
                    balance=balance-money_withdrawn;
                cout<<"Withdrawal successful. Remaining amount is " <<balance <<endl;
                }
                else{
                    cout<<" Insufficient withdrawal" <<endl;
                }
            }
            else if(choice ==4)
            {
                cout<<"Program Ended "<<endl;
                break;
            }
            else if (choice>4){
                cout<<"Invalid choice"<<endl;
            }
    }
}
}