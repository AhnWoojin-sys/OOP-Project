#include <iostream>
#include "BankingSystem.h"

using namespace std;

int main(void){
    AccountHandler Handler;
    int choice;
    Handler.ShowMenu();
    while(true){
        cout<<"Select : ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case MAKE:
                Handler.MakeAccount();
                break;
            case DEPOSIT:
                Handler.DepositMoney();
                break;
            case WITHDRAW:
                Handler.WithdrawMoney();
                break;
            case INQUIRE:
                Handler.ShowAllAccInfo();
                break;
            case EXIT:
                return 0;
            default:
                cout<<"Illegal Section..."<<endl;
        }
    }


    return 0;
}