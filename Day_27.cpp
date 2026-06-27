#include<bits/stdc++.h>
using namespace std;

//Question Number 105
#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int age;
    float marks;
};

vector<Student> students;

void addStudent(){
    Student s;

    cout << "\nEnter Roll Number: ";
    cin >> s.rollNo;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Age: ";
    cin >> s.age;

    cout << "Enter Marks: ";
    cin >> s.marks;

    students.push_back(s);

    cout << "Student Record Added Successfully!\n";
}
void displayStudents() {
    if (students.empty()) {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < students.size(); i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No : " << students[i].rollNo << endl;
        cout << "Name    : " << students[i].name << endl;
        cout << "Age     : " << students[i].age << endl;
        cout << "Marks   : " << students[i].marks << endl;
    }
}
void searchStudent() {
    int roll;
    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for (auto s : students) {
        if (s.rollNo == roll) {
            cout << "\nRecord Found\n";
            cout << "Roll No : " << s.rollNo << endl;
            cout << "Name    : " << s.name << endl;
            cout << "Age     : " << s.age << endl;
            cout << "Marks   : " << s.marks << endl;
            return;
        }
    }

    cout << "Student Not Found!\n";
}
void updateStudent() {
    int roll;
    cout << "\nEnter Roll Number to Update: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == roll) {

            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, students[i].name);

            cout << "Enter New Age: ";
            cin >> students[i].age;

            cout << "Enter New Marks: ";
            cin >> students[i].marks;

            cout << "Record Updated Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}
void deleteStudent() {
    int roll;
    cout << "\nEnter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == roll) {
            students.erase(students.begin() + i);
            cout << "Record Deleted Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

int main() {

    int choice;

    do {
        cout << "\n========== Student Record Management System ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
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

// Question Number 106
#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

vector<Employee> employees;

void addEmployee() {
    Employee e;

    cout << "\nEnter Employee ID: ";
    cin >> e.id;
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, e.name);

    cout << "Enter Department: ";
    getline(cin, e.department);

    cout << "Enter Salary: ";
    cin >> e.salary;

    employees.push_back(e);

    cout << "Employee Added Successfully!\n";
}

void displayEmployees() {
    if (employees.empty()) {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    cout << "\n----- Employee Records -----\n";

    for (int i = 0; i < employees.size(); i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID         : " << employees[i].id << endl;
        cout << "Name       : " << employees[i].name << endl;
        cout << "Department : " << employees[i].department << endl;
        cout << "Salary     : " << employees[i].salary << endl;
    }
}
void searchEmployee() {
    int id;
    cout << "\nEnter Employee ID to Search: ";
    cin >> id;

    for (auto e : employees) {
        if (e.id == id) {
            cout << "\nEmployee Found\n";
            cout << "ID         : " << e.id << endl;
            cout << "Name       : " << e.name << endl;
            cout << "Department : " << e.department << endl;
            cout << "Salary     : " << e.salary << endl;
            return;
        }
    }

    cout << "Employee Not Found!\n";
}

void updateEmployee() {
    int id;
    cout << "\nEnter Employee ID to Update: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].id == id) {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, employees[i].name);

            cout << "Enter New Department: ";
            getline(cin, employees[i].department);

            cout << "Enter New Salary: ";
            cin >> employees[i].salary;

            cout << "Employee Updated Successfully!\n";
            return;
        }
    }

    cout << "Employee Not Found!\n";
}
void deleteEmployee() {
    int id;
    cout << "\nEnter Employee ID to Delete: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].id == id) {
            employees.erase(employees.begin() + i);
            cout << "Employee Deleted Successfully!\n";
            return;
        }
    }

    cout << "Employee Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n========== Employee Management System ==========\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateEmployee();
                break;

            case 5:
                deleteEmployee();
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

//Question Number 107
#include <iostream>
using namespace std;

int main() {
    int empId;
    string name;
    float basicSalary, hra, da, pf, grossSalary, netSalary;

    cout << "Enter Employee ID: ";
    cin >> empId;
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    hra = basicSalary * 0.20;
    da = basicSalary * 0.10;
    pf = basicSalary * 0.05;

    grossSalary = basicSalary + hra + da;
    netSalary = grossSalary - pf;

    cout << "\n------ Salary Slip ------\n";
    cout << "Employee ID   : " << empId << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basicSalary << endl;
    cout << "HRA           : " << hra << endl;
    cout << "DA            : " << da << endl;
    cout << "PF            : " << pf << endl;
    cout << "Gross Salary  : " << grossSalary << endl;
    cout << "Net Salary    : " << netSalary << endl;

    return 0;
}
//Question Number 108
#include <iostream>
using namespace std;

int main() {
    int rollNo;
    string name;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Marks of 5 Subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 50)
        grade = 'E';
    else
        grade = 'F';

    cout << "\n------ Marksheet ------\n";
    cout << "Roll Number : " << rollNo << endl;
    cout << "Student Name: " << name << endl;
    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    return 0;
}