#ifndef __BANKINGSYSTEM_H__
#define __BANKINGSYSTEM_H__
#define NAME_LEN 20

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);   
void ShowAllAccInfo(void); //Show All Account info

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

typedef struct
{
    int accID;
    int balance;
    char cusName[NAME_LEN];
}ACCOUNT;

#endif