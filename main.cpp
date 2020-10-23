#include <iostream>
#include <BankingSystem.h>

using namespace std;

int main(void){
    int choice;
    ACCOUNT ac[100];
    int accNum = 0;
    while(true){
        ShowMenu();
        cout<<"Select : ";
        cin>>choice;
        switch(choice){
            case MAKE:
                break;
            case DEPOSIT:
                break;
            case WITHDRAW:
                break;
            case INQUIRE:
                break;
            case EXIT:
                cout<<"bye."<<endl;
                return 0;
                break;
        }
    }
    return 0;
}