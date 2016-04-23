#include <iostream>
#include "MDABankAccountConfig.h"
#include "ModelDrivenArch.hpp"
#include "AbstractFactory.hpp"
#include "Accounts.hpp"

using namespace std;

/**
 * Driver for running Account1
 */
void driverAccount1() {
        ConcreteFactory1* cf1 = new ConcreteFactory1();
        OutputProcessor* op1 = new OutputProcessor(cf1);
        ModelDrivenArch* mda = new ModelDrivenArch(op1);
        Account1* a1 = new Account1(mda, cf1);
        op1->init();
        a1->init();

        cout<< "                          ACCOUNT-1" << endl;
        cout<< "                  MENU of Operations" << endl;
        cout<< "          0. open(string, string, float)" << endl;
        cout<< "          1. login(string)" << endl;
        cout<< "          2. pin(string)" << endl;
        cout<< "          3. deposit(float)" << endl;
        cout<< "          4. withdraw(float)" << endl;
        cout<< "          5. balance()" << endl;
        cout<< "          6. logout()" << endl;
        cout<< "          7. lock(string)" << endl;
        cout<< "          8. unlock(string)" << endl;
        cout<< "          q. Quit the demo program" << endl;
        cout<< "          ACCOUNT-1 Execution" << endl;
        char cmd = '\0';
        while (cmd != 'q') {
                cout<< "  Select Operation: "<<endl;
                cout<< "0-open, 1-login, 2-pin, 3-deposit, 4-withdraw, "
                               "5-balance, 6-logout, 7-lock, 8-unlock"<<endl;
                cin>> cmd;
                string p, y, x;
                float a, w, d;
                switch (cmd) {
                        case '0':  // open
                                cout<<"  Operation:  open(string p, string y, float a)"<<endl;
                                cout<<"  Enter value of the parameter p:"<<endl;
                                cin>>p;
                                cout<<"  Enter value of the parameter y:"<<endl;
                                cin>>y;
                                cout<<"  Enter value of the parameter a:"<<endl;
                                cin>>a;
                                a1->open(p,y,a);
                                break;
                        case '1':  // login
                                cout<<"  Operation:  login(string y)"<<endl;
                                cout<<"  Enter value of the parameter y:"<<endl;
                                cin>>y;
                                a1->login(y);
                                break;
                        case '2':  // pin
                                cout<<"  Operation:  pin(string x)"<<endl;
                                cout<<"  Enter value of the parameter x"<<endl;
                                cin >> x;
                                a1->pin(x);
                                break;
                        case '3':  // deposit
                                cout<<"  Operation:  deposit(float d)"<<endl;
                                cout<<"  Enter value of the parameter d:"<<endl;
                                cin >> d;
                                a1->deposit(d);
                                break;
                        case '4':  // withdraw
                                cout<<"  Operation:  withdraw(float w)"<<endl;
                                cout<<"  Enter value of the parameter w:"<<endl;
                                cin >> w;
                                a1->withdraw(w);
                                break;
                        case '5':  // balance
                                cout<<"  Operation:  balance()"<<endl;
                                a1->balance();
                                break;
                        case '6':  // logout
                                cout<<"  Operation:  logout()"<<endl;
                                a1->logout();
                                break;
                        case '7':  // lock
                                cout<<"  Operation:  lock(string x)"<<endl;
                                cout<<"  Enter value of the parameter x:"<<endl;
                                cin>> x;
                                a1->lock(x);
                                break;
                        case '8':  // unlock
                                cout<<"  Operation:  unlock(string x)"<<endl;
                                cout<<"  Enter value of the parameter x:"<<endl;
                                cin>> x;
                                a1->unlock(x);
                                break;
                }
        }

        delete a1;
        delete mda;
        delete op1;
        delete cf1;
}

/**
 * Driver for running Account2
 */
