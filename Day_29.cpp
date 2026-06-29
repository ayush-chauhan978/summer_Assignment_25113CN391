#include <bits/stdc++.h>
using namespace std;
//Question Number 113
int main() {
    int choice;
    float a, b;

    do {
        cout << "\n===== MENU DRIVEN CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Sum = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Difference = " << a - b << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Product = " << a * b << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if(b != 0)
                    cout << "Quotient = " << a / b << endl;
                else
                    cout << "Division by zero is not allowed.\n";
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 5);

    return 0;
}
//Question Number 114
int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;

    do {
        cout << "\n===== ARRAY OPERATIONS =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum\n";
        cout << "3. Find Maximum\n";
        cout << "4. Find Minimum\n";
        cout << "5. Search Element\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Array Elements: ";
                for(int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
            {
                int sum = 0;
                for(int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum << endl;
                break;
            }

            case 3:
            {
                int max = arr[0];
                for(int i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];

                cout << "Maximum = " << max << endl;
                break;
            }

            case 4:
            {
                int min = arr[0];
                for(int i = 1; i < n; i++)
                    if(arr[i] < min)
                        min = arr[i];

                cout << "Minimum = " << min << endl;
                break;
            }

            case 5:
            {
                int key;
                cout << "Enter element to search: ";
                cin >> key;

                bool found = false;

                for(int i = 0; i < n; i++) {
                    if(arr[i] == key) {
                        cout << "Element found at index " << i << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Element not found.\n";

                break;
            }

            case 6:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while(choice != 6);

    return 0;
}

//Question Number 115
int main() {

    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int choice;

    do {
        cout << "\n===== STRING OPERATIONS =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Copy String\n";
        cout << "5. Compare with Another String\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {

            case 1:
                cout << "String: " << str << endl;
                break;

            case 2:
                cout << "Length = " << strlen(str) << endl;
                break;

            case 3:
            {
                char temp[100];
                strcpy(temp, str);
                strrev(temp);
                cout << "Reversed String = " << temp << endl;
                break;
            }

            case 4:
            {
                char copy[100];
                strcpy(copy, str);
                cout << "Copied String = " << copy << endl;
                break;
            }

            case 5:
            {
                char str2[100];
                cout << "Enter another string: ";
                cin.getline(str2, 100);

                if(strcmp(str, str2) == 0)
                    cout << "Strings are Equal.\n";
                else
                    cout << "Strings are Not Equal.\n";

                break;
            }

            case 6:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while(choice != 6);

    return 0;
}
//Question Number 116
struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {

    Item item[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== INVENTORY MANAGEMENT =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter Item ID: ";
                cin >> item[count].id;

                cout << "Enter Item Name: ";
                cin >> item[count].name;

                cout << "Enter Quantity: ";
                cin >> item[count].quantity;

                cout << "Enter Price: ";
                cin >> item[count].price;

                count++;
                cout << "Item Added Successfully.\n";
                break;

            case 2:

                if(count == 0) {
                    cout << "Inventory Empty.\n";
                    break;
                }

                cout << "\nID\tName\tQuantity\tPrice\n";

                for(int i = 0; i < count; i++) {
                    cout << item[i].id << "\t"
                         << item[i].name << "\t"
                         << item[i].quantity << "\t\t"
                         << item[i].price << endl;
                }

                break;

            case 3:
            {
                int id;
                bool found = false;

                cout << "Enter Item ID: ";
                cin >> id;

                for(int i = 0; i < count; i++) {

                    if(item[i].id == id) {
                        cout << "\nItem Found\n";
                        cout << "ID : " << item[i].id << endl;
                        cout << "Name : " << item[i].name << endl;
                        cout << "Quantity : " << item[i].quantity << endl;
                        cout << "Price : " << item[i].price << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Item Not Found.\n";

                break;
            }

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while(choice != 4);

    return 0;
}