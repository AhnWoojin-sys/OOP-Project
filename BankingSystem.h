#ifndef __BANKINGSYSTEM_H__
#define __BANKINGSYSTEM_H__
#define NAME_LEN 20

#include <iostream>
#include <cstring>

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);
void FreeObjectMemory(void);

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

class Account 
{
    private:
        int accID; // Customer ID
        int balance; // Customer Balance
        char * cusName; // Customer Name
    public:
        Account(int accID, int balance, char* cusName)
        : accID(accID), balance(balance){
            int cusNameLen = strlen(cusName) + 1;
            this->cusName = new char[cusNameLen];
            strcpy(this->cusName, cusName);
        }

        int GetAccountID() const;
        int GetBalance() const;
        char* GetCustomerName() const;
        void DepositMemberMoney(int money);
        void WithdrawMemberMoney(int money);

        ~Account(){
            delete []cusName;
        }
};

#endif