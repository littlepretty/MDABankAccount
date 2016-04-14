#include <iostream>
#include "MDABankAccountConfig.h"
#include "ModelDrivenArch.hpp"
#include "AbstractFactory.hpp"
#include "Accounts.hpp"

using namespace std;

void testAccount1() {
        ConcreteFactory1* cf1 = new ConcreteFactory1();
        OutputProcessor* op1 = new OutputProcessor();
        op1->init(cf1);
        
        ModelDrivenArch* mda = new ModelDrivenArch(op1);
        Account1* a1 = new Account1(mda);
        a1->init(cf1);

        a1->withdraw(999.9); // do nothing
        a1->open("123", "A1", 450.0);
        a1->login("A1");
        a1->pin("321");
        a1->pin("123");
        a1->balance();
        a1->withdraw(30); // fail since below min
        a1->balance();
        a1->deposit(60.0);
        a1->balance();
        a1->withdraw(200.0);
        a1->lock("321");
        a1->lock("123");
        a1->balance(); // fail after locked
        a1->unlock("123");
        a1->balance();
        a1->deposit(600.0);
        a1->balance();
        a1->unlock("123"); // do nothing
        a1->logout();

        delete op1;
        delete a1;
        delete cf1;
        delete mda;
}

void testAccount2() {
        ConcreteFactory2* cf2 = new ConcreteFactory2();
        OutputProcessor* op2 = new OutputProcessor();
        op2->init(cf2);
        
        ModelDrivenArch* mda = new ModelDrivenArch(op2);
        Account2* a2 = new Account2(mda);
        a2->init(cf2);

        a2->OPEN(123, 10, 999);
        a2->LOGIN(11);
        a2->LOGIN(12);
        a2->LOGIN(15);
        a2->LOGIN(10);
        a2->PIN(124);
        a2->PIN(125);
        a2->PIN(123);
        a2->PIN(123);
        a2->BALANCE();
        a2->DEPOSIT(50);
        a2->BALANCE();
        a2->WITHDRAW(1100);
        a2->WITHDRAW(200); // fail since below zero
        a2->suspend();
        a2->BALANCE(); // OK for account2
        a2->PIN(522); // do nothing
        a2->activate();
        a2->close(); // do nothing
        a2->BALANCE();
        a2->DEPOSIT(100);
        a2->BALANCE();
        a2->suspend();
        a2->LOGOUT(); // do nothing
        a2->close();
        a2->BALANCE(); // do nothing

        delete op2;
        delete a2;
        delete cf2;
        delete mda;
}

int main(int argc, char *argv[]) {
        cout<<"BankAccount"<<" Version "<<
                MDABankAccount_VERSION_MAJOR<<"."<<
                MDABankAccount_VERSION_MINOR<<endl;

        cout<<"Test Account1\n";
        testAccount1();

        cout<<"Test Account2\n";
        testAccount2();
        return 0;
}
