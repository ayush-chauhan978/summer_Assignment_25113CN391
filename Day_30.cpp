#include<bits/stdc++.h>
using namespace std;
// Question Number 117
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    string name[100];
    int roll[100];
    float marks[100];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll No: ";
        cin >> roll[i];

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[i]);

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll No : " << roll[i];
        cout << "\nName    : " << name[i];
        cout << "\nMarks   : " << marks[i];
        cout << "\n-----------------------";
    }

    return 0;
}
//Question Number 118
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    string title[100], author[100];

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;

        cout << "Enter Book Title: ";
        getline(cin, title[i]);

        cout << "Enter Author Name: ";
        getline(cin, author[i]);
    }

    cout << "\n------ Library Records ------\n";

    for (int i = 0; i < n; i++) {
        cout << "\nBook Title : " << title[i];
        cout << "\nAuthor     : " << author[i];
        cout << "\n---------------------------";
    }

    return 0;
}
// question number 119
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int id[100];
    string name[100];
    float salary[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> id[i];

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name[i]);

        cout << "Enter Salary: ";
        cin >> salary[i];
    }

    cout << "\n------ Employee Records ------\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee ID : " << id[i];
        cout << "\nName        : " << name[i];
        cout << "\nSalary      : " << salary[i];
        cout << "\n----------------------------";
    }

    return 0;
}
//Question Number 120
#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int roll[MAX];
string name[MAX];
float marks[MAX];
int totalStudents = 0;

// Function to add student
void addStudent()
{
    if (totalStudents == MAX)
    {
        cout << "Database Full!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> roll[totalStudents];

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[totalStudents]);

    cout << "Enter Marks: ";
    cin >> marks[totalStudents];

    totalStudents++;

    cout << "\nStudent Added Successfully.\n";
}

// Function to display students
void displayStudents()
{
    if (totalStudents == 0)
    {
        cout << "\nNo Records Found.\n";
        return;
    }

    cout << "\n----------- Student Records -----------\n";

    for (int i = 0; i < totalStudents; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No : " << roll[i] << endl;
        cout << "Name    : " << name[i] << endl;
        cout << "Marks   : " << marks[i] << endl;
        cout << "---------------------------------\n";
    }
}

// Function to search student
void searchStudent()
{
    int r;
    cout << "\nEnter Roll Number to Search: ";
    cin >> r;

    for (int i = 0; i < totalStudents; i++)
    {
        if (roll[i] == r)
        {
            cout << "\nRecord Found\n";
            cout << "Roll No : " << roll[i] << endl;
            cout << "Name    : " << name[i] << endl;
            cout << "Marks   : " << marks[i] << endl;
            return;
        }
    }

    cout << "\nStudent Not Found.\n";
}

// Function to update record
void updateStudent()
{
    int r;

    cout << "\nEnter Roll Number to Update: ";
    cin >> r;

    for (int i = 0; i < totalStudents; i++)
    {
        if (roll[i] == r)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, name[i]);

            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "\nRecord Updated Successfully.\n";
            return;
        }
    }

    cout << "\nStudent Not Found.\n";
}

// Function to delete student
void deleteStudent()
{
    int r;

    cout << "\nEnter Roll Number to Delete: ";
    cin >> r;

    for (int i = 0; i < totalStudents; i++)
    {
        if (roll[i] == r)
        {
            for (int j = i; j < totalStudents - 1; j++)
            {
                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            totalStudents--;

            cout << "\nRecord Deleted Successfully.\n";
            return;
        }
    }

    cout << "\nStudent Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===================================";
        cout << "\n STUDENT RECORD MANAGEMENT SYSTEM";
        cout << "\n===================================";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}