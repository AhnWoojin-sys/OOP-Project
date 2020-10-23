#include <iostream>
#include <BankingSystem.h>

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
    cout<<"Success"<<endl;
    ac[accNum].accID = id;
    ac[accNum].balance = balance;
    ac[accNum].cusName = customerName;
    accNum++;
}
void DepositMoney(void){

}
void WithdrawMoney(void){

}  
void ShowAllAccInfo(void){

} //Show All Account info