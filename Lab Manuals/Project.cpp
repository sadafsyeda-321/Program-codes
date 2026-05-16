#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


// Function Prototype Start

void mainHeader();
bool adminLogin();
void adminMenu();
void passengerMenu();
void searchPassengers();
void showAllPassengers();
void updateRecord();
void generateList();
void deleteRecord();
void ticketPrice();
void purchaseMenu();
void availableSlots();
int findPassengerByName(string name);

void clearScreen() { system("cls"); }
void exitMenu();
// Function Prototype End


// Data Structures Start


const int Total_Passengers = 1000;
int index = 7;
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

// Data Structures End

// Main Function Start
main(){
    
}
// Main Function End

// Function Code Start

void mainHeader() {
        cout << "--------------------------------------------------------------- \n";
        cout << "----------------        S & A AIRLINES       ------------------ \n";
        cout << "--------------------------------------------------------------- \n";
}
// Function Code End




;

bool adminLogin()
{
    mainHeader();
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
    }
    return false;
}


void adminMenu()
{
    mainHeader();
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
}
