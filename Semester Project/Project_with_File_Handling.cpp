#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include<string>
using namespace std;

// Data Structures Start

const int Total_Passengers = 1000;
int passengerCount = 7;
const int PremiumLuxury = 10;
const int BusinessClass = 10;
const int Executive = 10;
const int Economy = 10;
const int TotalFlight_Tickets = 40;
const int Premium_Price = 200000;
const int Business_Price = 150000;
const int Executive_Price = 120000;
const int Economy_Price = 100000;

string nameArray[Total_Passengers] = {"Ali", "Uzair", "Sara", "Usman", "Zimal", "Bilal", "Hamdan"};
string contactInfo_array[Total_Passengers] = {"03247512487", "03225512489", "03247958487", "0324796847", "030414724866", "030426824869", "03098547433"};
string CNIC_No_array[Total_Passengers] = {"36402-07451", "36402-026847", "36402-214875", "36402-694781", "36402-485451", "36402-627451", "36402-847551"};
string Origin_Flight_array[Total_Passengers] = {"Multan", "Quetta", "Sialkot", "Peshawar", "Karachi", "Lahore", "Islamabad"};
string Destination_Flight_array[Total_Passengers] = {"Karachi", "Dubai", "Abu Dhabi", "London", "Toronto", "Kuala lampur", "New York"};
int Total_Tickets_array[Total_Passengers] = {1, 1, 3, 2, 1, 5, 4};
int Premium_Luxury_array[Total_Passengers] = {1, 0, 0, 1, 0, 2, 0};
int Business_Class_array[Total_Passengers] = {0, 1, 1, 0, 1, 2, 1};
int Executive_array[Total_Passengers] = {0, 0, 1, 0, 0, 1, 1};
int Economy_array[Total_Passengers] = {0, 0, 1, 0, 1, 0, 2};
string Duration_array[Total_Passengers] = {"3 hrs", "2.5 hrs", "1 hrs", "6 hrs", "13 hrs", "10 hrs", "18 hrs"};

// Data Structures End

// FUNCTION DECLARATION
void mainHeader();
void mainMenu();
string adminMenuHeader();
void adminMenu();
void passengerMenu();
void searchPassengers(string name);
void showAllPassengers();
void updateRecord(string name);
void generateList();
void deleteRecord(string name);
void ticketPrice();
void purchaseMenu();
void premiumAvailable();
void businessAvailable();
void executiveAvailable();
void economyAvailable();
void availableSlots(int available);
void clearScreen();
bool adminLogin(string username, string password);
void updateUserToFile(int foundpassengerCount,string username, string password);
// Function Prototype End

// Main start
int main()
{
    string userOption;
    string username;
    string password;
    while (true) //(getline(myfile,userOption, username, password ))
    {
        clearScreen();
        mainHeader();
        mainMenu();
        cin >> userOption;
        if (userOption == "1" && adminLogin(username, password))
        {
            adminMenu();
        }
        else if (userOption == "2")
        {
            passengerMenu();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "Invalid option \n";
            getch();
        }
    }
    cout << "Thanks for using the software. ";
    return 0;
}

// end of main function

// Function Start

void mainHeader()
{
    cout << "--------------------------------------------------------------- \n";
    cout << "----------------        S & A AIRLINES       ------------------ \n";
    cout << "--------------------------------------------------------------- \n";
}
void mainMenu()
{
    cout << "Main Menu \n";
    cout << "1. Admin \n";
    cout << "2. Passengers \n";
    cout << "3. Exit \n";
    cout << "Chooose Option: ";
}

bool adminLogin(string username, string password)
{

    for (int i = 0; i < 3; i++)
    {
        cout << "Admin Menu: Login Attempt " << i + 1 << endl;
        cout << "Enter username: ";
        cin.ignore();
        getline(cin, username);
        cout << "Enter password: ";
        getline(cin, password);
        if (username == "admin" && password == "1234")
        {
            fstream myfile;
            myfile.open("Project.txt", ios::app);
            myfile << username + "," + password + "\n" ;
            myfile.close();
            clearScreen();
            cout << "Succesfully Logged in \n";
            getch();
            return true;
        }
        cout << "Invalid Password \n";
        getch();
    }

    return false;
}
//      ADMIN MENU
string adminMenuHeader()
{
    clearScreen();
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
    string adminOption;
    cin >> adminOption;
    return adminOption;
}

