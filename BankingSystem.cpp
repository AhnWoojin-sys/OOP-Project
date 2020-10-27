#include <iostream>
#include <cstring>
#include "BankingSystem.h"

using namespace std;


void ShowMenu(void){
    cout<<"-------- Menu --------"<<endl;
    cout<<"1. Make Account"<<endl;
    cout<<"2. DepositMoney"<<endl;
    cout<<"3. WithdrawMoney"<<endl;
    cout<<"4. Print All Acount Information"<<endl;
    cout<<"5. Exit"<<endl;
}

void MakeAccount(void){
    int id;
    int balance = 0;
    char customerName[NAME_LEN];
    cout<<"--------- Create Account ---------"<<endl;
    cout<<"ID : ";
    cin>>id;
    cout<<"Name : ";
    cin>>customerName;
    cout<<"Money to deposit : ";
    cin>>balance;
    cout<<"Success"<<endl;
    ac[accNum].accID = id;
    ac[accNum].balance = balance;
    strcpy(ac[accNum].cusName, customerName);
    accNum++;
}
void DepositMoney(void){
    int target;
    int DepositedMoney;
    int i = 0;
    cout<<"--------- Deposit ---------"<<endl;
    cout<<"Enter your id: ";
    cin>>target;
    for(int i=0;i<accNum;i++){
        if(ac[i].accID == target){
            cout<<"Enter your money to deposit : ";
            cin>>DepositedMoney;
            ac[i].balance += DepositedMoney;
            cout<<"balance of Account ["<<ac[i].accID<<"] : ";
            cout<<ac[i].balance<<endl;
            return;
        }
    }
    cout<<"Error : Do not exist account ID";
}
void WithdrawMoney(void){
    int target;
    int MoneyToWithdraw;
    int i = 0;
    cout<<"--------- Withdraw ---------"<<endl;
    cout<<"Enter your id: ";
    cin>>target;
    for(int i=0;i<accNum;i++){
        if(ac[i].accID == target){
            cout<<"Enter your money to withdraw : ";
            cin>>MoneyToWithdraw;
            ac[i].balance -= MoneyToWithdraw;
            cout<<"balance of Account ["<<ac[i].accID<<"] : ";
            cout<<ac[i].balance<<endl;
            return;
        }
    }
    cout<<"Error : Do not exist account ID";
}  
void ShowAllAccInfo(void){
    cout<<"--------- All account information ---------"<<endl;
    for(int i=0;i<accNum;i++){
        cout<<"accID : "<<ac[i].accID<<endl;
        cout<<"balance : "<<ac[i].balance<<endl;
        cout<<"Customer Name : "<<ac[i].cusName<<endl;
    }
} 