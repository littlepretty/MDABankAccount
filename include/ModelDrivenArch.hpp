/**
 * Declaration of MDA class and possible states
 * in MDA-EFSM, an implementation of decentralized
 * State Pattern.
 */

#ifndef _MODELDRIVENARCH_HPP
#define _MODELDRIVENARCH_HPP

#include <vector>
#include "Actions.hpp"

using namespace std;

/**
 * Enumeration of possible states, used as
 * State ID in changeState() operation
 */
typedef enum {
        START = 0,
        IDLE,
        CHECKPIN,
        READY,
        OVERDRAWN,
        LOCKED,
        SUSPENDED,
        CLOSED,
        TEMP
} StateEnum;

class ModelDrivenArch;

/**
 * Decentralized State Pattern
 */
class State {
        protected:
                ModelDrivenArch *context;
                OutputProcessor *op;
        public:
                State(ModelDrivenArch *ctxt,
                                OutputProcessor *o): context(ctxt), op(o) {};
                virtual ~State() {};

                /**
                 * Meta events of MDA's EFSM
                 */
                virtual void open() {};
                virtual void login() {};
                virtual void loginFail() {};
                virtual void logout() {};
                virtual void incorrectPin(int max) {};
                virtual void correctPin() {};
                virtual void aboveMin() {};
                virtual void belowMin() {};
                virtual void balance() {};
                virtual void withdraw() {};
                virtual void withdrawFail() {};
                virtual void withdrawBelowMin() {};
                virtual void deposit() {};
                virtual void lock() {};
                virtual void lockFail() {};
                virtual void unlock() {};
                virtual void unlockFail() {};
                virtual void suspend() {};
                virtual void activate() {};
                virtual void close() {};
};

/**
 * Start state
 */
class StartState: public State {
        public: 
                StartState(ModelDrivenArch *ctxt,
                                OutputProcessor *o): State(ctxt, o) {};
                virtual ~StartState() {};

                virtual void open();
};

/**
 * Idle state
 */
class IdleState: public State {
        public:
                IdleState(ModelDrivenArch *ctxt,
                                OutputProcessor *o): State(ctxt, o) {};
                virtual ~IdleState() {};

                virtual void login();
                virtual void loginFail();
};

/**
 * CheckPin state
 */
class CheckPinState: public State {
        public:
                CheckPinState(ModelDrivenArch *ctxt,
                                OutputProcessor *o): State(ctxt, o) {};
                virtual ~CheckPinState() {};

                virtual void correctPin();
                virtual void incorrectPin(int max);
                virtual void logout();
};

/**
 * Ready state
 */
class ReadyState: public State {
        public:
                ReadyState(ModelDrivenArch *ctxt,
                                OutputProcessor *o): State(ctxt, o) {};
                virtual ~ReadyState() {};

                virtual void balance();
                virtual void lockFail();
                virtual void lock();
                virtual void suspend();
                virtual void withdrawFail();
                virtual void withdraw();
                virtual void deposit();
                virtual void logout();
};

/**
 * Overdrawn state
 */
class OverdrawnState: public State {
        public:
                OverdrawnState(ModelDrivenArch *ctxt,
                                OutputProcessor *o): State(ctxt, o) {};
                virtual ~OverdrawnState() {};

                virtual void logout();
                virtual void balance();
                virtual void lockFail();
                virtual void lock();
                virtual void deposit();
                virtual void withdrawFail();
};

/**
 * Locked state
 */
class LockedState: public State {
        public:
                LockedState(ModelDrivenArch *ctxt,
                                OutputProcessor *o): State(ctxt, o) {};
                virtual ~LockedState() {};

                virtual void unlockFail();
                virtual void unlock();
};

/**
 * Suspended state
 */
class SuspendedState: public State {
        public:
                SuspendedState(ModelDrivenArch *ctxt,
                                OutputProcessor *o): State(ctxt, o) {};
                virtual ~SuspendedState() {};

                virtual void balance();        
                virtual void close();
                virtual void activate();
};

/**
 * Closed state
 */
class ClosedState: public State {
        public:        
                ClosedState(ModelDrivenArch *ctxt,
                                OutputProcessor *o): State(ctxt, o) {};
                virtual ~ClosedState() {};
};

/**
 * Temp state after deposit, withdraw, unlock etc.
 */
class TempState: public State {
        public:
                TempState(ModelDrivenArch *ctxt,
                                OutputProcessor *o): State(ctxt, o) {};
                virtual ~TempState() {};

                virtual void aboveMin();
                virtual void belowMin();
                virtual void withdrawBelowMin();
};


/**
 * Context of State Pattern
 */
class ModelDrivenArch {
        private:
                vector<State *> states; /* a list of all states */
                State *current; /* current state of the EFSM */
                int attempts; /* number of incorrect PIN attempts */
        public:
                ModelDrivenArch(OutputProcessor *op);
                virtual ~ModelDrivenArch();

                /**
                 * Used by current state to make transition
                 */
                void changeState(StateEnum stateID);

                /**
                 * Setter and getter for attempts
                 */
                void setAttempts(int a);
                int getAttempts();

                /**
                 * Meta events of MDA
                 */
                void open();
                void login();
                void loginFail();
                void logout();
                void incorrectPin(int max);
                void correctPin();
                void aboveMin();
                void belowMin();
                void balance();
                void withdraw();
                void withdrawFail();
                void withdrawBelowMin();
                void deposit();
                void lock();
                void lockFail();
                void unlock();
                void unlockFail();
                void suspend();
                void activate();
                void close();
};

#endif

