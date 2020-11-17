#include <iostream>
#include <cstring>
#include "BankingSystem.h"

using namespace std;

Account *ac[100];
int accNum = 0;

int Account::GetAccountID() const {
    return accID;
}

int Account::GetBalance() const {
    return balance;
}

char* Account::GetCustomerName() const {
    return cusName;
}

void Account::DepositMemberMoney(int money){
    balance += money;
}

void Account::WithdrawMemberMoney(int money){
    balance -= money;
}

void AccountHandler::ShowMenu(void){
    cout<<"-------- Menu --------"<<endl;
    cout<<"1. Make Account"<<endl;
    cout<<"2. DepositMoney"<<endl;
    cout<<"3. WithdrawMoney"<<endl;
    cout<<"4. Print All Acount Information"<<endl;
    cout<<"5. Exit"<<endl;
}

void AccountHandler::MakeAccount(void){
    int id;
    int balance = 0;
    char *customerName;
    cout<<"--------- Create Account ---------"<<endl;
    cout<<"ID : ";cin>>id;
    cout<<"Money to deposit : ";cin>>balance;
    cout<<"Name : ";cin>>customerName;
    cout<<"Success"<<endl;
    ac[accNum] = new Account(id, balance, customerName);
    accNum++;
}
void AccountHandler::DepositMoney(void){
    int target;
    int DepositedMoney;
    int i = 0;
    cout<<"--------- Deposit ---------"<<endl;
    cout<<"Enter your id: ";
    cin>>target;

    for(int i=0;i<accNum;i++){
        if(ac[i]->GetAccountID() == target){
            cout<<"Enter your money to deposit : ";
            cin>>DepositedMoney;
            ac[i]->DepositMemberMoney(DepositedMoney);
            cout<<"balance of Account ["<<ac[i]->GetAccountID()<<"] : ";
            cout<<ac[i]->GetBalance()<<endl;
            return;
        }
    }
    cout<<"Error : Do not exist account ID";
}
void AccountHandler::WithdrawMoney(void){
    int target;
    int MoneyToWithdraw;
    int i = 0;
    cout<<"--------- Withdraw ---------"<<endl;
    cout<<"Enter your id: ";
    cin>>target;
    for(int i=0;i<accNum;i++){
        if(ac[i]->GetAccountID()== target){
            cout<<"Enter your money to withdraw : ";
            cin>>MoneyToWithdraw;
            if(ac[i]->GetBalance()> MoneyToWithdraw){ 
                cout<<"Entered money is many better than your haven money"<<endl;
                return;
            }
            ac[i]->WithdrawMemberMoney(MoneyToWithdraw);
            cout<<"balance of Account ["<<ac[i]->GetAccountID()<<"] : ";
            cout<<ac[i]->GetBalance()<<endl;
            return;
        }
    }
    cout<<"Error : Do not exist account ID";
}  
void AccountHandler::ShowAllAccInfo(void){
    cout<<"--------- All account information ---------"<<endl;
    for(int i=0;i<accNum;i++){
        cout<<"accID : "<<ac[i]->GetAccountID()<<endl;
        cout<<"balance : "<<ac[i]->GetBalance()<<endl;
        cout<<"Customer Name : "<<ac[i]->GetCustomerName()<<endl;
    }
} 
