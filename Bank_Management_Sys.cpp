#include <iostream>
#include <stdio.h>
// #include <conio.h>
using namespace std;

class bank
{
    char name[100], father[100], addr[100], type[10];
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
    cin.getline(name, 100);
    cout << "\nEnter Your Father Name:" << endl;
    cin.ignore();
    cin.getline(father, 100);
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
    cout << "\nYour Father Name:" << father << endl;
    cout << "\nYour Address:" << addr << endl;
    cout << "\nType Of Account:" << type << endl;
    cout << "\nCurrent/Total Balance:" << balance << endl;
}


int main()
{
    bank obj;
    int ch;
    char option;

    cout << "\n<<-------------------------------------------------------------------->>" << endl;
    cout << "\n<<-----------------------Welcome To You in Your Bank------------------->>" << endl;
    cout << "\n<<-------------------------------------------------------------------->>" << endl;

    do
    {

        cout << "\n1.) Open Account:" << endl;
        cout << "\n2.) Deposit Money:" << endl;
        cout << "\n3.) Withdraw Money:" << endl;
        cout << "\n4.) Display Account:" << endl;
        cout << "\n5.) Exit-->:" << endl;

        cin >> ch;
        
            switch (ch)
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
                if (ch == 5)
                {
                    exit(0);
                }

            default:
                cout << "\nPlease Try Again And Correct Opttion" << endl;
                break;
            }

            cout << "\n Do you want to continue banking without exit? press (Y/N) !" << endl;
            cin>>option;
            // option = getch();

            if ((option == 'n' || option == 'N'))
            {
              exit(1);
            }
        } while (option == 'y' || option == 'Y');

            // getch();
        return 0;
    }
    