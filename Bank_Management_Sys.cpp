#include <iostream>
#include <stdio.h>

using namespace std;

class bank
{
    char name[10], last[10], addr[100], type[10];
    float balance;

public:
    void open_account();
    void deposit_money();
    void withdrow_money();
    void display_account();
};

void bank::open_account()
{
    cout << "\nEnter Your Full Name:" << endl;
    cin.ignore();
    cin.getline(name, 10);
    cout << "\nEnter Your Father Name:" << endl;
    cin.ignore();
    cin.getline(last, 10);
    cout << "\nEnter Your Address" << endl;
    cin.ignore();
    cin.getline(addr, 100);
    cout << "\nType Of Account You Want To Open saving(s) or current(c):" << endl;
    cin.ignore();
    cin.getline(type, 100);
    cout << "\nEnter Your First Deposit Amount:" << endl;
    cin >> balance;

    cout << "\nYour Account Is Created Successfully !" << endl;
}

void bank::deposit_money()
{
    int d;
    cout << "\nEnter Amount Your Want to Deposit:" << endl;
    cin >> d;

    balance = balance + d;
    cout << "\nYour Current/Total Balance Is:" << balance << endl;
}

void bank::withdrow_money()
{
    float w;
    cout << "\nEnter Amount You Want To WithDraw" << endl;
    cin >> w;

    balance = balance - w;
    cout << "\nYour Reamaining Balance Is:" << balance << endl;
}

void bank::display_account()
{
    cout << "\nYour Name:" << name << endl;
    cout << "\nYour Father Name:" << last << endl;
    cout << "\nYour Address:" << addr << endl;
    cout << "\nType Of Account:" << type << endl;
    cout << "\nCurrent/Total Balance:" << balance << endl;
}

int main()
{

   
    bank obj;
    int u;
    char option;

    cout << "\n<<-------------------------------------------------------------------->>" << endl;
    cout << "\n<<----------------------Welcome to Al-Ahly Bank----------------------->>" << endl;
    cout << "\n<<-------------------------------------------------------------------->>" << endl;

    do
    {
       cout<< "\n*** Choose the operation you need in our bank ***"<<endl;
        cout << "\n1.) Open Account:" << endl;
        cout << "\n2.) Deposit Money:" << endl;
        cout << "\n3.) Withdraw Money:" << endl;
        cout << "\n4.) Display Account:" << endl;
        cout << "\n5.) Exit-->:" << endl;

        cin >> u;

        switch (u)
        {
        case 1:
            cout << "\n1.) Open Account:" << endl;
            obj.open_account();
            break;
        case 2:
            cout << "\n2.) Deposit Money:" << endl;
            obj.deposit_money();
            break;
        case 3:
            cout << "n3.) Withdraw Money:" << endl;
            obj.withdrow_money();
            break;
        case 4:
            cout << "n4.) Display Account:" << endl;
            obj.display_account();
            break;
        case 5:
            if (u == 5)
            {
                exit(0);
            }

        default:
            cout << "\nPlease Try Again And Correct Opttion" << endl;
            break;
        }

        cout << "\n Do you want to continue banking without exit? press (Y/N) !" << endl;
        cin >> option;

        if ((option == 'n' || option == 'N'))
        {
            exit(1);
        }
    } while (option == 'y' || option == 'Y');
    return 0;
}
