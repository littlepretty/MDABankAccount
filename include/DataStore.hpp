#ifndef _DATASTORE_HPP
#define _DATASTORE_HPP

#include <string>

using namespace std;

/**
 * Define member variables without specifying type
 */
class DataStore {
        public:
                DataStore() {};
                virtual ~DataStore() {};

                /**
                 * pin
                 *//*
                virtual void setPin(int p) {};
                virtual int getPin() {return 0;};

                *//**
                 * id
                 *//*
                virtual void setId(int i) {};
                virtual int getId() {return 0;};

                *//**
                 * balance
                 *//*
                virtual void setBalance(int b) {};
                virtual int getBalance() {return 0;};

                *//**
                 * temp_d
                 *//*
                virtual void setTempD(int d) {};
                virtual int getTempD() {return 0;};

                *//**
                 * temp_w
                 *//*
                virtual void setTempW(int w) {};
                virtual int getTempW() {return 0;};

                *//**
                 * temp_pin
                 *//*
                virtual void setTempPin(int p) {};
                virtual int getTempPin() {return 0;};

                *//**
                 * temp_id
                 *//*
                virtual void setTempId(int i) {};
                virtual int getTempId() {return 0;};

                *//**
                 * temp_balance
                 *//*
                virtual void setTempBalance(int b) {};
                virtual int getTempBalance() {return 0;};*/
};

/**
 * Data used in Account1
 */
class DataStore1: public DataStore {
        private:
                string pin;
                string id;
                float balance;
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
                int pin;
                int id;
                int balance;
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

