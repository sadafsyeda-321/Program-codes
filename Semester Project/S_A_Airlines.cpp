#include <iostream>
#include <conio.h>

using namespace std;
main()
{
    int Total_Passengers = 10000;
    int index = 7;

    // data structures
    string nameArray[Total_Passengers];
    string Address_array[Total_Passengers];
    string contactInfo_array[Total_Passengers];
    string Father_Name_array[Total_Passengers];
    string CNIC_No_array[Total_Passengers];
    string Origin_Flight_array[Total_Passengers];
    string Destination_Flight_array[Total_Passengers];
    int AgeArray[Total_Passengers];
    int Total_Tickets_array[Total_Passengers];
    int Premium_Luxury_array[Total_Passengers];
    int Business_Class_array[Total_Passengers];
    int Executive_array[Total_Passengers];
    int Economy_array[Total_Passengers];
    int Ticket_Price_array[Total_Passengers];
    int Duration_array[Total_Passengers];

    // CRUD    Create, Read, Update, Delete
    while (true)
    {
        // main header of airlines;
        cout << "--------------------------------------------------------------- \n";
        cout << "----------------        S & A AIRLINES       ------------------ \n";
        cout << "--------------------------------------------------------------- \n";

        cout << "User menu \n";
        cout << "1. Admin \n";
        cout << "2. Passengers \n";
        cout << "3. Exit \n";
        cout << "Chooose Option: ";
        string userOption;
        cin >> userOption;

        cout << "You choose " << userOption << endl;
        if (userOption == "1")
        {
            // Admin Code
            int countAttempt = 0;
            for (int i = 0; i < 3; i++)
            {
                cout << "Admin Menu: Login Attempt " << i + 1 << endl;
                cout << "Enter username: ";
                string username;
                cin >> username;
                cout << "Enter password: ";
                string password;
                cin >> password;
                if (username == "admin " && password == "123")
                {
                    cout << "Succesfully Logged in \n";

                    while (true)
                    {
                        cout << "1. Show all passengers \n";
                        cout << "2. Search Passengers \n";
                        cout << "3. Update Passenger Record \n";
                        cout << "4. Generate List \n";
                        cout << "5. Delete Record by Name \n";
                        cout << "6. Logout \n";
                        cout << " Choose the Option: ";
                        string AdminOption;
                        cin >> AdminOption;

                        if (AdminOption == "1")
                        {
                            // Pasengers Record
                            cout << "Name \t  Father Name  \tAgeArray  \tCNIC No.  \tAddress  \tTotal Tickets  \t Premium Luxury  \t Business Class  \tExecutive  \tEconomy  \t  Ticket Price  \t  Origin Flight  \tDestination Flight  \tDuration  \n";
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << Father_Name_array[i] << "\t" << AgeArray[i] << "\t" << CNIC_No_array[i] << "\t"
                                         << Address_array[i] << "\t" << Total_Tickets_array[i] << "\t" << Premium_Luxury_array[i] << "\t" << Business_Class_array[i] << "\t" << Executive_array[i] << "\t" << Economy_array[i] << "\t" << Ticket_Price_array[i] << "\t" << Origin_Flight_array[i] << "\t"
                                         << Destination_Flight_array[i] << "\t" << Duration_array[i] << endl;
                                }
                            }
                        }
                        else if (AdminOption == "2")
                        {
                            // find passengers by name function
                            cout << "Enter the name you want to search: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;            // suppose value as by second pattern
                            for (int i = 0; i < index; i++) // index contains all data being stored
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i; // i value given to this memory
                                    found = true;   // if code was like that above it would show all similar possible matches
                                }
                            }
                            if (found == false) // checking the condition outside the loop
                            {
                                cout << "Record not found against name " << name << endl;
                            }
                            else
                            {
                                cout << "Name \t  Father Name  \tAgeArray  \tCNIC No.  \tAddress  \tTotal Tickets  \t Premium Luxury  \t Business Class  \tExecutive  \tEconomy  \t  Ticket Price  \t  Origin Flight  \tDestination Flight  \tDuration  \n";
                                cout << nameArray[i] << "\t" << Father_Name_array[i] << "\t" << AgeArray[i] << "\t" << CNIC_No_array[i] << "\t"
                                     << Address_array[i] << "\t" << Total_Tickets_array[i] << "\t" << Premium_Luxury_array[i] << "\t" << Business_Class_array[i] << "\t" << Executive_array[i] << "\t" << Economy_array[i] << "\t" << Ticket_Price_array[i] << "\t" << Origin_Flight_array[i] << "\t"
                                     << Destination_Flight_array[i] << "\t" << Duration_array[i] << endl;
                                // code can be used as that of option 1 but this one shows the exact match
                            }
                        }
                        else if (AdminOption == "3")
                        {
                            // update passenger record                     i-e firstly requires search passenger
                            cout << "Enter the name you want to update record of ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++) // index contains all data being stored
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i; // i value given to this memory
                                    found = true;
                                }
                            }
                            if (found == true)
                            {

                                cout << "-------- Old Record --------" << endl; // old record is shown
                                cout << "Name \t  Father Name  \tAgeArray  \tCNIC No.  \tAddress  \tTotal Tickets  \t Premium Luxury  \t Business Class  \tExecutive  \tEconomy  \t  Ticket Price  \t  Origin Flight  \tDestination Flight  \tDuration  \n";
                                cout << nameArray[foundindex] << "\t" << Father_Name_array[foundindex] << "\t" << AgeArray[foundindex] << "\t" << CNIC_No_array[foundindex] << "\t"
                                     << Address_array[foundindex] << "\t" << Total_Tickets_array[foundindex] << "\t" << Premium_Luxury_array[foundindex] << "\t" << Business_Class_array[foundindex] << "\t" << Executive_array[foundindex] << "\t" << Economy_array[foundindex] << "\t" << Ticket_Price_array[foundindex] << "\t" << Origin_Flight_array[foundindex] << "\t"
                                     << Destination_Flight_array[foundindex] << "\t" << Duration_array[foundindex] << endl;

                                cout << "Enter new record for update: " << endl; // if directly it is shown it would change the already provided data
                                cout << "Enter your name: ";
                                string name;
                                cin >> name;
                                string Father_Name;
                                cin >> Father_Name;
                                int Age;
                                cin >> Age;
                                int CNIC_No;
                                cin >> CNIC_No;
                                string Address;
                                cin >> Address;
                                int Total_Tickets;
                                cin >> Total_Tickets;
                                int Premium_Luxury;
                                cin >> Premium_Luxury;
                                int Business_Class;
                                cin >> Business_Class;
                                int Executive;
                                cin >> Executive;
                                int Economy;
                                cin >> Economy;
                                int Ticket_Price;
                                cin >> Ticket_Price;
                                string Origin_Flight;
                                cin >> Origin_Flight;
                                string Destination_Flight;
                                cin >> Destination_Flight;
                                int Duration;
                                cin >> Duration;
                                string contactInfo;
                                cin >> contactInfo;
                                nameArray[foundindex] = name; // now we have to make changes in the found index
                                Address_array[foundindex] = Address;
                                contactInfo_array[foundindex] = contactInfo;
                                Father_Name_array[foundindex] = Father_Name;
                                CNIC_No_array[foundindex] = CNIC_No;
                                Origin_Flight_array[foundindex] = Origin_Flight;
                                Destination_Flight_array[Total_Passengers] = Destination_Flight;
                                AgeArray[Total_Passengers] = Age;
                                Total_Tickets_array[Total_Passengers] = Total_Tickets;
                                Premium_Luxury_array[Total_Passengers] = Premium_Luxury;
                                Business_Class_array[Total_Passengers] = Business_Class;
                                Executive_array[Total_Passengers] = Executive;
                                Economy_array[Total_Passengers] = Economy;
                                Ticket_Price_array[Total_Passengers] = Ticket_Price;
                                Duration_array[Total_Passengers] = Duration;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (AdminOption == "4")
                        {
                            // generate list

                            // code to display sorted data     On basis of the aggregate
                            for (int i = 0; i < index; i++)
                            { // outer loop remains same
                                for (int j = i + 1; j < index; j++)
                                { // inner loop first runs complete
                                    if (nameArray[i] < nameArray[j])
                                    { // when i=0 it does comparison with all values
                                        // whenever it [j] gets greater value than that of the index 0 , we swap it
                                        // swap operation                           temp is temporary variable && temp=i , i=j ,j=i

                                        //  Swapping of name
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;
                                    }
                                }
                            }
                        }

                        // Passenger code;
                        cout << "Welcome to S & A Airlines Menu \n";
                        string name;
                        cin >> name;
                        string Father_Name;
                        cin >> Father_Name;
                        int AgeArray;
                        cin >> AgeArray;
                        int CNIC_No;
                        cin >> CNIC_No;
                        string address;
                        cin >> address;
                        int Total_Tickets;
                        cin >> Total_Tickets;
                        int Premium_Luxury;
                        cin >> Premium_Luxury;
                        int Business_Class;
                        cin >> Business_Class;
                        int Executive;
                        cin >> Executive;
                        int Economy;
                        cin >> Economy;
                        int Ticket_Price;
                        cin >> Ticket_Price;
                        string Origin_Flight;
                        cin >> Origin_Flight;
                        string Destination_Flight;
                        cin >> Destination_Flight;
                        int Duration;
                        cin >> Duration;
                        string contactInfo;
                        cin >> contactInfo;
                    }
                }
            }
        }
    }
}
