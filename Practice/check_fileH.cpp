#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
using namespace std;

// Global variables
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


void loadData()
{
    ifstream file("data.txt");
    if (!file)
    {
        cout << "No saved data found." << endl;
        return;
    }

    // Read passengerCount from first line
    file >> passengerCount;
    file.ignore();          // discard the trailing newline

    string line;
    int i = 0;

    while (getline(file, line) && i < Total_Passengers)
    {
        stringstream ss(line);
        string token;

        getline(ss, token, '|'); 
        nameArray[i] = token;
        getline(ss, token, '|');
         contactInfo_array[i]        = token;
        getline(ss, token, '|'); CNIC_No_array[i]            = token;
        getline(ss, token, '|'); Origin_Flight_array[i]      = token;
        getline(ss, token, '|'); Destination_Flight_array[i] = token;
        getline(ss, token, '|'); Total_Tickets_array[i]      = stoi(token);
        getline(ss, token, '|'); Premium_Luxury_array[i]     = stoi(token);
        getline(ss, token, '|'); Business_Class_array[i]     = stoi(token);
        getline(ss, token, '|'); Executive_array[i]          = stoi(token);
        getline(ss, token, '|'); Economy_array[i]            = stoi(token);
        getline(ss, token, '|'); Duration_array[i]           = token;

        i++;
    }

    file.close();
    cout << "Data loaded successfully." << endl;
}


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
void availableSlots();
void clearScreen();
bool adminLogin();
// Function Prototype End

// Main start
int main()
{
    string userOption;
    while (true)
    {
        clearScreen();
        mainHeader();
        mainMenu();

        getline(cin, userOption);
        if (userOption == "1" && adminLogin())
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
    fstream newFile;
    newFile.open("ProjectFile.txt", ios::in);
    newFile << userOption;
    newFile.close();

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

bool adminLogin()
{
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
            clearScreen();
            cout << "Succesfully Logged in \n";
            getch();
            return true;
        }
        cout << "Invalid Password \n";
        getch();

        fstream newFile;
        newFile.open("ProjectFile.txt", ios::in);
        newFile << username << endl
                << password << endl;
        newFile.close();
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
    getline(cin, adminOption);
    fstream newFile;
    newFile.open("ProjectFile.txt", ios::in);
    newFile << adminOption;
    newFile.close();

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
            searchPassengers(" ");
        }
        else if (adminOption == "3")
        {
            updateRecord(" ");
        }
        else if (adminOption == "4")
        {
            generateList();
        }
        else if (adminOption == "5")
        {
            deleteRecord(" ");
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
            availableSlots();
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
        fstream newFile;
        newFile.open("ProjectFile.txt", ios::app);
        newFile << adminOption;
        newFile.close();
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
    getch();
}

// Show All Passengers Record
void showAllPassengers()
{
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

// Search Passenger
void searchPassengers(string name)
{
    clearScreen();
    cout << "Enter the name you want to search: ";
    cin.ignore();
    getline(cin, name);

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
}

// Update Passenger Record
void updateRecord(string name)
{
    cout << "Enter the name you want to update record of ";
    cin.ignore(); // deletes the line from previous cin
    getline(cin, name);
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
    }
    else
    {
        cout << "Record not found " << endl;
    }
}

// Generate List
void generateList()
{
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
}

// Delete Record
void deleteRecord(string name)
{
    cout << "Enter the name you want to Delete record of ";
    cin.ignore(); // discard the new line from previous cin
    getline(cin, name);
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

void availableSlots()
{
    clearScreen();
    int total_Sold = 0;
    for (int i = 0; i < passengerCount; i++)
    {
        total_Sold = total_Sold + Total_Tickets_array[i];
    }
    int available = TotalFlight_Tickets - total_Sold;
    cout << "Total Available Tickets:" << available << endl;
    premiumAvailable();
    businessAvailable();
    executiveAvailable();
    economyAvailable();
    cout << "Total Tickets Sold: " << total_Sold << endl;
}
void clearScreen()
{
    system("cls");
}

// Function End
