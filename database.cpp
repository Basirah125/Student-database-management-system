// These are the header files that we need for the code.
#include<iostream>
#include<fstream>
#include <cctype>
// #include <iomanip>

// The line below "using namespace std" statement makes
//it unnecessary to prefix the standard library functions with "std::"
using namespace std;

// Define the data structure for the student record. This may include fields like name, roll number, address, contact information, etc.
struct Student
{
    int roll_no;
    string name;
    string address;
    int contact;
};

// Create a menu-based interface for the user to perform different operations on the database,
// such as adding a new student, deleting a student record, updating student information, and searching for a student record.
void intro();
void addStudent()
{
    intro();
    Student s;
    ofstream fout("database.dat", ios::binary | ios::app);
    cout<<"Enter Your MATRIC No: ";
    cin>>s.roll_no;
    cout<<"Enter Your Name: ";
    cin>>s.name;
    cout<<"Enter Your Address: ";
    cin>>s.address;
    cout<<"Enter Your Contact: ";
    cin>>s.contact;
    fout.write((char*)&s, sizeof(s));
    fout.close();
    cout<<"Your Record Is Added Successfully!\n";
}
int main()
{
// Implement the functions for each of these operations. For example, the "add student" 
//function should prompt the user for the necessary information and then add a new record to the database.
    
    addStudent();
    return 0;
}

        // Introduction section 
void intro(){
    cout << "\n\n\n\t     STUDENT DATABASE MANAGEMENT SYSTEM";
    cout << "\n\n\n\n\t     MADE BY:ALABI BASIRAT";
    cout << "\n\n\n\n\t     MATRIC NO: H/CTE/22/0709";
    cout << "\n\n\n\n\t     SUPERVISOR : ENGR NZUBE";
    cout << "\n\n\n\n\t     SCHOOL : THE FEDERAL POLYTECHNIC ILARO";
    cin.get();
}
