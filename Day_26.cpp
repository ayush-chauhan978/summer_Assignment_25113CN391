#include<bits/stdc++.h>
using namespace std;
//Question number 101
int mainn(){
    srand(time(0));

    int secretnum = rand()%100 +1;
    int guess;
    int attempt=0;

    cout<<"Select a number between 1 and 100";

    do{
        cout<<"Enter your guess";
        cin>>guess;
        attempt++;

        if(guess>secretnum){
            cout<<"High,select a lower one";
        }

        else if(guess<secretnum){
            cout<<"Low,select a lower one";
        }
        else{
            cout<<"Correct";
            cout<<"Attempts:"<<attempt;
        }
    }while(guess!=secretnum);
    return 0;
}

//Question Number 102
int main(){
    int age;
    cout<<"Enter yout age";
    cin>>age;

    if(age<0){
        cout<<"Invalid age";
    }
    else if(age>=18){
        cout<<"Eligible to vote";
    }
    else{
        cout<<"Not Eligible to vote";
    }
    return 0;
}

//Question Number 103

int main() {
    int choice;
    double balance = 10000.0;
    double amount;

    do {
        cout << "\n====== ATM MENU ======\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: Rs. ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit Successful!\n";
                    cout << "Updated Balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid amount!\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: Rs. ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount!\n";
                }
                else if (amount > balance) {
                    cout << "Insufficient Balance!\n";
                }
                else {
                    balance -= amount;
                    cout << "Withdrawal Successful!\n";
                    cout << "Remaining Balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM!\n";
                break;

            default:
                cout << "Invalid Choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}

//Question Number 104

int main() {
    int score = 0;
    char answer;

    cout << "Welcome to the Quiz Application ";

    cout << "1. What is the capital of India?\n";
    cout << "a) Mumbai\n";
    cout << "b) New Delhi\n";
    cout << "c) Kolkata\n";
    cout << "d) Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B')
        score++;

  
    cout << "\n2. How many days are there in a leap year?\n";
    cout << "a) 365\n";
    cout << "b) 366\n";
    cout << "c) 364\n";
    cout << "d) 360\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B')
        score++;

    cout << "\n3. Which planet is known as the Red Planet?\n";
    cout << "a) Earth\n";
    cout << "b) Venus\n";
    cout << "c) Mars\n";
    cout << "d) Jupiter\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C')
        score++;

    cout << "\n4. What is 10 + 20?\n";
    cout << "a) 20\n";
    cout << "b) 25\n";
    cout << "c) 30\n";
    cout << "d) 40\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C')
        score++;
    
    cout << "\n===== Quiz Result =====\n";
    cout << "Your Score: " << score << " / 5\n";

    if (score == 4)
        cout << "Excellent! You got all answers correct.\n";
    else if (score >= 2)
        cout << "Good Job!\n";
    else
        cout << "Better Luck Next Time!\n";

    return 0;
}
    
    