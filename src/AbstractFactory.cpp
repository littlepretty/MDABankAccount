#include "AbstractFactory.hpp"

AbstractFactory::AbstractFactory():
        cacheDS(NULL), cacheSCDA(NULL),
        cacheIPMA(NULL), cacheIIMA(NULL),
        cacheTMAMA(NULL), cachePPA(NULL),
        cacheDMA(NULL), cacheDDA(NULL),
        cacheNFMA(NULL), cacheDBA(NULL),
        cacheDWA(NULL), cacheBMMA(NULL),
        cacheDPA(NULL) {
}

AbstractFactory::~AbstractFactory() {
}

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

StoreCardDataAction *ConcreteFactory1::createSCDA() {
        if (!cacheSCDA) {
                cacheSCDA = new SCDAction1();
        }
        return cacheSCDA;
}

StoreCardDataAction *ConcreteFactory2::createSCDA() {
        if (!cacheSCDA) {
                cacheSCDA = new SCDAction2();
        }
        return cacheSCDA;
}

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
        return cacheIPMA;}

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
        return cacheIIMA;}

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
        return cacheTMAMA;}

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
        return cachePPA;}

DisplyMenuAction *ConcreteFactory1::createDMA() {
        if (!cacheDMA) {
                cacheDMA = new DMAction1();
        }
        return cacheDMA;
}

DisplyMenuAction *ConcreteFactory2::createDMA() {
        if (!cacheDMA) {
                cacheDMA = new DMAction2();
        }
        return cacheDMA;}

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
        return cacheDDA;}

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