void adminMenu()
{

    while (true)
    {
        fstream myfile;
        myfile.open("Project.txt", ios::app);
        string adminOption = adminMenuHeader();
        myfile << adminOption;
        myfile.close();
        if (adminOption == "1")
        {
            showAllPassengers();
        }
        else if (adminOption == "2")
        {
            cout << "Enter the name you want to search: ";
            string name;
            cin.ignore();
            getline(cin, name);
            searchPassengers(name);
        }
        else if (adminOption == "3")
        {
            string name;
            cout << "Enter the name you want to update record of ";
            cin.ignore(); // deletes the line from previous cin
            getline(cin, name);
            updateRecord(name);
        }
        else if (adminOption == "4")
        {
            generateList();
        }
        else if (adminOption == "5")
        {

            cout << "Enter the name you want to Delete record of ";
            string name;
            cin.ignore(); // discard the new line from previous cin
            getline(cin, name);
            deleteRecord(name);
        }
        else if (adminOption == "6")
        {
            ticketPrice();
        }
        else if (adminOption == "7")
        {
            purchaseMenu();
        }
        else if (adminOption == "8")
        {
            availableSlots(0); // for int we have to pass a value
        }
        else if (adminOption == "9")
        {
            break;
        }
        else
        {
            cout << "Wrong option! \n";
        }
        cout << "Press any key to continue ";
        getch();
    }
}


// Passenger Menu
void passengerMenu()
{
    clearScreen();
    cout << "Welcome to S & A Airlines Menu \n";
    string name;
    cout << "Name: ";
    cin.ignore(); // discard the new line from previous cin
    getline(cin, name);
    string CNIC_No;
    cout << "CNIC No: ";
    cin >> CNIC_No;
    int Premium_Luxury;
    cout << "Premium_Luxury Tickets: ";
    cin >> Premium_Luxury;
    int Business_Class;
    cout << "Business_Class Tickets: ";
    cin >> Business_Class;
    int Executive;
    cout << "Executive Tickets: ";
    cin >> Executive;
    int Economy;
    cout << "Economy Tickets: ";
    cin >> Economy;
    if (Premium_Luxury > 10 || Business_Class > 10 || Executive > 10 || Economy > 10)
    {
        cout << "Seats not available \n";
    }
    else
    {
        cout << "Your seat has been booked.\n";
    }
    int Total_Tickets;
    Total_Tickets = Premium_Luxury + Business_Class + Executive + Economy;
    cout << "Total Tickets: " << Total_Tickets << endl;
    if (Total_Tickets > 40)
    {
        cout << "Seats not available \n";
    }
    else
    {
        cout << "Your seat has been booked. \n";
    }
    int total_Price;
    total_Price = (Premium_Luxury * Premium_Price + Business_Class * Business_Price + Executive * Executive_Price + Economy * Economy_Price);
    cout << "Total Ticket Price: " << total_Price << endl;
    string Origin_Flight;
    cin.ignore();
    cout << "Origin_Flight: ";
    getline(cin, Origin_Flight);

    string Destination_Flight;
    cout << "Destination_Flight: ";
    getline(cin, Destination_Flight);

    string contactInfo;
    cout << "contactInfo: ";
    getline(cin, contactInfo);

    nameArray[passengerCount] = name; // now we have to make changes in the found passengerCount
    contactInfo_array[passengerCount] = contactInfo;
    CNIC_No_array[passengerCount] = CNIC_No;
    Origin_Flight_array[passengerCount] = Origin_Flight;
    Destination_Flight_array[passengerCount] = Destination_Flight;
    Total_Tickets_array[passengerCount] = Total_Tickets;
    Premium_Luxury_array[passengerCount] = Premium_Luxury;
    Business_Class_array[passengerCount] = Business_Class;
    Executive_array[passengerCount] = Executive;
    Economy_array[passengerCount] = Economy;
    contactInfo_array[passengerCount] = contactInfo;

    cout << "Booking confirmed and your data has been saved. ";
    passengerCount++;
    string inputData = name + "," + CNIC_No + "," + to_string(Premium_Luxury) + "," + to_string(Business_Class) + "," + to_string(Executive) + "," + to_string(Economy) + "," + to_string(Total_Tickets) + "," + to_string(Total_Tickets) + "," + to_string(total_Price) + "," + Origin_Flight + "," + Destination_Flight + "," + contactInfo + "\n";
    fstream myfile;
    myfile.open("Project.txt", ios::app);
    myfile >> inputData;
    myfile.close();
    
    getch();
}

