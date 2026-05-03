#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int Total_Passengers = 1000;
    int index = 7;
    int PremiumLuxury = 10;
    int BusinessClass = 10;
    int Executive = 10;
    int Economy = 10;
    int TotalFlight_Tickets = 40;
    int Premium_Price = 200000;
    int Business_Price = 150000;
    int Executive_Price = 120000;
    int Economy_Price = 100000;

    // data structures
    string nameArray[Total_Passengers] = {"Ali", "Uzair", "Sara", "Usman", "Zimal", "Bilal", "Hamdan"};
    // string Address_array[Total_Passengers] = {"Lahore", "Sialkot", "Multan", "Quetta", "Sialkot", "Islamabad", "Sahiwal"};
    string contactInfo_array[Total_Passengers] = {"03247512487", "03225512489", "03247958487", "0324796847", "030414724866", "030426824869", "03098547433"};
    // string Father_Name_array[Total_Passengers] = {"M.Ahmad", "Osman Ali", "M.Hamid ", "Bilal Rafi", "Usman ", "Shoukat Rehman", "Rehman Baba"};
    string CNIC_No_array[Total_Passengers] = {"36402-07451", "36402-026847", "36402-214875", "36402-694781", "36402-485451", "36402-627451", "36402-847551"};
    string Origin_Flight_array[Total_Passengers] = {"Multan", "Quetta", "Sialkot", "Peshawar", "Karachi", "Lahore", "Islamabad"};
    string Destination_Flight_array[Total_Passengers] = {"Karachi", "Dubai", "Abu Dhabi", "London", "Toronto", "Kuala lampur", "New York"};
    // int AgeArray[Total_Passengers] = {45, 65, 20, 30, 48, 26, 18};
    float Total_Tickets_array[Total_Passengers] = {1, 1, 3, 2, 1, 5, 4};
    float Premium_Luxury_array[Total_Passengers] = {1, 0, 0, 1, 0, 2, 0};
    float Business_Class_array[Total_Passengers] = {0, 1, 1, 0, 1, 2, 1};
    float Executive_array[Total_Passengers] = {0, 0, 1, 0, 0, 1, 1};
    float Economy_array[Total_Passengers] = {0, 0, 1, 0, 1, 0, 2};
    string Duration_array[Total_Passengers] = {"3 hrs", "2.5 hrs", "1 hrs", "6 hrs", "13 hrs", "10 hrs", "18 hrs"};

    // CRUD    Create, Read, Update, Delete
    while (true)
    {
        // main header of airlines;
        system("cls");
        cout << "--------------------------------------------------------------- \n";
        cout << "----------------        S & A AIRLINES       ------------------ \n";
        cout << "--------------------------------------------------------------- \n";

        cout << "Main Menu \n";
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
            bool loggedIn = false;
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
                if (username == "admin" && password == "1234")
                {
                    system("cls");
                    cout << "Succesfully Logged in \n";
                    getch();

                    while (true)
                    {
                        system("cls");
                        cout << "-------   Admin Menu    -------\n";
                        cout << "1. Show all passengers \n";
                        cout << "2. Search Passengers \n";
                        cout << "3. Update Passenger Record \n";
                        cout << "4. Generate List \n";
                        cout << "5. Delete Record by Name \n";
                        cout << "6. Ticket Price \n";
                        cout << "7. Purchase Menu \n";
                        cout << "8. Available Slots \n";
                        cout << "9. Logout \n";
                        cout << " Choose the Option: ";
                        string AdminOption;
                        cin >> AdminOption;

                        if (AdminOption == "1")
                        {
                            // Pasengers Record
                            cout << "Name\tCNIC No.\tTotal Tickets \tPremium Luxury\tBusiness Class\tExecutive\tEconomy \tTicket Price \tOrigin Flight \tDestination Flight \tDuration \n";
                            // Father Name  \tAgeArray  \tAddress
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << CNIC_No_array[i] << "\t" << Total_Tickets_array[i] << "\t" << Premium_Luxury_array[i]
                                         << "\t" << Business_Class_array[i] << "\t" << Executive_array[i] << "\t" << Economy_array[i] << "\t" << Origin_Flight_array[i] << "\t"
                                         << Destination_Flight_array[i] << "\t" << Duration_array[i] << endl;
                                    //  << "\t" << Father_Name_array[i] << "\t" << AgeArray[i] << Address_array[i] << "\t"
                                }
                            }
                        }
                        else if (AdminOption == "2")
                        {
                            // find passengers by name function
                            cout << "Enter the name you want to search: ";
                            string name;
                            cin.ignore();
                            getline(cin, name);
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
                                cout << "Name \tCNIC No. \tTotal Tickets \tPremium Luxury\tBusiness Class\tExecutive \tEconomy\tTicket Price \tOrigin Flight \tDestination Flight \tDuration  \n";
                                cout << nameArray[foundindex] << "\t" << CNIC_No_array[foundindex] << "\t"
                                     << Total_Tickets_array[foundindex] << "\t" << Premium_Luxury_array[foundindex] << "\t" << Business_Class_array[foundindex]
                                     << "\t" << Executive_array[foundindex] << "\t" << Economy_array[foundindex] << "\t" << Origin_Flight_array[foundindex] << "\t"
                                     << Destination_Flight_array[foundindex] << "\t" << Duration_array[foundindex] << endl;
                                // \tAddress  << Father_Name_array[foundindex] << "\t" << AgeArray[foundindex] << "\t"
                                // << Address_array[foundindex] << "\t"
                                // Father Name  \tAgeArray
                                // code can be used as that of option 1 but this one shows the exact match
                            }
                        }
                        else if (AdminOption == "3")
                        {
                            // update passenger record                     i-e firstly requires search passenger
                            cout << "Enter the name you want to update record of ";
                            string name;
                            cin.ignore(); // deletes the line from previous cin
                            getline(cin, name);
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
                                cout << "Name \tCNIC No. \tTotal Tickets \tPremium Luxury \tBusiness Class \tExecutive \tEconomy\t Ticket Price  \tOrigin Flight \tDestination Flight\tDuration  \n";
                                cout << nameArray[foundindex] << "\t" << CNIC_No_array[foundindex] << "\t" << Total_Tickets_array[foundindex]
                                     << "\t" << Premium_Luxury_array[foundindex] << "\t" << Business_Class_array[foundindex] << "\t" << Executive_array[foundindex]
                                     << "\t" << Economy_array[foundindex] << "\t" << Origin_Flight_array[foundindex] << "\t"
                                     << Destination_Flight_array[foundindex] << "\t" << Duration_array[foundindex] << endl;
                                //  Father Name   \tAgeArray   \tAddress
                                // << Father_Name_array[foundindex] << "\t" << AgeArray[foundindex] << "\t"
                                // << Address_array[foundindex] << "\t"

                                cout << "Enter new record for update: " << endl; // if directly it is shown it would change the already provided data
                                cout << "Enter your name: ";
                                string name;
                                cin.ignore();
                                getline(cin, name);
                                // string Father_Name;
                                // getline(cin, Father_Name);
                                // int Age;
                                // cin >> Age;
                                int CNIC_No;
                                cout << "CNIC No. : ";
                                cin >> CNIC_No;
                                // string Address;
                                // cin >> Address;
                                int Total_Tickets;
                                cout << "Total Tickets: ";
                                cin >> Total_Tickets;
                                int Premium_Luxury;
                                cout << "Premium Luxury: ";
                                cin >> Premium_Luxury;
                                int Business_Class;
                                cout << "Business Class: ";
                                cin >> Business_Class;
                                int Executive;
                                cout << "Executive: ";
                                cin >> Executive;
                                int Economy;
                                cout << "Economy: ";
                                cin >> Economy;
                                int Ticket_Price;
                                cout << "Ticket_Price: ";
                                cin >> Ticket_Price;
                                string Origin_Flight;
                                cout << "Origin Flight: ";
                                cin.ignore();
                                getline(cin, Origin_Flight);
                                string Destination_Flight;
                                cout << "Destination Flight: ";
                                cin.ignore();
                                getline(cin, Destination_Flight);
                                string Duration;
                                cout << "Duration: ";
                                cin.ignore();
                                getline(cin, Duration);
                                string contactInfo;
                                cout << "contactInfo: ";
                                cin.ignore();
                                getline(cin, contactInfo);

                                nameArray[foundindex] = name; // now we have to make changes in the found index
                                // Address_array[foundindex] = Address;
                                contactInfo_array[foundindex] = contactInfo;
                                // Father_Name_array[foundindex] = Father_Name;
                                CNIC_No_array[foundindex] = CNIC_No;
                                Origin_Flight_array[foundindex] = Origin_Flight;
                                Destination_Flight_array[foundindex] = Destination_Flight;
                                // AgeArray[Total_Passengers] = Age;
                                Total_Tickets_array[foundindex] = Total_Tickets;
                                Premium_Luxury_array[foundindex] = Premium_Luxury;
                                Business_Class_array[foundindex] = Business_Class;
                                Executive_array[foundindex] = Executive;
                                Economy_array[foundindex] = Economy;
                                Duration_array[foundindex] = Duration;
                                contactInfo_array[foundindex] = contactInfo;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (AdminOption == "4")
                        {
                            // generate list

                            // code to display sorted data     On basis of the name
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

                                        float tempTicket_array = Total_Tickets_array[i];
                                        Total_Tickets_array[i] = Total_Tickets_array[j];
                                        Total_Tickets_array[j] = tempTicket_array;

                                        // Swapping of origin
                                        string tempFlight_Origin = Origin_Flight_array[i];
                                        Origin_Flight_array[i] = Origin_Flight_array[j];
                                        Origin_Flight_array[j] = tempFlight_Origin;

                                        // Swapping of destination
                                        string temp_Destination = Destination_Flight_array[i];
                                        Destination_Flight_array[i] = Destination_Flight_array[j];
                                        Destination_Flight_array[j] = temp_Destination;

                                        // Swapping of Duration
                                        string temp_Duration = Duration_array[i];
                                        Duration_array[i] = Duration_array[j];
                                        Duration_array[j] = temp_Duration;
                                    }
                                }
                            }
                            //  code to display all data  (unsorted form)
                            cout << "Name\tTotal Tickets \tFlight Origin \tDestination \t Duration" << endl;
                            for (int i = 0; i < index; i++) // index takes care of data being stored
                            {
                                if (nameArray[i] != "") // this condition helps in display of code only with some value while helps in deletion
                                {
                                    cout << nameArray[i] << "\t" << Total_Tickets_array[i] << " \t " << Origin_Flight_array[i] << "\t  " << Destination_Flight_array[i] << " \t  " << Duration_array[i] << endl;
                                }
                            }
                        }
                        else if (AdminOption == "5")
                        { // we use updated record with little changes
                            // delete Passenger record
                            cout << "Enter the name you want to Delete record of ";
                            string name;
                            cin.ignore(); // discard the new line from previous cin
                            getline(cin, name);
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
                                nameArray[foundindex] = ""; // now we have to make changes in the found index
                                // Address_array[foundindex] = "";
                                contactInfo_array[foundindex] = "";
                                // Father_Name_array[foundindex] = "";
                                CNIC_No_array[foundindex] = "";
                                Origin_Flight_array[foundindex] = "";
                                Destination_Flight_array[foundindex] = "";
                                // AgeArray[foundindex] = 0;
                                Total_Tickets_array[foundindex] = 0;
                                Premium_Luxury_array[foundindex] = 0;
                                Business_Class_array[foundindex] = 0;
                                Executive_array[foundindex] = 0;
                                Economy_array[foundindex] = 0;
                                Duration_array[foundindex] = "";
                                contactInfo_array[foundindex] = "";
                                cout << "Record of " << name << " Deleted " << endl;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }

                        else if (AdminOption == "6")
                        {
                            system("cls");
                            cout << "Ticket Price: " << endl
                                 << "Premium Ticket: " << Premium_Price << endl
                                 << "Business Ticket: " << Business_Price << endl
                                 << "Executive Ticket: " << Executive_Price << endl
                                 << "Economy Price: " << Economy_Price << endl;
                        }

                        else if (AdminOption == "7")
                        {
                            // find purchase menu
                            // 1. Total Tickets
                            // 2. Premium Tickets
                            // 3. Buissness Tickets
                            // 4. Executive Tickets
                            // 5. Economy Tickets

                            while (true)
                            {
                                system("cls");
                                cout << "Purchase Menu" << endl
                                     << "1. Total Tickets" << endl
                                     << "2.  Premium Tickets" << endl
                                     << "3. Business Tickets\n"
                                     << "4. Executive Tickets\n"
                                     << "5. Economy Tickets\n"
                                     << "6. Exit \n";
                                cout << "Choose your option: ";
                                int purchase_option;
                                cin >> purchase_option;
                                if (purchase_option == 1)
                                {
                                    system("cls");
                                    int tickets_sold = 0;
                                    for (int i = 0; i < 40; i++)
                                    {
                                        tickets_sold = tickets_sold + Total_Tickets_array[i];
                                    }
                                    cout << "Total tickets: " << tickets_sold << endl;
                                    getch();
                                }
                                if (purchase_option == 2)
                                {
                                    system("cls");
                                    int tickets_sold = 0;
                                    for (int i = 0; i < 40; i++)
                                    {
                                        tickets_sold = tickets_sold + Premium_Luxury_array[i];
                                    }
                                    cout << "Total tickets: " << tickets_sold << endl;
                                    getch();
                                }
                                if (purchase_option == 3)
                                {
                                    system("cls");
                                    int tickets_sold = 0;
                                    for (int i = 0; i < 40; i++)
                                    {
                                        tickets_sold = tickets_sold + Business_Class_array[i];
                                    }
                                    cout << "Total tickets: " << tickets_sold << endl;
                                    getch();
                                }
                                if (purchase_option == 4)
                                {
                                    system("cls");
                                    int tickets_sold = 0;
                                    for (int i = 0; i < 40; i++)
                                    {
                                        tickets_sold = tickets_sold + Executive_array[i];
                                    }
                                    cout << "Total tickets: " << tickets_sold << endl;
                                    getch();
                                }
                                if (purchase_option == 5)
                                {
                                    system("cls");
                                    int tickets_sold = 0;
                                    for (int i = 0; i < 40; i++)
                                    {
                                        tickets_sold = tickets_sold + Economy_array[i];
                                    }
                                    cout << "Total tickets: " << tickets_sold << endl;
                                    getch();
                                }
                                if (purchase_option == 6)
                                {
                                    cout << "Exiting the Menu \n";
                                    break;
                                }
                            }
                        }
                        else if (AdminOption == "8")
                        {
                            // find available slots
                            // 1. Total Tickets
                            // 2. Premium Tickets
                            // 3. Business Tickets
                            // 4. Executive Tickets
                            // 5. Economy Tickets

                            while (true)
                            {
                                system("cls");
                                cout << "Available Slots" << endl
                                     << "1. Total Tickets" << endl
                                     << "2. Premium Tickets" << endl
                                     << "3. Business Tickets\n"
                                     << "4. Executive Tickets\n"
                                     << "5. Economy Tickets\n"
                                     << "6. Exit \n";
                                cout << "Choose your option: ";
                                int purchase_option;
                                cin >> purchase_option;
                                if (purchase_option == 1)
                                {
                                    system("cls");
                                    int tickets_sold = 0;
                                    int tickets_available = 0;
                                    for (int i = 0; i < 40; i++)
                                    {
                                        tickets_sold = tickets_sold + Total_Tickets_array[i];
                                    }
                                    tickets_available = TotalFlight_Tickets - tickets_sold;
                                    cout << "Total tickets available: " << tickets_available << endl;
                                    getch();
                                }
                                if (purchase_option == 2)
                                {
                                    system("cls");
                                    int tickets_sold = 0;
                                    int tickets_available = 0;
                                    for (int i = 0; i < 40; i++)
                                    {
                                        tickets_sold = tickets_sold + Premium_Luxury_array[i];
                                    }
                                    tickets_available = 10 - tickets_sold;
                                    cout << "Total tickets available: " << tickets_available << endl;
                                    getch();
                                }
                                if (purchase_option == 3)
                                {
                                    system("cls");
                                    int tickets_sold = 0;
                                    int tickets_available = 0;
                                    for (int i = 0; i < 40; i++)
                                    {
                                        tickets_sold = tickets_sold + Business_Class_array[i];
                                    }
                                    tickets_available = 10 - tickets_sold;
                                    cout << "Total tickets available: " << tickets_available << endl;
                                    getch();
                                }
                                if (purchase_option == 4)
                                {
                                    system("cls");
                                    int tickets_sold = 0;
                                    int tickets_available = 0;
                                    for (int i = 0; i < 40; i++)
                                    {
                                        tickets_sold = tickets_sold + Executive_array[i];
                                    }
                                    tickets_available = 10 - tickets_sold;
                                    cout << "Total tickets available: " << tickets_available << endl;
                                    getch();
                                }
                                if (purchase_option == 5)
                                {
                                    system("cls");
                                    int tickets_sold = 0;
                                    int tickets_available = 0;
                                    for (int i = 0; i < 40; i++)
                                    {
                                        tickets_sold = tickets_sold + Economy_array[i];
                                    }
                                    tickets_available = 10 - tickets_sold;
                                    cout << "Total tickets available: " << tickets_available << endl;
                                    getch();
                                }
                                if (purchase_option == 6)
                                {
                                    cout << "Exiting the Menu \n";
                                    break;
                                }
                            }
                        }

                        else if (AdminOption == "9")
                        {
                            // logout
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected. " << endl;
                        }

                        cout << "Press any key to continue.. ";
                        getch(); // shows the above code
                    }

                    cout << "Press any key to continue.. ";
                    getch(); // to stop and print the code on console
                    break;   // to end it
                }
                else
                {
                    cout << "Username or password is invalid. " << endl;
                }
                cout << "Press any key to continue.. ";

                getch(); // console stops to above option or stop screen
            }
        }
        else if (userOption == "2")
        {
            // Passenger code;
            cout << "Welcome to S & A Airlines Menu \n";
            string name;
            cout << "Name: ";
            cin.ignore(); // discard the new line from previous cin
            getline(cin, name);
            // string Father_Name;
            // cout << "Father's Name: ";
            // getline(cin, Father_Name);
            // int Age;
            // cout << "Age: ";
            // cin >> Age;
            string CNIC_No;
            cout << "CNIC No: ";
            cin >> CNIC_No;
            // string address;
            // cout << "Address: ";
            // cin >> address;
            float Total_Tickets;
            cout << "Total Tickets: ";
            cin >> Total_Tickets;
            if (Total_Tickets > 40)
            {
                cout << "Seats not available \n";
                break;
            }
            else
            {
                cout << "Your seat has been booked. \n";
            }
            float Premium_Luxury;
            cout << "Premium_Luxury Tickets: ";
            cin >> Premium_Luxury;
            if (Premium_Luxury > 10)
            {
                cout << "Seats not available \n";
                break;
            }
            else
            {
                cout << "Your seat has been booked.\n";
            }

            float Business_Class;
            cout << "Business_Class Tickets: ";
            cin >> Business_Class;
            if (Business_Class > 10)
            {
                cout << "Seats not available\n";
                break;
            }
            else
            {
                cout << "Your seat has been booked.\n";
            }
            float Executive;
            cout << "Executive Tickets: ";
            cin >> Executive;
            if (Executive > 10)
            {
                cout << "Seats not available" << endl;
                break;
            }
            else
            {
                cout << "Your seat has been booked.\n";
            }

            float Economy;
            cout << "Economy Tickets: ";
            cin >> Economy;
            if (Economy > 10)
            {
                cout << "Seats not available";
                break;
            }
            else
            {
                cout << "Your seat has been booked.";
            }
            string Origin_Flight;
            cout << "Origin_Flight: ";
            cin.ignore();
            getline(cin, Origin_Flight);

            string Destination_Flight;
            cout << "Destination_Flight: ";
            cin.ignore();
            getline(cin, Destination_Flight);

            string contactInfo;
            cout << "contactInfo: ";
            cin.ignore();
            getline(cin, contactInfo);

            nameArray[index] = name; // now we have to make changes in the found index
            // Address_array[index] = address;
            contactInfo_array[index] = contactInfo;
            // Father_Name_array[index] = Father_Name;
            CNIC_No_array[index] = CNIC_No;
            Origin_Flight_array[index] = Origin_Flight;
            Destination_Flight_array[index] = Destination_Flight;
            // AgeArray[index] = Age;
            Total_Tickets_array[index] = Total_Tickets;
            Premium_Luxury_array[index] = Premium_Luxury;
            Business_Class_array[index] = Business_Class;
            Executive_array[index] = Executive;
            Economy_array[index] = Economy;
            contactInfo_array[index] = contactInfo;
            index++;
            cout << "Your data has been saved. ";

            cout << "Press any key to continue.. ";
            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        { // covering all other possibilities
            cout << "You entered wrong option. " << endl;
        }
    }

    cout << "Thanks for using the software. ";
}


