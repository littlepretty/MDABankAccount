/**
 * Declaration of DataStore.
 */

#ifndef _DATASTORE_HPP
#define _DATASTORE_HPP

#include <string>

using namespace std;

/**
 * Act as an unified stub/interface used by
 * Account1/2 and OutputProcessor
 */
class DataStore {
        public:
                DataStore() {};
                virtual ~DataStore() {};
};

/**
 * Data used in Account1. Notice the type of various
 * member variables.
 */
class DataStore1: public DataStore {
        private:
                /**
                 * Account1 information: PIN number,
                 * ID and balance amount
                 */
                string pin;
                string id;
                float balance;
                /**
                 * Temporal storage for events' parameters
                 */
                float temp_d;
                float temp_w;
                string temp_pin;
                string temp_id;
                float temp_balance;
        public:
                DataStore1() {};
                virtual ~DataStore1() {};

                /**
                 * Setters for all fields
                 */
                void setPin(string p) {
                        pin = p;
                }
                void setId(string i) {
                        id = i;
                }
                void setBalance(float b) {
                        balance = b;
                }
                void setTempD(float d) {
                        temp_d = d;
                }
                void setTempW(float w) {
                        temp_w = w;
                }
                void setTempPin(string p) {
                        temp_pin = p;
                }
                void setTempId(string i) {
                        temp_id = i;
                }
                void setTempBalance(float b) {
                        temp_balance = b;
                }

                /**
                 * Getters for all fields
                 */
                string getPin() {
                        return pin;
                }
                string getId() {
                        return id;
                }
                float getBalance() {
                        return balance;
                }
                float getTempD() {
                        return temp_d;
                }
                float getTempW() {
                        return temp_w;
                }
                string getTempPin() {
                        return temp_pin;
                }
                string getTempId() {
                        return temp_id;
                }
                float getTempBalance() {
                        return temp_balance;
                }
};

/**
 * Data used in Account2
 */
class DataStore2: public DataStore {
        private:
                /**
                 * Account1 information: PIN number,
                 * ID and balance amount
                 */
                int pin;
                int id;
                int balance;
                /**
                 * Temporal storage for events' parameters
                 */
                int temp_d;
                int temp_w;
                int temp_pin;
                int temp_id;
                int temp_balance;
        public:
                DataStore2() {};
                virtual ~DataStore2() {};

                /**
                 * Setters for all fields
                 */
                virtual void setPin(int p) {
                        pin = p;
                };
                virtual void setId(int i) {
                        id = i;
                };
                virtual void setBalance(int b) {
                        balance = b;
                };
                virtual void setTempD(int d) {
                        temp_d = d;
                };
                virtual void setTempW(int w) {
                        temp_w = w;
                };
                virtual void setTempPin(int p) {
                        temp_pin = p;
                };
                virtual void setTempId(int i) {
                        temp_id = i;
                };
                virtual void setTempBalance(int b) {
                        temp_balance = b;
                };

                /**
                 * Getters for all fields
                 */
                virtual int getPin() {
                        return pin;
                };
                virtual int getId() {
                        return id;
                };
                virtual int getBalance() {
                        return balance;
                };
                virtual int getTempD() {
                        return temp_d;
                };
                virtual int getTempW() {
                        return temp_w;
                };
                virtual int getTempPin() {
                        return temp_pin;
                };
                virtual int getTempId() {
                        return temp_id;
                };
                virtual int getTempBalance() {
                        return temp_balance;
                };
};

#endif