// Show All Passengers Record
void showAllPassengers()
{
    string record;
    fstream myfile;
    myfile.open("Project.txt", ios::out);
    while (!myfile.eof())
    {
        getline(myfile,record);
        // cout << record;
        myfile.close();
        cout << "Name\tCNIC No.\tTotal Tickets \tPremium Luxury\tBusiness Class\tExecutive\tEconomy \tTicket Price \tOrigin Flight \tDestination Flight \tDuration \n";
    for (int i = 0; i < passengerCount; i++)
    {
        if (nameArray[i] != "")
        {
            cout << nameArray[i] << "\t" << CNIC_No_array[i] << "\t" << Total_Tickets_array[i] << "\t" << Premium_Luxury_array[i]
                 << "\t" << Business_Class_array[i] << "\t" << Executive_array[i] << "\t" << Economy_array[i] << "\t" << Origin_Flight_array[i] << "\t"
                 << Destination_Flight_array[i] << "\t" << Duration_array[i] << endl;
        }
    }
    }  
    getch();
}

// Search Passenger
void searchPassengers(string name)
{
    clearScreen();
    fstream myfile;
    myfile.open("Project.txt", ios::in);
    getline(myfile, name);
    myfile.close();
    bool isFound = false;
    int foundpassengerCount = -1; // suppose value as by second pattern
    for (int i = 0; i < passengerCount; i++)
    {
        if (nameArray[i] == name)
        {
            foundpassengerCount = i;
            isFound = true;
            break;
        }
    }

    if (isFound == false) // checking the condition outside the loop
    {
        cout << "Record not found against name " << name << endl;
    }
    else
    {
        cout << "\n Record found \n";
        cout << "Name \tCNIC No. \tTotal Tickets \tPremium Luxury\tBusiness Class\tExecutive \tEconomy\tTicket Price \tOrigin Flight \tDestination Flight \tDuration  \n";
        cout << nameArray[foundpassengerCount] << "\t" << CNIC_No_array[foundpassengerCount] << "\t"
             << Total_Tickets_array[foundpassengerCount] << "\t" << Premium_Luxury_array[foundpassengerCount] << "\t" << Business_Class_array[foundpassengerCount]
             << "\t" << Executive_array[foundpassengerCount] << "\t" << Economy_array[foundpassengerCount] << "\t" << Origin_Flight_array[foundpassengerCount] << "\t"
             << Destination_Flight_array[foundpassengerCount] << "\t" << Duration_array[foundpassengerCount] << endl;
        // code can be used as that of option 1 but this one shows the exact match
        getch();
    }
    myfile.close();
}

