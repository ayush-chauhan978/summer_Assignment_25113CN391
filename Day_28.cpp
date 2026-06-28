#include<bits/stdc++.h>
using namespace std;
//Question Number 109
class Library {
    int id;
    string title, author;

public:
    void addBook() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);
    }

    void displayBook() {
        cout << "\nBook ID : " << id;
        cout << "\nTitle   : " << title;
        cout << "\nAuthor  : " << author << endl;
    }

    int getId() {
        return id;
    }
};

int main() {
    Library book[10];
    int n = 0, choice, id;

    do {
        cout << "\n1.Add Book";
        cout << "\n2.Display Books";
        cout << "\n3.Search Book";
        cout << "\n4.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            book[n].addBook();
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++)
                book[i].displayBook();
            break;

        case 3:
            cout << "Enter Book ID: ";
            cin >> id;

            for(int i=0;i<n;i++) {
                if(book[i].getId()==id)
                    book[i].displayBook();
            }
            break;
        }
    } while(choice!=4);

    return 0;
}

// Question Number 110
class Bank {
    int accNo;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin,name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amount;
        cout << "Enter Amount: ";
        cin >> amount;
        balance += amount;
    }

    void withdraw() {
        float amount;
        cout << "Enter Amount: ";
        cin >> amount;

        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }

    void showBalance() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {
    Bank b;
    int choice;

    b.createAccount();

    do {
        cout << "\n1.Deposit";
        cout << "\n2.Withdraw";
        cout << "\n3.Check Balance";
        cout << "\n4.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            b.deposit();
            break;

        case 2:
            b.withdraw();
            break;

        case 3:
            b.showBalance();
            break;
        }

    } while(choice!=4);

    return 0;
}

//Question Number 111
class Ticket {
    string name;
    int age;
    string destination;

public:
    void bookTicket() {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin,name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Destination: ";
        getline(cin,destination);

        cout << "\nTicket Booked Successfully!\n";
    }

    void displayTicket() {
        cout << "\nPassenger : " << name;
        cout << "\nAge       : " << age;
        cout << "\nDestination : " << destination << endl;
    }
};

int main() {
    Ticket t;
    int choice;

    do {
        cout << "\n1.Book Ticket";
        cout << "\n2.View Ticket";
        cout << "\n3.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            t.bookTicket();
            break;

        case 2:
            t.displayTicket();
            break;
        }

    } while(choice!=3);

    return 0;
}
//Question Number 112
class Contact {
    string name;
    string phone;

public:
    void addContact() {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin,name);

        cout << "Enter Phone Number: ";
        getline(cin,phone);
    }

    void display() {
        cout << "\nName  : " << name;
        cout << "\nPhone : " << phone << endl;
    }

    string getName() {
        return name;
    }
};

int main() {
    Contact c[20];
    int n=0, choice;
    string search;

    do {
        cout << "\n1.Add Contact";
        cout << "\n2.Display Contacts";
        cout << "\n3.Search Contact";
        cout << "\n4.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            c[n].addContact();
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++)
                c[i].display();
            break;

        case 3:
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin,search);

            for(int i=0;i<n;i++) {
                if(c[i].getName()==search)
                    c[i].display();
            }
            break;
        }

    } while(choice!=4);

    return 0;
}