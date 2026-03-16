#include<iostream>
using namespace std;
main(){
    string username,password;
    string StudentName="" , CourseName="";
    int StudentAge=0;
    int choice;
    for (int i= 1; i<=3; i++)
    {
        cout<<"Enter Username: ";
        cin>>username;

        cout<< "Enter Password: ";
        cin>>password;

        if (username=="admin" && password == "1234")
        {
            cout<<"Login successful "<<endl;
            break;
        }
        else{
            cout<<" Wrong Login "<<endl;
        }
        if (i==3 && !(username== "admin" && password=="1234"))
        {
            cout<< "Too many attempts. Program ends."<<endl;
            return 0;
        }
    }
    for (int i=1;i<=5; i++)
    {
        cout<< endl<<"---- University Management System ----"<<endl;
        cout<< "1. Add Student "<<endl;
        cout<< "2. View Student "<<endl;
        cout<< "3. Add Course"<<endl;
        cout<< "4. Exit"<<endl;

        cout<< "Enter Choice: ";
        cin>>choice;
        if(choice==1)
        {
            cout<< "Enter Student Name: ";
            cin>>StudentName;

            cout<<" Enter Student Age: ";
            cin>>StudentAge;
            cout<<" Student Added Successfully "<<endl;
        }
        else if (choice==2)
        {
            if (StudentName !="")
            {
                cout<< "Student Name: "<< StudentName <<endl;
                cout<< "Student Age: "<< StudentAge <<endl;
            }
            else
            {
                cout<< "No Student Record Found"<<endl;
            }
        }
            else if(choice==3)
            {
                cout<< "Enter Course Name: ";
                cin>>CourseName;

                cout<< "Course Added: "<< CourseName<<endl;
            }
            else if(choice ==4)
            {
                cout<<"Program Exit "<<endl;
                break;
            }
            else {
                cout<< "Invalid Choice"<<endl;
        }
    }
}