// Update Passenger Record
void updateRecord(string name)
{
    bool found = false;
    int foundpassengerCount = -1;
    for (int i = 0; i < passengerCount; i++) // passengerCount contains all data being stored
    {
        if (nameArray[i] == name)
        {
            foundpassengerCount = i; // i value given to this memory
            found = true;
        }
    }
    if (found == true)
    {

        cout << "-------- Old Record --------" << endl; // old record is shown
        cout << "Name \tCNIC No. \tTotal Tickets \tPremium Luxury \tBusiness Class \tExecutive \tEconomy\t Ticket Price  \tOrigin Flight \tDestination Flight\tDuration  \n";
        cout << nameArray[foundpassengerCount] << "\t" << CNIC_No_array[foundpassengerCount] << "\t" << Total_Tickets_array[foundpassengerCount]
             << "\t" << Premium_Luxury_array[foundpassengerCount] << "\t" << Business_Class_array[foundpassengerCount] << "\t" << Executive_array[foundpassengerCount]
             << "\t" << Economy_array[foundpassengerCount] << "\t" << Origin_Flight_array[foundpassengerCount] << "\t"
             << Destination_Flight_array[foundpassengerCount] << "\t" << Duration_array[foundpassengerCount] << endl;

        cout << "--------- Updated Record -------- \n";
        cout << "Enter new record for update: " << endl; // if directly it is shown it would change the already provided data
        cout << "Enter your name: ";
        string name;
        cin.ignore();
        getline(cin, name);
        string CNIC_No;
        cout << "CNIC No. : ";
        cin >> CNIC_No;
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
        int Total_Tickets;
        Total_Tickets = Premium_Luxury + Business_Class + Executive + Economy;
        cout << "Total Tickets: " << Total_Tickets << endl;
        int total_Price;
        total_Price = (Premium_Luxury * Premium_Price + Business_Class * Business_Price + Executive * Executive_Price + Economy * Economy_Price);
        cout << "Total Ticket Price: " << total_Price << endl;
        string Origin_Flight;
        cin.ignore();
        cout << "Origin Flight: ";
        getline(cin, Origin_Flight);
        string Destination_Flight;
        cout << "Destination Flight: ";
        getline(cin, Destination_Flight);
        string Duration;
        cout << "Duration: ";
        getline(cin, Duration);
        string contactInfo;
        cout << "contactInfo: ";
        cin.ignore();
        getline(cin, contactInfo);

        nameArray[foundpassengerCount] = name; // now we have to make changes in the found passengerCount
        CNIC_No_array[foundpassengerCount] = CNIC_No;
        Origin_Flight_array[foundpassengerCount] = Origin_Flight;
        Destination_Flight_array[foundpassengerCount] = Destination_Flight;
        Total_Tickets_array[foundpassengerCount] = Total_Tickets;
        Premium_Luxury_array[foundpassengerCount] = Premium_Luxury;
        Business_Class_array[foundpassengerCount] = Business_Class;
        Executive_array[foundpassengerCount] = Executive;
        Economy_array[foundpassengerCount] = Economy;
        Duration_array[foundpassengerCount] = Duration;
        contactInfo_array[foundpassengerCount] = contactInfo;
        cout << "Record updated. \n";
        updateUserToFile();
    }
    else
    {
        cout << "Record not found " << endl;
    }
}

void updateUserToFile(int foundpassengerCount,string username, string password)
{
    fstream myFile;
    myFile.open("Project.txt", ios::out);
    username[foundpassengerCount] = stoi(username);
    password[foundpassengerCount] = stoi (password);
    string record[Total_Passengers];
    for (int i = 0; i < passengerCount; i++)
    {
        string userRecord[i] = username[i] + "," + password [i];
        myFile << userRecord[i];
    }
    myFile.close();
}

