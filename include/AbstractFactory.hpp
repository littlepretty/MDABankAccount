/**
 * Declaration of abstract and concrete factories,
 * to form Abstract Factory Pattern
 */

#ifndef _ABSTRACTFACTORY_HPP
#define _ABSTRACTFACTORY_HPP

#include "DataStore.hpp"
#include "Actions.hpp"

/**
 * Abstract factory is ABSTRACT class, declaring
 * various of pure virtual functions that helps client
 * create/get different products
 */
class AbstractFactory {
        protected:
                /**
                 * Various objects created by this factory.
                 */
                DataStore *cacheDS;
                StoreDataAction *cacheSCDA;
                IncorrectPinMsgAction *cacheIPMA;
                IncorrectIdMsgAction *cacheIIMA;
                TooManyAttemptMsgAction *cacheTMAMA;
                PromptPinAction *cachePPA;
                DisplayMenuAction *cacheDMA;
                DoDepositAction *cacheDDA;
                NoFundMsgAction *cacheNFMA;
                DisplayBalanceAction *cacheDBA;
                DoWithdrawAction *cacheDWA;
                BelowMinMsgAction *cacheBMMA;
                DeductPenaltyAction *cacheDPA;
        public:
                AbstractFactory();
                virtual ~AbstractFactory();

                /**
                 * Create instances of various classes
                 */
                virtual DataStore *createDS() = 0;
                virtual StoreDataAction *createSDA() = 0;
                virtual IncorrectPinMsgAction *createIPMA() = 0;
                virtual IncorrectIdMsgAction *createIIMA() = 0;
                virtual TooManyAttemptMsgAction *createTMAMA() = 0;
                virtual PromptPinAction *createPPA() = 0;
                virtual DisplayMenuAction *createDMA() = 0;
                virtual DoDepositAction *createDDA() = 0;
                virtual NoFundMsgAction *createNFMA() = 0;
                virtual DisplayBalanceAction *createDBA() = 0;
                virtual DoWithdrawAction *createDWA() = 0;
                virtual BelowMinMsgAction *createBMMA() = 0;
                virtual DeductPenaltyAction *createDPA() = 0;
};

/**
 * Concrete factory used specially by Account1 instance.
 * MUST override pure virtual functions in AbstractFactory.
 */
class ConcreteFactory1: public AbstractFactory {
        public:
                ConcreteFactory1() {};
                virtual ~ConcreteFactory1() {};

                virtual DataStore *createDS();
                virtual StoreDataAction *createSDA();
                virtual IncorrectPinMsgAction *createIPMA();
                virtual IncorrectIdMsgAction *createIIMA();
                virtual TooManyAttemptMsgAction *createTMAMA();
                virtual PromptPinAction *createPPA();
                virtual DisplayMenuAction *createDMA();
                virtual DoDepositAction *createDDA();
                virtual NoFundMsgAction *createNFMA();
                virtual DisplayBalanceAction *createDBA();
                virtual DoWithdrawAction *createDWA();
                virtual BelowMinMsgAction *createBMMA();
                virtual DeductPenaltyAction *createDPA();
};

/**
 * Concrete factory used specially by Account2 instance
 * MUST override pure virtual functions in AbstractFactory.
 */
class ConcreteFactory2: public AbstractFactory {
        public:
                ConcreteFactory2() {};
                virtual ~ConcreteFactory2() {};
                
                virtual DataStore *createDS();
                virtual StoreDataAction *createSDA();
                virtual IncorrectPinMsgAction *createIPMA();
                virtual IncorrectIdMsgAction *createIIMA();
                virtual TooManyAttemptMsgAction *createTMAMA();
                virtual PromptPinAction *createPPA();
                virtual DisplayMenuAction *createDMA();
                virtual DoDepositAction *createDDA();
                virtual NoFundMsgAction *createNFMA();
                virtual DisplayBalanceAction *createDBA();
                virtual DoWithdrawAction *createDWA();
                virtual BelowMinMsgAction *createBMMA();
                virtual DeductPenaltyAction *createDPA();
};

#endif

