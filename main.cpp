#include <iostream>
#include "BankingSystem.h"

using namespace std;

int main(void){
    int choice;
    while(true){
        ShowMenu();
        cout<<"Select : ";
        cin>>choice;
        switch(choice){
            case MAKE:
                MakeAccount();
                break;
            case DEPOSIT:
                DepositMoney();
                break;
            case WITHDRAW:
                WithdrawMoney();
                break;
            case INQUIRE:
                ShowAllAccInfo();
                break;
            case EXIT:
                cout<<"bye."<<endl;
                return 0;
        }
    }
    return 0;
}