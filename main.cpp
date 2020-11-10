#include <iostream>
#include "BankingSystem.h"

using namespace std;

int main(void){
    int choice;
    while(true){
        ShowMenu();
        cout<<"Select : ";
        cin>>choice;
        cout<<endl;
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
                FreeObjectMemory();
                return 0;
            default:
                cout<<"Illegal Section..."<<endl;
        }
    }


    return 0;
}