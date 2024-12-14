// sameer rathod
//jensen huang


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accNum;
    double bal;

public:
    BankAccount(string acc, double initBal) {
        accNum = acc;
        bal = initBal;
    }

    void deposit(double amt) {
        if (amt > 0) {
            bal += amt;
            cout<<"Deposited:"<<amt<<"\n";
        } else {
            cout<<"Invalid deposit amount!\n";
        }
    }

    void withdraw(double amt) {
        if (amt > 0 && amt <= bal) {
            bal -= amt;
            cout<<"Withdrawn:"<<amt<<"\n";
        } else {
            cout<<"Invalid withdrawal amount or insufficient balance!\n";
        }
    }

    void display() {
        cout<<"Account Number:"<<accNum<<"\n";
        cout<<"Balance:"<<bal<<"\n";
    }

    void saveToFile(const string &file) {
        ofstream outFile(file);
        if (outFile.is_open()) {
            outFile<<accNum<<"\n";
            outFile<<bal<<"\n";
            outFile.close();
            cout<<"Account details saved to file.\n";
        } else {
            cout<<"Error: Unable to open file for writing.\n";
        }
    }

    void loadFromFile(const string &file) {
        ifstream inFile(file);
        if (inFile.is_open()) {
            getline(inFile, accNum);
            inFile>>bal;
            inFile.close();
            cout<<"Account details loaded from file.\n";
        } else {
            cout<<"Error: Unable to open file for reading.\n";
        }
    }
};

int main() {
    string accNum;
    double initBal;

    cout<<"Enter account number:";
    cin>>accNum;
    cout<<"Enter initial balance:";
    cin>>initBal;

    BankAccount acc(accNum, initBal);

    int choice;
    double amt;
    string file = "accountDetails.txt";

    do {
        cout<<"\n1.Deposit\n2.Withdraw\n3.Display Details\n4.Save to File\n5.Load from File\n6.Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;

        switch (choice) {
        case 1:
            cout<<"Enter amount to deposit:";
            cin>>amt;
            acc.deposit(amt);
            break;
        case 2:
            cout<<"Enter amount to withdraw:";
            cin>>amt;
            acc.withdraw(amt);
            break;
        case 3:
            acc.display();
            break;
        case 4:
            acc.saveToFile(file);
            break;
        case 5:
            acc.loadFromFile(file);
            break;
        case 6:
            cout<<"Exiting...\n";
            break;
        default:
            cout<<"Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