void driverAccount2() {
        ConcreteFactory2* cf2 = new ConcreteFactory2();
        OutputProcessor* op2 = new OutputProcessor(cf2);
        ModelDrivenArch* mda = new ModelDrivenArch(op2);
        Account2* a2 = new Account2(mda, cf2);
        op2->init();
        a2->init();

        cout<< "                          ACCOUNT-2" << endl;
        cout<< "                  MENU of Operations" << endl;
        cout<< "          0. OPEN(int,int,int)" << endl;
        cout<< "          1. LOGIN(int)" << endl;
        cout<< "          2. PIN(int)" << endl;
        cout<< "          3. DEPOSIT(int)" << endl;
        cout<< "          4. WITHDRAW(int)" << endl;
        cout<< "          5. BALANCE()" << endl;
        cout<< "          6. LOGOUT()" << endl;
        cout<< "          7. suspend()" << endl;
        cout<< "          8. activate()" << endl;
        cout<< "          9. close()" << endl;
        cout<< "          q. Quit the demo program" << endl;
        cout<< "          ACCOUNT-2 Execution" << endl;
        char cmd = '\0';
        while (cmd != 'q') {
                cout<< "  Select Operation: "<<endl;
                cout<< "0-OPEN, 1-LOGIN, 2-PIN, 3-DEPOSIT, 4-WITHDRAW, "
                        "5-BALANCE, 6-LOGOUT, 7-suspend, 8-activate, 9-close"<<endl;
                cin>> cmd;
                int p, y, x, a, w, d;
                switch (cmd) {
                        case '0':  // OPEN
                                cout<<"  Operation:  OPEN(int p, int y, int a)"<<endl;
                                cout<<"  Enter value of the parameter p:"<<endl;
                                cin>>p;
                                cout<<"  Enter value of the parameter y:"<<endl;
                                cin>>y;
                                cout<<"  Enter value of the parameter a:"<<endl;
                                cin>>a;
                                a2->OPEN(p,y,a);
                                break;
                        case '1':  // LOGIN
                                cout<<"  Operation:  LOGIN(int y)"<<endl;
                                cout<<"  Enter value of the parameter y:"<<endl;
                                cin>>y;
                                a2->LOGIN(y);
                                break;
                        case '2':  // PIN
                                cout<<"  Operation:  PIN(int x)"<<endl;
                                cout<<"  Enter value of the parameter x"<<endl;
                                cin >> x;
                                a2->PIN(x);
                                break;
                        case '3':  // DEPOSIT
                                cout<<"  Operation:  DEPOSIT(int d)"<<endl;
                                cout<<"  Enter value of the parameter d:"<<endl;
                                cin >> d;
                                a2->DEPOSIT(d);
                                break;
                        case '4':  // WITHDRAW
                                cout<<"  Operation:  WITHDRAW(int w)"<<endl;
                                cout<<"  Enter value of the parameter w:"<<endl;
                                cin >> w;
                                a2->WITHDRAW(w);
                                break;
                        case '5':  // BALANCE
                                cout<<"  Operation:  BALANCE()"<<endl;
                                a2->BALANCE();
                                break;
                        case '6':  // LOGOUT
                                cout<<"  Operation:  LOGOUT()"<<endl;
                                a2->LOGOUT();
                                break;
                        case '7':  // suspend
                                cout<<"  Operation:  suspend()"<<endl;
                                a2->suspend();
                                break;
                        case '8':  // activate
                                cout<<"  Operation:  activate()"<<endl;
                                a2->activate();
                                break;
                        case '9':  // close
                                cout<<"  Operation:  close()"<<endl;
                                a2->close();
                                break;
                }
        }

        delete a2;
        delete mda;
        delete op2;
        delete cf2;
}

int main(int argc, char *argv[]) {
        cout<< "BankAccount" << " Version " <<
                MDABankAccount_VERSION_MAJOR<< "." <<
                MDABankAccount_VERSION_MINOR<< endl;

        char cmd = '\0';
        /**
         * Choose which account program to run
         */
        while (cmd != 'q') {
                cout<< "Please choose the type of ACCOUNT" << endl;
                cout<< "1. ACCOUNT-1" << endl;
                cout<< "2. ACCOUNT-2" << endl;
                cout<< "q. Quit the demo program" << endl;
                cin>> cmd;
                switch (cmd) {
                        case '1':
                                driverAccount1();
                                break;
                        case '2':
                                driverAccount2();
                                break;
                }
        }

        return 0;
}
