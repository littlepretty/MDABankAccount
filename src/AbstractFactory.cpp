#include "AbstractFactory.hpp"

/**
 * Explicitly initialize cacheX to NULL
 */
AbstractFactory::AbstractFactory():
        cacheDS(NULL), cacheSCDA(NULL),
        cacheIPMA(NULL), cacheIIMA(NULL),
        cacheTMAMA(NULL), cachePPA(NULL),
        cacheDMA(NULL), cacheDDA(NULL),
        cacheNFMA(NULL), cacheDBA(NULL),
        cacheDWA(NULL), cacheBMMA(NULL),
        cacheDPA(NULL) {
}

/**
 * Abstract Factory is NOT responsible for reclaim
 * created/allocated objects.
 * For various of actions, OutputProcessor reclaims them
 * For data stores, Account reclaims them
 */
AbstractFactory::~AbstractFactory() {
}

/**
 * Account class and OutputProcessor class
 * should operate on the same instance of DataStore.
 */
DataStore *ConcreteFactory1::createDS() {
        if (!cacheDS) {
                cacheDS = new DataStore1();
        }
        return cacheDS;
}

DataStore *ConcreteFactory2::createDS() {
        if (!cacheDS) {
                cacheDS = new DataStore2();
        }
        return cacheDS;
}

/**
 * We can let factory return new instance of strategy/action
 * every time OutputProcessor requests it.
 * HOWEVER, in this project, one instance is enough.
 */

/**
 * Create concrete instance of StoreCardDataAction
 */
StoreDataAction *ConcreteFactory1::createSDA() {
        if (!cacheSCDA) {
                cacheSCDA = new SCDAction1();
        }
        return cacheSCDA;
}

StoreDataAction *ConcreteFactory2::createSDA() {
        if (!cacheSCDA) {
                cacheSCDA = new SCDAction2();
        }
        return cacheSCDA;
}

/**
 * Create concrete instance of IncorrectPinMsgAction
 */
IncorrectPinMsgAction *ConcreteFactory1::createIPMA() {
        if (!cacheIPMA) {
                cacheIPMA = new IPMAction1();
        }
        return cacheIPMA;
}

IncorrectPinMsgAction *ConcreteFactory2::createIPMA() {
        if (!cacheIPMA) {
                cacheIPMA = new IPMAction2();
        }
        return cacheIPMA;
}

/**
 * Create concrete instance of IncorrectIdMsgAction
 */
IncorrectIdMsgAction *ConcreteFactory1::createIIMA() {
        if (!cacheIIMA) {
                cacheIIMA = new IIMAction1();
        }
        return cacheIIMA;
}

IncorrectIdMsgAction *ConcreteFactory2::createIIMA() {
        if (!cacheIIMA) {
                cacheIIMA = new IIMAction2();
        }
        return cacheIIMA;
}

/**
 * Create concrete instance of TooManyAttemptMsgAction
 */
TooManyAttemptMsgAction *ConcreteFactory1::createTMAMA() {
        if (!cacheTMAMA) {
                cacheTMAMA = new TMAMAction1();
        }
        return cacheTMAMA;
}

TooManyAttemptMsgAction *ConcreteFactory2::createTMAMA() {
        if (!cacheTMAMA) {
                cacheTMAMA = new TMAMAction2();
        }
        return cacheTMAMA;
}

/**
 * Create concrete instance of PromptPinAction
 */
PromptPinAction *ConcreteFactory1::createPPA() {
        if (!cachePPA) {
                cachePPA = new PPAction1();
        }
        return cachePPA;
}

PromptPinAction *ConcreteFactory2::createPPA() {
        if (!cachePPA) {
                cachePPA = new PPAction2();
        }
        return cachePPA;
}

/**
 * Create concrete instance of DisplayMenuAction
 */
DisplayMenuAction *ConcreteFactory1::createDMA() {
        if (!cacheDMA) {
                cacheDMA = new DMAction1();
        }
        return cacheDMA;
}

DisplayMenuAction *ConcreteFactory2::createDMA() {
        if (!cacheDMA) {
                cacheDMA = new DMAction2();
        }
        return cacheDMA;
}

/**
 * Create concrete instance of DoDepositAction
 */
DoDepositAction *ConcreteFactory1::createDDA() {
        if (!cacheDDA) {
                cacheDDA = new DDAction1();
        }
        return cacheDDA;
}

DoDepositAction *ConcreteFactory2::createDDA() {
        if (!cacheDDA) {
                cacheDDA = new DDAction2();
        }
        return cacheDDA;
}

/**
 * Create concrete instance of NoFundMsgAction
 */
NoFundMsgAction *ConcreteFactory1::createNFMA() {
        if (!cacheNFMA) {
                cacheNFMA = new NFMAction1();
        }
        return cacheNFMA;
}

NoFundMsgAction *ConcreteFactory2::createNFMA() {
        if (!cacheNFMA) {
                cacheNFMA = new NFMAction2();
        }
        return cacheNFMA;
}

/**
 * Create concrete instance of DisplayBalanceAction
 */
DisplayBalanceAction *ConcreteFactory1::createDBA() {
        if (!cacheDBA) {
                cacheDBA = new DBAction1();
        }
        return cacheDBA;
}

DisplayBalanceAction *ConcreteFactory2::createDBA() {
        if (!cacheDBA) {
                cacheDBA = new DBAction2();
        }
        return cacheDBA;
}

/**
 * Create concrete instance of DoWithdrawAction
 */
DoWithdrawAction *ConcreteFactory1::createDWA() {
        if (!cacheDWA) {
                cacheDWA = new DWAction1();
        }
        return cacheDWA;
}

DoWithdrawAction *ConcreteFactory2::createDWA() {
        if (!cacheDWA) {
                cacheDWA = new DWAction2();
        }
        return cacheDWA;
}

/**
 * Create concrete instance of BelowMinMsgAction
 */
BelowMinMsgAction *ConcreteFactory1::createBMMA() {
        if (!cacheBMMA) {
                cacheBMMA = new BMMAction1();
        }
        return cacheBMMA;
}

BelowMinMsgAction *ConcreteFactory2::createBMMA() {
        if (!cacheBMMA) {
                cacheBMMA = new BMMAction2();
        }
        return cacheBMMA;
}

/**
 * Create concrete instance of DeductPenaltyAction
 */
DeductPenaltyAction *ConcreteFactory1::createDPA() {
        if (!cacheDPA) {
                cacheDPA = new DPAction1();
        }
        return cacheDPA;
}

DeductPenaltyAction *ConcreteFactory2::createDPA() {
        if (!cacheDPA) {
                cacheDPA = new DPAction2();
        }
        return cacheDPA;
}