// Generate List
void generateList()
{
    fstream myfile;
    myfile.open("Project.txt", ios::out);
    for (int i = 0; i < passengerCount; i++)
    { // outer loop remains same
        for (int j = i + 1; j < passengerCount; j++)
        { // inner loop first runs complete
            if (nameArray[i] > nameArray[j])
            { // when i=0 it does comparison with all values

                // i > j shows alphabetical normal order where i < j shows data from Z to A
                // whenever it [j] gets greater value than that of the passengerCount 0 , we swap it
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
    cout << "Sorted list is as follows: \n";
    showAllPassengers();
    myfile.close();
}

// Delete Record
void deleteRecord(string name)
{
    fstream myfile;
    myfile.open("Project.txt", ios::app);
    bool found = false;
    int foundpassengerCount = -1;
    for (int i = 0; i < passengerCount; i++) // passengerCount contains all data being stored
    {
        if (nameArray[i] == name)
        {
            foundpassengerCount = i; // i value given to this memory
            found = true;
        }
    }
    if (found == true)
    {
        nameArray[foundpassengerCount] = ""; // now we have to make changes in the found passengerCount
        contactInfo_array[foundpassengerCount] = "";
        CNIC_No_array[foundpassengerCount] = "";
        Origin_Flight_array[foundpassengerCount] = "";
        Destination_Flight_array[foundpassengerCount] = "";
        Total_Tickets_array[foundpassengerCount] = 0;
        Premium_Luxury_array[foundpassengerCount] = 0;
        Business_Class_array[foundpassengerCount] = 0;
        Executive_array[foundpassengerCount] = 0;
        Economy_array[foundpassengerCount] = 0;
        Duration_array[foundpassengerCount] = "";
        contactInfo_array[foundpassengerCount] = "";
        cout << "Record of " << name << " has been deleted " << endl;
    }
    else
    {
        cout << "Record not found " << endl;
    }
    myfile.close();
}
void ticketPrice()
{
    clearScreen();
    cout << "Ticket Price: " << endl
         << "Premium Ticket: " << Premium_Price << endl
         << "Business Ticket: " << Business_Price << endl
         << "Executive Ticket: " << Executive_Price << endl
         << "Economy Price: " << Economy_Price << endl;
}

void purchaseMenu()
{
    int total = 0;
    for (int i = 0; i < passengerCount; i++)
    {
        total = total + Total_Tickets_array[i];
    }
    cout << "Total tickets sold: " << total << endl;
}

void premiumAvailable()
{
    int tickets_sold = 0;
    int tickets_available = 0;
    for (int i = 0; i < TotalFlight_Tickets; i++)
    {
        tickets_sold = tickets_sold + Premium_Luxury_array[i];
    }
    tickets_available = PremiumLuxury - tickets_sold;
    cout << "Total Premium seats available: " << tickets_available << endl;
}
void businessAvailable()
{
    int tickets_sold = 0;
    int tickets_available = 0;
    for (int i = 0; i < TotalFlight_Tickets; i++)
    {
        tickets_sold = tickets_sold + Business_Class_array[i];
    }
    tickets_available = BusinessClass - tickets_sold;
    cout << "Total Business seats available: " << tickets_available << endl;
}
void executiveAvailable()
{
    int tickets_sold = 0;
    int tickets_available = 0;
    for (int i = 0; i < TotalFlight_Tickets; i++)
    {
        tickets_sold = tickets_sold + Executive_array[i];
    }
    tickets_available = Executive - tickets_sold;
    cout << "Total Executive seats available: " << tickets_available << endl;
}
void economyAvailable()
{
    int tickets_sold = 0;
    int tickets_available = 0;
    for (int i = 0; i < TotalFlight_Tickets; i++)
    {
        tickets_sold = tickets_sold + Economy_array[i];
    }
    tickets_available = Economy - tickets_sold;
    cout << "Total Economy seats available: " << tickets_available << endl;
}

void availableSlots(int available)
{
    clearScreen();
    int total_Sold = 0;
    for (int i = 0; i < passengerCount; i++)
    {
        total_Sold = total_Sold + Total_Tickets_array[i];
    }
    available = TotalFlight_Tickets - total_Sold;
    cout << "Total Available Tickets:" << available << endl;
    premiumAvailable();
    businessAvailable();
    executiveAvailable();
    economyAvailable();
    cout << "Total Tickets Sold: " << total_Sold << endl;
}
void clearScreen()
{
    fstream myfile;
    myfile.open("Project.txt", ios::out);
    system("cls");
    myfile.close();
}

// Function End
