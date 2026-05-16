#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
// Global constants
const int Total_Passengers = 1000;
const int TotalFlight_Tickets = 40;
const int PremiumLuxuryLimit = 10;
const int BusinessClassLimit = 10;
const int ExecutiveLimit = 10;
const int EconomyLimit = 10;
// Global pricing
const int Premium_Price = 200000;
const int Business_Price = 150000;
const int Executive_Price = 120000;
const int Economy_Price = 100000;
// Data arrays
string nameArray[Total_Passengers] = {"Ali", "Uzair", "Sara", "Usman", "Zimal", "Bilal", "Hamdan"};
string contactInfo_array[Total_Passengers] = {"03247512487", "03225512489", "03247958487", "0324796847", "030414724866", "030426824869", "03098547433"};
string CNIC_No_array[Total_Passengers] = {"36402-07451", "36402-026847", "36402-214875", "36402-694781", "36402-485451", "36402-627451", "36402-847551"};
string Origin_Flight_array[Total_Passengers] = {"Multan", "Quetta", "Sialkot", "Peshawar", "Karachi", "Lahore", "Islamabad"};
string Destination_Flight_array[Total_Passengers] = {"Karachi", "Dubai", "Abu Dhabi", "London", "Toronto", "Kuala lampur", "New York"};
string Duration_array[Total_Passengers] = {"3 hrs", "2.5 hrs", "1 hrs", "6 hrs", "13 hrs", "10 hrs", "18 hrs"};
float Total_Tickets_array[Total_Passengers] = {1, 1, 3, 2, 1, 5, 4};
float Premium_Luxury_array[Total_Passengers] = {1, 0, 0, 1, 0, 2, 0};
float Business_Class_array[Total_Passengers] = {0, 1, 1, 0, 1, 2, 1};
float Executive_array[Total_Passengers] = {0, 0, 1, 0, 0, 1, 1};
float Economy_array[Total_Passengers] = {0, 0, 1, 0, 1, 0, 2};
int indexCount = 7;
// ================== Function Declarations ==================
void adminMenu();
void passengerMenu();
void showAllPassengers();
void searchPassenger();
void updatePassenger();
void deletePassenger();
void generateList();
void purchaseMenu();
void availableSlots();
void ticketPrices();
// ================== Utility Functions ==================
int findPassengerByName(string name);
void clearScreen() { system("cls"); }
// ================== Admin Authentication ==================
bool adminLogin() {
    for (int attempt = 0; attempt < 3; attempt++) {
        string username, password;
        cout << "Admin Menu: Login Attempt " << attempt + 1 << endl;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        if (username == "admin" && password == "1234") {
            cout << "Successfully Logged in! \n";
            getch();
            return true;
        }
        cout << "Invalid credentials.\n";
        getch();
    }
    return false;
}
// ================== Main Menu ==================
int main() {
    while (true) {
        clearScreen();
        cout << "-----------------------------------------------------\n";
        cout << "---------------   S & A AIRLINES   ------------------\n";
        cout << "-----------------------------------------------------\n\n";
        cout << "1. Admin\n";
        cout << "2. Passenger\n";
        cout << "3. Exit\n";
        cout << "Choose Option: ";
        string userOption;
        cin >> userOption;
        if (userOption == "1" && adminLogin()) {
            adminMenu();
        } else if (userOption == "2") {
            passengerMenu();
        } else if (userOption == "3") {
            break;
        } else {
            cout << "Invalid option.\n";
            getch();
        }
    }
    cout << "Thanks for using the software.\n";
    return 0;
}
// ================== Admin Menu ==================
void adminMenu() {
    while (true) {
        clearScreen();
        cout << "----------   Admin Panel   ----------\n";
        cout << "1. Show all passengers\n";
        cout << "2. Search Passenger\n";
        cout << "3. Update Passenger Record\n";
        cout << "4. Generate Sorted List\n";
        cout << "5. Delete Record by Name\n";
        cout << "6. Ticket Prices\n";
        cout << "7. Purchase Summary\n";
        cout << "8. Available Slots\n";
        cout << "9. Logout\n";
        cout << "Choose Option: ";
        string option;
        cin >> option;
        if (option == "1") showAllPassengers();
        else if (option == "2") searchPassenger();
        else if (option == "3") updatePassenger();
        else if (option == "4") generateList();
        else if (option == "5") deletePassenger();
        else if (option == "6") ticketPrices();
        else if (option == "7") purchaseMenu();
        else if (option == "8") availableSlots();
        else if (option == "9") break;
        else cout << "Invalid option!\n";
        cout << "Press any key to continue..";
        getch();
    }
}
// ================== Passenger Menu ==================
void passengerMenu() {
    clearScreen();
    cout << "----- Passenger Booking -----\n";
    string name, CNIC_No, Origin_Flight, Destination_Flight, contactInfo;
    float Total_Tickets, Premium_Luxury, Business_Class, Executive, Economy;
    cin.ignore();
    cout << "Name: ";
    getline(cin, name);
    cout << "CNIC No: ";
    cin >> CNIC_No;
    cout << "Total Tickets: ";
    cin >> Total_Tickets;
    if (Total_Tickets > TotalFlight_Tickets) { cout << "Seats not available.\n"; return; }
    cout << "Premium Luxury Tickets: ";
    cin >> Premium_Luxury;
    cout << "Business Class Tickets: ";
    cin >> Business_Class;
    cout << "Executive Tickets: ";
    cin >> Executive;
    cout << "Economy Tickets: ";
    cin >> Economy;
    cin.ignore();
    cout << "Origin Flight: ";
    getline(cin, Origin_Flight);
    cout << "Destination Flight: ";
    getline(cin, Destination_Flight);
    cout << "Contact Info: ";
    getline(cin, contactInfo);
    nameArray[indexCount] = name;
    CNIC_No_array[indexCount] = CNIC_No;
    Origin_Flight_array[indexCount] = Origin_Flight;
    Destination_Flight_array[indexCount] = Destination_Flight;
    contactInfo_array[indexCount] = contactInfo;
    Total_Tickets_array[indexCount] = Total_Tickets;
    Premium_Luxury_array[indexCount] = Premium_Luxury;
    Business_Class_array[indexCount] = Business_Class;
    Executive_array[indexCount] = Executive;
    Economy_array[indexCount] = Economy;
    indexCount++;
    cout << "Booking confirmed and data saved.\n";
    getch();
}
// ================== CRUD Operations ==================
void showAllPassengers() {
    cout << "Name\tCNIC\tTotalTickets\tPremium\tBusiness\tExecutive\tEconomy\tOrigin\tDestination\tDuration\n";
    for (int i = 0; i < indexCount; i++) {
        if (nameArray[i] != "") {
            cout << nameArray[i] << "\t" << CNIC_No_array[i] << "\t" << Total_Tickets_array[i] << "\t"
                 << Premium_Luxury_array[i] << "\t" << Business_Class_array[i] << "\t"
                 << Executive_array[i] << "\t" << Economy_array[i] << "\t"
                 << Origin_Flight_array[i] << "\t" << Destination_Flight_array[i] << "\t"
                 << Duration_array[i] << endl;
        }
    }
}
int findPassengerByName(string name) {
    for (int i = 0; i < indexCount; i++)
        if (nameArray[i] == name) return i;
    return -1;
}
void searchPassenger() {
    cin.ignore();
    string name;
    cout << "Enter passenger name: ";
    getline(cin, name);
    int idx = findPassengerByName(name);
    if (idx == -1) cout << "Record not found.\n";
    else {
        cout << "Found: " << nameArray[idx] << " (" << CNIC_No_array[idx] << ")\n";
    }
}
void updatePassenger() {
    cin.ignore();
    string name;
    cout << "Enter passenger name to update: ";
    getline(cin, name);
    int idx = findPassengerByName(name);
    if (idx == -1) { cout << "Record not found.\n"; return; }
    string CNIC, Origin, Destination, contact;
    float total, premium, business, exec, eco;
    cout << "New CNIC: ";
    cin >> CNIC;
    cout << "Total Tickets: ";
    cin >> total;
    cout << "Premium: ";
    cin >> premium;
    cout << "Business: ";
    cin >> business;
    cout << "Executive: ";
    cin >> exec;
    cout << "Economy: ";
    cin >> eco;
    cin.ignore();
    cout << "Origin: ";
    getline(cin, Origin);
    cout << "Destination: ";
    getline(cin, Destination);
    cout << "Contact Info: ";
    getline(cin, contact);
    CNIC_No_array[idx] = CNIC;
    Origin_Flight_array[idx] = Origin;
    Destination_Flight_array[idx] = Destination;
    contactInfo_array[idx] = contact;
    Total_Tickets_array[idx] = total;
    Premium_Luxury_array[idx] = premium;
    Business_Class_array[idx] = business;
    Executive_array[idx] = exec;
    Economy_array[idx] = eco;
    cout << "Record updated!\n";
}
void deletePassenger() {
    cin.ignore();
    string name;
    cout << "Enter name to delete: ";
    getline(cin, name);
    int idx = findPassengerByName(name);
    if (idx == -1) {
        cout << "Record not found.\n";
        return;
    }
    nameArray[idx] = CNIC_No_array[idx] = Origin_Flight_array[idx] =
        Destination_Flight_array[idx] = contactInfo_array[idx] = "";
    Total_Tickets_array[idx] = Premium_Luxury_array[idx] = Business_Class_array[idx] =
        Executive_array[idx] = Economy_array[idx] = 0;
    cout << "Record deleted.\n";
}
void generateList() {
    for (int i = 0; i < indexCount; i++) {
        for (int j = i + 1; j < indexCount; j++) {
            if (nameArray[i] > nameArray[j]) {
                swap(nameArray[i], nameArray[j]);
                swap(CNIC_No_array[i], CNIC_No_array[j]);
                swap(Origin_Flight_array[i], Origin_Flight_array[j]);
                swap(Destination_Flight_array[i], Destination_Flight_array[j]);
            }
        }
    }
    cout << "Sorted list generated by name.\n";
    showAllPassengers();
}
// ================== Reporting and Utility ==================
void ticketPrices() {
    cout << "Premium Ticket: " << Premium_Price << endl;
    cout << "Business Ticket: " << Business_Price << endl;
    cout << "Executive Ticket: " << Executive_Price << endl;
    cout << "Economy Ticket: " << Economy_Price << endl;
}
void purchaseMenu() {
    clearScreen();
    int total = 0;
    for (int i = 0; i < indexCount; i++)
        total += Total_Tickets_array[i];
    cout << "Total Tickets Sold: " << total << endl;
}
void availableSlots() {
    clearScreen();
    int totalSold = 0;
    for (int i = 0; i < indexCount; i++)
        totalSold += Total_Tickets_array[i];
    int available = TotalFlight_Tickets - totalSold;
    cout << "Available Seats (Total): " << available << endl;
}