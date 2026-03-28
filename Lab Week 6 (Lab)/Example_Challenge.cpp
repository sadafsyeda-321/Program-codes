#include<iostream>
using namespace std;
main(){
    string username="admin";
    string password="1234";
    string StudentName[100];
    string CourseName[100];
    int StudentAge[100];
    int student=0;
    int choice;
    bool Login=false;
    for (int i= 1; i<=3; i++)
    {
        cout<<"Enter Username: ";
        cin>>username;

        cout<< "Enter Password: ";
        cin>>password;

        if (username=="admin" && password=="1234"){
            Login=true;
            cout<<"Login successful "<<endl;
            break;
        }
        else{
            cout<<" Incorrect Pin "<<endl;
        }
    }
    if (Login==true)
    {
        while(true)
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
            if (student<100)
            {
                cout<< "Enter Student Name: ";
            cin>>StudentName[student];

            cout<<" Enter Student Age: ";
            cin>>StudentAge[student];
            cout<<" Student Added Successfully "<<endl;
            student++;
            }
        }
        else if (choice==2)
        {
            for (int i=0;i<student;i++)
            {
                cout<< "Student "<<(i + 1)<<": " << StudentName[i] <<" Age: "<<StudentAge[i] <<endl;
            }
        }
            else if (student=0)
            {
                cout<< "No Student Record Found"<<endl;
            }
            else if(choice==3)
            {
                cout<< "Enter Course Name: ";
                cin>>CourseName[100];

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
}