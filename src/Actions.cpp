#include <iostream>
#include "Actions.hpp"
#include "AbstractFactory.hpp"

using namespace std;

/**
 * Typically, actions for Account1 will use DataStore1 instance,
 * which is casted from ds
 */
void SCDAction1::storeData(DataStore* ds) {
        DataStore1 *ds1 = (DataStore1 *)ds;
        ds1->setPin(ds1->getTempPin());
        ds1->setId(ds1->getTempId());
        ds1->setBalance(ds1->getTempBalance());
}

/**
 * Similarly, actions for Account2 will use DataStore1 instance,
 * which is casted from ds
 */
void SCDAction2::storeData(DataStore* ds) {
        DataStore2 *ds2 = (DataStore2 *)ds;
        ds2->setPin(ds2->getTempPin());
        ds2->setId(ds2->getTempId());
        ds2->setBalance(ds2->getTempBalance());
}

/**
 * Incorrect PIN message
 */
void IPMAction1::incorrectPinMsg() {
        cout<<"\tIncorrect Pin Input at Account 1\n";
}

void IPMAction2::incorrectPinMsg() {
        cout<<"\tIncorrect Pin Input at Account 2\n";
}

/**
 * Incorrect ID message
 */
void IIMAction1::incorrectIdMsg() {
        cout<<"\tIncorrect ID Input at Account 1\n";
}

void IIMAction2::incorrectIdMsg() {
        cout<<"\tIncorrect ID Input at Account 2\n";
}

/**
 * Too many attempts message
 */
void TMAMAction1::tooManyAttemptMsg() {
        cout<<"\t#Attempts Exceed Maximum Allowed at Account1\n";
}

void TMAMAction2::tooManyAttemptMsg() {
        cout<<"\t#Attempts Exceed Maximum Allowed at Account2\n";
}

/**
 * Prompt for PIN message
 */
void PPAction1::promptPin() {
        cout<<"\tPlease Input PIN to Proceed at Account1\n";
}

void PPAction2::promptPin() {
        cout<<"\tPlease Input PIN to Proceed at Account2\n";
}

/**
 * Display menu on ATM
 */
void DMAction1::displayMenu() {
        cout<<"\tMenu at Account1\n";
        cout<<"\t\t1. Display Balance\n";
        cout<<"\t\t2. Make Deposit\n";
        cout<<"\t\t3. Withdraw\n";
        cout<<"\t\t4. Lock Account\n";
        cout<<"\t\t5. Unlock Account\n";
        cout<<"\t\t6. Logout\n";
}

void DMAction2::displayMenu() {
        cout<<"\tMenu at Account2\n";
        cout<<"\t\t1. Display Balance\n";
        cout<<"\t\t2. Make Deposit\n";
        cout<<"\t\t3. Withdraw\n";
        cout<<"\t\t4. Suspend Account\n";
        cout<<"\t\t5. Activate Account\n";
        cout<<"\t\t6. Logout\n";
        cout<<"\t\t7. Close\n";
}

/**
 * Make deposit to account
 */
void DDAction1::doDeposit(DataStore *ds) {
        DataStore1 *ds1 = (DataStore1 *)ds;
        ds1->setBalance(ds1->getBalance() + ds1->getTempD());
}

void DDAction2::doDeposit(DataStore *ds) {
        DataStore2 *ds2 = (DataStore2 *)ds;
        ds2->setBalance(ds2->getBalance() + ds2->getTempD());
}

/**
 * No fund message
 */
void NFMAction1::noFundMsg() {
        cout<<"\tZero Balance at Account1\n";
}

void NFMAction2::noFundMsg() {
        cout<<"\tZero Balance at Account2\n";
}

/**
 * Display current balance
 */
void DBAction1::displayBalance(DataStore *ds) {
        DataStore1 *ds1 = (DataStore1 *)ds;
        cout<<"\tCurrent Balance = $"<<ds1->getBalance()<<" at Account1\n";
}

void DBAction2::displayBalance(DataStore *ds) {
        DataStore2 *ds2 = (DataStore2 *)ds;
        cout<<"\tCurrent Balance = $"<<ds2->getBalance()<<" at Account2\n";
}

/**
 * Make withdraw
 */
void DWAction1::doWithdraw(DataStore *ds) {
        DataStore1 *ds1 = (DataStore1 *)ds;
        ds1->setBalance(ds1->getBalance() - ds1->getTempW());
}

void DWAction2::doWithdraw(DataStore *ds) {
        DataStore2 *ds2 = (DataStore2 *)ds;
        ds2->setBalance(ds2->getBalance() - ds2->getTempW());
}

/**
 * Below minimum balance message
 */
void BMMAction1::belowMinMsg() {
        cout<<"\tBalance Below Minimum Allowed at Account1\n";
}

void BMMAction2::belowMinMsg() {
        cout<<"\tBalance Below Minimum Allowed at Account2\n";
}


/**
 * Deduct penalty message
 */
void DPAction1::payPenalty(DataStore *ds) {
        DataStore1 *ds1 = (DataStore1 *)ds;
        ds1->setBalance(ds1->getBalance() - penalty);
}

void DPAction2::payPenalty(DataStore *ds) {
        DataStore2 *ds2 = (DataStore2 *)ds;
        ds2->setBalance(ds2->getBalance() - penalty);
}


/**
 * Configure all strategies with Abstract Factory Pattern
 */
void OutputProcessor::init() {
        ds = af->createDS();
        sda = af->createSDA();
        ipma = af->createIPMA();
        iima = af->createIIMA();
        tmama = af->createTMAMA();
        ppa = af->createPPA();
        dma = af->createDMA();
        dda = af->createDDA();
        nfma = af->createNFMA();
        dba = af->createDBA();
        dwa = af->createDWA();
        bmma = af->createBMMA();
        dpa = af->createDPA();
}

/**
 * Reclaim strategy objects
 */
OutputProcessor::~OutputProcessor() {
        delete sda;
        delete ipma;
        delete iima;
        delete tmama;
        delete ppa;
        delete dma;
        delete dda;
        delete nfma;
        delete dba;
        delete dwa;
        delete bmma;
        delete dpa;
};

void OutputProcessor::storeData() {
        sda->storeData(ds);
}

/**
 * As context class in Strategy Pattern,
 * OutputProcessor forwards actions to corresponding strategies.
 */
void OutputProcessor::incorrectPinMsg() {
        ipma->incorrectPinMsg();
}

void OutputProcessor::incorrectIdMsg() {
        iima->incorrectIdMsg();
}

void OutputProcessor::tooManyAttemptMsg() {
        tmama->tooManyAttemptMsg();
}

void OutputProcessor::promptPin() {
        ppa->promptPin();
}

void OutputProcessor::displayMenu() {
        dma->displayMenu();
}

void OutputProcessor::doDeposit() {
        dda->doDeposit(ds);
}

void OutputProcessor::noFundMsg() {
        nfma->noFundMsg();
}

void OutputProcessor::displayBalance() {
        dba->displayBalance(ds);
}

void OutputProcessor::doWithdraw() {
        dwa->doWithdraw(ds);
}

void OutputProcessor::belowMinMsg() {
        bmma->belowMinMsg();
}

void OutputProcessor::payPenalty() {
        dpa->payPenalty(ds);
}



