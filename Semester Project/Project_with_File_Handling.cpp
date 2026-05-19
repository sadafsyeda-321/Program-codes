#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;

// Data Structures Start

const int Total_Passengers = 1000;
int passengerCount = 30;
const int PremiumLuxury = 100;
const int BusinessClass = 100;
const int Executive = 100;
const int Economy = 100;
const int TotalFlight_Tickets = 400;
const int Premium_Price = 200000;
const int Business_Price = 150000;
const int Executive_Price = 120000;
const int Economy_Price = 100000;

string nameArray[Total_Passengers];
string contactInfo_array[Total_Passengers];
string CNIC_No_array[Total_Passengers];
string Origin_Flight_array[Total_Passengers];
string Destination_Flight_array[Total_Passengers];
int Total_Tickets_array[Total_Passengers];
int Premium_Luxury_array[Total_Passengers];
int Business_Class_array[Total_Passengers];
int Executive_array[Total_Passengers];
int Economy_array[Total_Passengers];
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
string getField(int record, int field);
void addToFile(int found_index, string name, string CNIC, int Total_Tickets, int Premium_Luxury, int Business_Class, int Executive, int Economy,string Origin_Flight, string Destination_Flight, string contact_info);
// Function Prototype End

// Main start
int main()
{
    string userOption;
    string username;
    string password;
    while (true)
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
            myfile.open("ProjectLogin.txt", ios::app);
            myfile << username + "," + password + "\n";
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
        string adminOption = adminMenuHeader();
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
    if (Premium_Luxury > 100 || Business_Class > 100 || Executive > 100 || Economy > 100)
    {
        cout << "Seats not available \n";
        getch();
        return;
    }
    else
    {
        cout << "Seat Confirmed! \n";
    }
    int Total_Tickets;
    Total_Tickets = Premium_Luxury + Business_Class + Executive + Economy;
    cout << "Total Tickets: " << Total_Tickets << endl;
    if (Total_Tickets > 400)
    {
        cout << "Seats not available \n";
    }
    else
    {
        cout << "Your seat has been booked. \n";
    }
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

    string passengerRecord = name + "," + CNIC_No + "," + to_string(Total_Tickets) + "," +  to_string(Premium_Luxury) + "," + to_string(Business_Class) + "," + to_string(Executive) + "," + to_string(Economy) + "," + Origin_Flight + "," + Destination_Flight + "," + contactInfo + "\n";
    fstream myfile;
    myfile.open("PassengerMenuRecord.txt", ios::app);
    myfile << passengerRecord; // separate file names
    myfile.close();
    cout << "Booking confirmed and your data has been saved. ";
    passengerCount++;
    getch();
}
// getField
string getField(string record, int field)
{
    int commaCount = 1;
    string word;
    for (int i = 0; i < record.length(); i++)
    {
        if (record[i] == ',')
        {
            commaCount++;
        }
        else if (commaCount == field)
        {
            word = word + record[i];
        }
    }
    return word;
}
// Show All Passengers Record
void showAllPassengers()
{
    string passenger;
    fstream myfile;
    int index = 0;
    myfile.open("PassengerMenuRecord.txt", ios::in);
    while (getline(myfile, passenger))
    {
        if (passenger.empty())
        {
            continue;
        }
        nameArray[index] = getField(passenger, 1);
        CNIC_No_array[index] = getField(passenger, 2);
        Total_Tickets_array[index] = stoi(getField(passenger, 3));
        Premium_Luxury_array[index] = stoi(getField(passenger, 4));
        Business_Class_array[index] = stoi(getField(passenger, 5));
        Executive_array[index] = stoi(getField(passenger, 6));
        Economy_array[index] = stoi(getField(passenger, 7));
        Origin_Flight_array[index] = getField(passenger, 8);
        Destination_Flight_array[index] = getField(passenger, 9);
        contactInfo_array[index] = getField(passenger, 10);
        index++;
    }
    cout << "Name\tCNIC No.\tTotal Tickets \tPremium Luxury\tBusiness Class\tExecutive\tEconomy \tOrigin Flight \tDestination Flight \tContact Info \n";
    for (int i = 0; i < passengerCount; i++)
    {
        if (nameArray[i] != "")
        {
            cout << nameArray[i] << "\t" << CNIC_No_array[i] << "\t" << Total_Tickets_array[i] << "\t" << Premium_Luxury_array[i]
                 << "\t" << Business_Class_array[i] << "\t" << Executive_array[i] << "\t" << Economy_array[i] << "\t" << Origin_Flight_array[i] << "\t"
                 << Destination_Flight_array[i] << "\t" << contactInfo_array[i] << endl;
        }
    }
    getch();
    myfile.close();
}
// Search Passenger
void searchPassengers(string name)
{
    clearScreen();
    string passenger;
    fstream myfile;
    int index = 0;
    myfile.open("PassengerMenuRecord.txt", ios::in);
    while (getline(myfile, passenger))
    {
        if (passenger.empty())
        {
            continue;
        }
        nameArray[index] = getField(passenger, 1);
        CNIC_No_array[index] = getField(passenger, 2);
        string TotalTickets = getField(passenger, 3);
        Total_Tickets_array[index] = stoi(TotalTickets);
        string Premium = getField(passenger, 4);
        Premium_Luxury_array[index] = stoi(Premium);
        string Business = getField(passenger, 5);
        Business_Class_array[index] = stoi(Business);
        string executive = getField(passenger, 6);
        Executive_array[index] = stoi(executive);
        string economy = getField(passenger, 7);
        Economy_array[index] = stoi(economy);
        Origin_Flight_array[index] = getField(passenger, 8);
        Destination_Flight_array[index] = getField(passenger, 9);
        contactInfo_array[index] = getField(passenger, 10);
        index++;
    }
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
        cout << "Name \tCNIC No. \tTotal Tickets \tPremium Luxury\tBusiness Class\tExecutive \tEconomy\tOrigin Flight \tDestination Flight \tContact Info \n";
        cout << nameArray[foundpassengerCount] << "\t" << CNIC_No_array[foundpassengerCount] << "\t"
             << Total_Tickets_array[foundpassengerCount] << "\t" << Premium_Luxury_array[foundpassengerCount] << "\t" << Business_Class_array[foundpassengerCount]
             << "\t" << Executive_array[foundpassengerCount] << "\t" << Economy_array[foundpassengerCount] << "\t" << Origin_Flight_array[foundpassengerCount] << "\t"
             << Destination_Flight_array[foundpassengerCount] << "\t" << contactInfo_array[foundpassengerCount] << endl;
        getch();
    }
    myfile.close();
}
// add Data
void addToFile(int found_index, string name, string CNIC, int Total_Tickets, int Premium_Luxury, int Business_Class, int Executive, int Economy, string Origin_Flight, string Destination_Flight, string contact_info)
{
    fstream addDatatofile;
    addDatatofile.open("PassengerMenuRecord.txt", ios::out);
    nameArray[found_index] = name; 
    CNIC_No_array[found_index] = CNIC;
    Total_Tickets_array[found_index] = (Total_Tickets);
    Premium_Luxury_array[found_index] = Premium_Luxury;
    Business_Class_array[found_index] = Business_Class;
    Executive_array[found_index] = Executive;
    Economy_array[found_index] = Economy;
    Origin_Flight_array[found_index] = Origin_Flight;
    Destination_Flight_array[found_index] = Destination_Flight;
    contactInfo_array[found_index] = contact_info;
    string passenger_record[Total_Passengers];
    for (int i = 0; i < passengerCount; i++)
    {
        passenger_record[i] = nameArray[i] + "," + CNIC_No_array[i] + "," + to_string(Total_Tickets_array[i]) + "," + to_string(Premium_Luxury_array[i]) + "," + to_string(Business_Class_array[i]) + "," + to_string(Executive_array[i]) + "," + to_string(Economy_array[i]) + "," + Origin_Flight_array[i] + "," + Destination_Flight_array[i] + "," + contactInfo_array[i] + "\n";
        addDatatofile << passenger_record[i];
    }
    addDatatofile.close();
}
// Update Passenger Record
void updateRecord(string name)
{
    string passenger;
    fstream myfile;
    int index = 0;
    myfile.open("PassengerMenuRecord.txt", ios::in);
    while (getline(myfile, passenger))
    {
        if (passenger.empty())
        {
            continue;
        }
        nameArray[index] = getField(passenger, 1);
        CNIC_No_array[index] = getField(passenger, 2);
        Total_Tickets_array[index] = stoi(getField(passenger, 3));
        Premium_Luxury_array[index] = stoi(getField(passenger, 4));
        Business_Class_array[index] = stoi(getField(passenger, 5));
        Executive_array[index] = stoi(getField(passenger, 6));
        Economy_array[index] = stoi(getField(passenger, 7));
        Origin_Flight_array[index] = getField(passenger, 8);
        Destination_Flight_array[index] = getField(passenger, 9);
        contactInfo_array[index] = getField(passenger, 10);
        index++;
    }
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
        cout << "Name \tCNIC No. \tTotal Tickets \tPremium Luxury \tBusiness Class \tExecutive \tEconomy \tOrigin Flight \tDestination Flight\t Contact Info  \n";
        cout << nameArray[foundpassengerCount] << "\t" << CNIC_No_array[foundpassengerCount] << "\t" << Total_Tickets_array[foundpassengerCount]
             << "\t" << Premium_Luxury_array[foundpassengerCount] << "\t" << Business_Class_array[foundpassengerCount] << "\t" << Executive_array[foundpassengerCount]
             << "\t" << Economy_array[foundpassengerCount] << "\t" << Origin_Flight_array[foundpassengerCount] << "\t"
             << Destination_Flight_array[foundpassengerCount] << "\t" << contactInfo_array[foundpassengerCount] << endl;

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
        string Origin_Flight;
        cin.ignore();
        cout << "Origin Flight: ";
        getline(cin, Origin_Flight);
        string Destination_Flight;
        cout << "Destination Flight: ";
        getline(cin, Destination_Flight);
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
        contactInfo_array[foundpassengerCount] = contactInfo;
        cout << "Record updated. \n";
        addToFile(foundpassengerCount, name, CNIC_No, Total_Tickets, Premium_Luxury, Business_Class, Executive, Economy, Origin_Flight, Destination_Flight, contactInfo);
    }
    else
    {
        cout << "Record not found " << endl;
    }
    myfile.close();
}
// Generate List
void generateList()
{
    string passenger;
    fstream myfile;
    int index = 0;
    myfile.open("PassengerMenuRecord.txt", ios::in);
    while (getline(myfile, passenger))
    {
        if (passenger.empty())
        {
            continue;
        }
        nameArray[index] = getField(passenger, 1);
        CNIC_No_array[index] = getField(passenger, 2);
        Total_Tickets_array[index] = stoi(getField(passenger, 3));
        Premium_Luxury_array[index] = stoi(getField(passenger, 4));
        Business_Class_array[index] = stoi(getField(passenger, 5));
        Executive_array[index] = stoi(getField(passenger, 6));
        Economy_array[index] = stoi(getField(passenger, 7));
        Origin_Flight_array[index] = getField(passenger, 8);
        Destination_Flight_array[index] = getField(passenger, 9);
        contactInfo_array[index] = getField(passenger, 10);
        index++;
    }
    int recordCount = index;
    for (int i = 0; i < recordCount; i++)
    { // outer loop remains same
        for (int j = i + 1; j < recordCount; j++)
        { // inner loop first runs complete
            if (nameArray[i] > nameArray[j])
            { // when i=0 it does comparison with all values
                //  Swapping of name
                string temp = nameArray[i];// i > j shows alphabetical normal order where i < j shows data from Z to A
                nameArray[i] = nameArray[j];// whenever it [j] gets greater value than that of the passengerCount 0 , we swap it
                nameArray[j] = temp; //   temp is temporary variable && temp=i , i=j ,j=i
                // Swapping of CNIC
                string tempCNIC = CNIC_No_array[i];
                CNIC_No_array[i] = CNIC_No_array[j];
                CNIC_No_array[j] = tempCNIC;
                // Swapping of Tickets
                int tempTicket_array = Total_Tickets_array[i];
                Total_Tickets_array[i] = Total_Tickets_array[j];
                Total_Tickets_array[j] = tempTicket_array;
                // Swapping of Premium
                int tempPremium = Premium_Luxury_array[i];
                Premium_Luxury_array[i] = Premium_Luxury_array[j];
                Premium_Luxury_array[j] = tempPremium;
                //Swapping of business
                int tempBusiness = Business_Class_array[i];
                Business_Class_array[i] = Business_Class_array[j];
                Business_Class_array[j] = tempBusiness;
                //Swapping of executive
                int tempExecutive = Executive_array[i];
                Executive_array[i] = Executive_array[j];
                Executive_array[j] = tempExecutive;
                // Swapping of economy
                int tempEconomy = Economy_array[i];
                Economy_array[i] = Economy_array[j];
                Economy_array[j] = tempEconomy;
                // Swapping of origin
                string tempFlight_Origin = Origin_Flight_array[i];
                Origin_Flight_array[i] = Origin_Flight_array[j];
                Origin_Flight_array[j] = tempFlight_Origin;
                // Swapping of destination
                string temp_Destination = Destination_Flight_array[i];
                Destination_Flight_array[i] = Destination_Flight_array[j];
                Destination_Flight_array[j] = temp_Destination;
                // Swapping of contactInfo
                string temp_contact_info = contactInfo_array[i];
                contactInfo_array[i] = contactInfo_array[j];
                contactInfo_array[j] = temp_contact_info;
            }
        }
    }
    cout << "Sorted list is as follows: \n";
    cout << "Name \tCNIC No. \tTotal Tickets \tPremium Luxury \tBusiness Class \tExecutive \tEconomy\t Ticket Price  \tOrigin Flight \tDestination Flight\t Contact Info  \n";
    for (int i = 0; i < recordCount; i++)
    {
        cout << nameArray[i] << "\t" << CNIC_No_array[i] << "\t" << Total_Tickets_array[i]
             << "\t" << Premium_Luxury_array[i] << "\t" << Business_Class_array[i] << "\t" << Executive_array[i]
             << "\t" << Economy_array[i] << "\t" << Origin_Flight_array[i] << "\t"
             << Destination_Flight_array[i] << "\t" << contactInfo_array[i] << endl;
    }
    getch();
    myfile.close();
}
// Delete Record
void deleteRecord(string name)
{
    string passenger;
    fstream myfile;
    int index = 0;
    myfile.open("PassengerMenuRecord.txt", ios::in);
    while (getline(myfile, passenger))
    {
        if (passenger.empty())
        {
            continue;
        }
        nameArray[index] = getField(passenger, 1);
        CNIC_No_array[index] = getField(passenger, 2);
        string TotalTickets = getField(passenger, 3);
        Total_Tickets_array[index] = stoi(TotalTickets);
        string Premium = getField(passenger, 4);
        Premium_Luxury_array[index] = stoi(Premium);
        string Business = getField(passenger, 5);
        Business_Class_array[index] = stoi(Business);
        string executive = getField(passenger, 6);
        Executive_array[index] = stoi(executive);
        string economy = getField(passenger, 7);
        Economy_array[index] = stoi(economy);
        Origin_Flight_array[index] = getField(passenger, 8);
        Destination_Flight_array[index] = getField(passenger, 9);
        contactInfo_array[index] = getField(passenger, 10);
        index++;
    }
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
        string passenger_name = ""; // now we have to make changes in the found passengerCount
        string CNIC_No = "";
        string Origin_Flight = "";
        string Destination_Flight= "";
        int Total_Tickets = 0;
        int Premium_Luxury = 0;
        int Business_Class = 0;
        int Executive = 0;
        int Economy = 0;
        string contactInfo = "";
        addToFile(foundpassengerCount, passenger_name, CNIC_No, Total_Tickets, Premium_Luxury, Business_Class, Executive, Economy, Origin_Flight, Destination_Flight, contactInfo);
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
    for (int i = 0; i < passengerCount; i++)
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
    for (int i = 0; i < passengerCount; i++)
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
    for (int i = 0; i < passengerCount; i++)
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
    for (int i = 0; i < passengerCount; i++)
    {
        tickets_sold = tickets_sold + Economy_array[i];
    }
    tickets_available = Economy - tickets_sold;
    cout << "Total Economy seats available: " << tickets_available << endl;
}
void availableSlots(int available)
{
    string passenger;
    fstream myfile;
    int index = 0;
    myfile.open("PassengerMenuRecord.txt", ios::in);
    while (getline(myfile, passenger))
    {
        if (passenger.empty())
        {
            continue;
        }
        nameArray[index] = getField(passenger, 1);
        CNIC_No_array[index] = getField(passenger, 2);
        Total_Tickets_array[index] = stoi(getField(passenger, 3));
        Premium_Luxury_array[index] = stoi(getField(passenger, 4));
        Business_Class_array[index] = stoi(getField(passenger, 5));
        Executive_array[index] = stoi(getField(passenger, 6));
        Economy_array[index] = stoi(getField(passenger, 7));
        Origin_Flight_array[index] = getField(passenger, 8);
        Destination_Flight_array[index] = getField(passenger, 9);
        contactInfo_array[index] = getField(passenger, 10);
        index++;
    }
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
    myfile.close();
}
void clearScreen()
{
    system("cls");
}
// Function End