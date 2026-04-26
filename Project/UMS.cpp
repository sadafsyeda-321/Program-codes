#include <iostream>
#include <conio.h>
using namespace std;
main()
{

    int TOTAL_STUDENTS = 1000; // memory   total size
    int index = 7;             // keeps record of which student record is taken and increment in it & storeeit

    // data structures
    string nameArray[TOTAL_STUDENTS] = {"ali", "ammar", "sara", "usman", "zara", "bilal", "hina"};
    int ageArray[TOTAL_STUDENTS] = {19, 20, 18, 21, 19, 20, 18};
    float matricArray[TOTAL_STUDENTS] = {1050, 890, 970, 1020, 880, 950, 1010};
    float interArray[TOTAL_STUDENTS] = {980, 850, 920, 960, 870, 910, 990};
    float ecatArray[TOTAL_STUDENTS] = {350, 280, 310, 340, 270, 320, 360};
    string pref1Array[TOTAL_STUDENTS] = {"CE", "CS", "CS", "EE", "CE", "CS", "EE"};
    string pref2Array[TOTAL_STUDENTS] = {"CS", "CE", "EE", "CS", "CS", "EE", "CE"};
    string pref3Array[TOTAL_STUDENTS] = {"EE", "EE", "CE", "CE", "EE", "CE", "CS"};
    float aggregateArray[TOTAL_STUDENTS]; // either aggr is stored in it or show it to students and sort it

    // CRUD     Create, Read, Update, Delete              (operations take place)
    while (true) // program runs everytime i-e not ends
    {
        // main header of ums
        system("cls");
        cout << "------------------------------------------------------" << endl;
        cout << "------- University Admission Management System -------" << endl;
        cout << "------------------------------------------------------" << endl;

        cout << "User menu " << endl;
        cout << "1. Admin " << endl;
        cout << "2. Student " << endl;
        cout << "3. to Exit " << endl;
        cout << "Choose option: ";
        string userOption;      //prevent application from crash
        cin >> userOption;

        cout << "You choose " << userOption << endl;
        if (userOption == "1")
        {
            // write the admin code
            int countattempt = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu: Login attempt " << i + 1 << endl;
                cout << "Enter username: ";
                string username;
                cin >> username;
                cout << "Enter password: ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Login Successfully " << endl;

                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all students " << endl;
                        cout << "2. Search Student " << endl;
                        cout << "3. Update student record " << endl;
                        cout << "4. Generate Merit List " << endl;
                        cout << "5. Delete Record by Name " << endl;
                        cout << "6. Logout " << endl;
                        cout << "Choose the option: ";
                        string adminoption;                 //string prevents the application from crash 
                        cin >> adminoption;
                        if (adminoption == "1")
                        {
                            // show students record
                            cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++) // index takes care of data of students being stored
                            {
                                if (nameArray[i] != "") // this condition helps in display of code only with some value while helps in deletion
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == "2")
                        {
                            // find students by name function
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
                                cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                                // code can be used as that of option 1 but this one shows the exact match
                            }
                        }
                        else if (adminoption == "3")
                        {
                            // update student record                     i-e firstly requires search student
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
                                cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << "Enter new record for update: " << endl; // if directly it is shown it would change the already provided data
                                cout << "Enter your name: ";
                                string name;
                                cin >> name;
                                cout << "Enter age: ";
                                int age;
                                cin >> age;
                                cout << "Enter Matric Marks: ";
                                float matric;
                                cin >> matric;
                                cout << "Enter FSC Marks: ";
                                float fsc;
                                cin >> fsc;
                                cout << "Enter ECAT Marks: ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS, CE, EE as your preferences: " << endl;
                                cout << "Enter your 1st preference: ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your 2nd preference: ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd preference: ";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name; // now we have to make changes in the found index
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminoption == "4")
                        {
                            // generate merit list               aggregate is calculated and shown it to the students
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArray[i] / 1050.0 * 100.0 * 0.30 + interArray[i] / 1100 * 100 * 0.40 + ecatArray[i] / 400 * 100 * 0.3;
                                aggregateArray[i] = aggri;
                            }
                            // code to display sorted data     On basis of the aggregate
                            for (int i = 0; i < index; i++)
                            { // outer loop remains same
                                for (int j = i+1; j < index; j++)
                                { // inner loop first runs complete
                                    if (aggregateArray[i] < aggregateArray[j])
                                    { // when i=0 it does comparison with all values
                                        // whenever it [j] gets greater value than that of the index 0 , we swap it
                                        // swap operation                           temp is temporary variable && temp=i , i=j ,j=i
                                        
                                        //  Swapping of name
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // Swapping of matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // Swapping of inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // Swapping of ecat
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // Swapping of p1
                                        string tempP1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempP1;

                                        // Swapping of p2
                                        string tempP2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempP2;

                                        // Swapping of p3
                                        string tempP3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempP3;

                                        // Swapping of aggregate
                                        float tempAggregate = aggregateArray[i];
                                        aggregateArray[i] = aggregateArray[j];
                                        aggregateArray[j] = tempAggregate;              


                                    }
                                }
                            }
                            //to show data in form of sorted ones then sorted data code should be above the unsorted data code
                            
                            //  code to display all data with aggregate  (unsorted form)
                            cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i++) // index takes care of data of studennts being stored
                            {
                                if (nameArray[i] != "") // this condition helps in display of code only with some value while helps in deletion
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggregateArray[i] << endl;
                                }
                            }

                            //admit students into disciplines
                            
                        }
                        else if (adminoption == "5")
                        { // we use updated record with little changes
                            // delete student record
                            cout << "Enter the name you want to Delete record of ";
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
                                nameArray[foundindex] = "";  // now we have to make changes in the found index
                                ageArray[foundindex] = 0;    // for deletion  (1st Method)
                                matricArray[foundindex] = 0; // string with "" and int values=0 are kept
                                interArray[foundindex] = 0;  // this shows 0, 0 values when option 1 is chosen
                                ecatArray[foundindex] = 0;   // to overcome it we modify the option 1 by if condition
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << "Record of " << name << " Deleted " << endl;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminoption == "6")
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
            // write the student code
            system("cls");
            cout << "Welcome to UMS Student Menu " << endl;
            cout << "Enter your name: ";
            string name;
            cin >> name;
            cout << "Enter age: ";
            int age;
            cin >> age;
            cout << "Enter Matric Marks: ";
            float matric;
            cin >> matric;
            cout << "Enter FSC Marks: ";
            float fsc;
            cin >> fsc;
            cout << "Enter ECAT Marks: ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS, CE, EE as your preferences: " << endl;
            cout << "Enter your 1st preference: ";
            string pref1;
            cin >> pref1;
            cout << "Enter your 2nd preference: ";
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd preference: ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
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