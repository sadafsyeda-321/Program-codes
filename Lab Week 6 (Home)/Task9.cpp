#include<iostream>
using namespace std;

int main()
{
    string books[100];
    bool borrowed=false;
    int Count=0;
    int choice;
    while(true)
    {
        cout<<"\n ------------LIBRARY MANAGEMENT SYSTEM--------------- \n";
        cout<<"1. Add Books\n";
        cout<<"2. View Books\n";
        cout<<"3. Borrow Books\n";
        cout<<"4. Exit\n";

        cout<<"Enter the choice: ";
        cin >> choice;
        if(choice==1)
        {
        if (Count<100)
        {
            
            cout<<"Enter the name of the book:\n";
            cin.ignore();
            getline(cin, books[Count] );
            Count++;
            cout<<"Book added! \n";
        }
        else{
            cout<<"Library is full. "<<endl;
        }
    }
        else if (choice==2)
        {
            if (Count==0)
            {
                cout<<"No books yet. " <<endl;
            }
            else {
                cout<<"Books in library: "<<endl;
                for (int i = 0; i < Count; i++)
            
                    cout<<i+1 << ". " << books[i] <<endl;
                
            }
        }
        
        else if (choice==3){
            if (Count == 0)
            {
                cout<<"No books to borrow. "<<endl;
            }
            else{
                cout<<"Available Books: \n";
                for (int i=0; i<Count;i++)
                    cout<<i+1 <<". " << books[i] <<endl;
                
                int num;
                cout<<"Select book: ";
                cin>>num;

                if (num>=1 && num<=Count)
                {
                    cout<<"You borrowed: "<<books[num-1]<<endl;
                    for (int i = num -1; i < Count-1; i++)
                    {
                        books[i]=books[i+1];
                    }
                    Count--;
                }
                else
                {
                    cout<<"Invalid number. \n";
                }
            }
        }
        
        else if(choice==4)
        {
            cout<<"Thanks for visiting the library! \n";
            break;
        }

        else 
        {
            cout<<"Invalid choice.\n";
        }
    }
}