#ifndef __BANKINGSYSTEM_H__
#define __BANKINGSYSTEM_H__

#include <iostream>
#include <cstring>


enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

class Account 
{
    private:
        int accID; // Customer ID
        int balance; // Customer Balance
        char * cusName; // Customer Name
    public:
        Account(int accID, int balance,const char* cusName)
        : accID(accID), balance(balance){
            this->cusName = new char[strlen(cusName)+1];
            strcpy(this->cusName, cusName);
        }
        Account(const Account &copy)
        :accID(copy.accID), balance(copy.balance){
            cusName = new char[strlen(copy.cusName)+1];
            cusName = copy.cusName;
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

class AccountHandler{
    private:
        Account *ac[100];
        int accNum;
    public:
        AccountHandler(): accNum(0) {
            //empty
        }
        ~AccountHandler(){
            for(int i=0;i<accNum;i++){
                delete ac[i];
            }
        }
        void ShowMenu(void);
        void MakeAccount(void);
        void DepositMoney(void);
        void WithdrawMoney(void);
        void ShowAllAccInfo(void);
};

#endif