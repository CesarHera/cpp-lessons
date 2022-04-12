#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Bank_account
{
    char name[20];
    int balance;
    Bank_account *next;
};

void Append_queue(Bank_account *&, Bank_account *&, char [], int);
void Fill_data(char (&)[], int &);
void Supr_queue(Bank_account *&, Bank_account *&);

int main() {
    Bank_account *start = NULL, *end = NULL;
    char name[20] = "pepe";
    int balance = 20, option;
    bool on = true;

    do{
        do{
            cout<<"__________________________\n";
            cout<<"|________WELCOME_________|\n";
            cout<<"1. Add an account\n";
            cout<<"2. Show newest accounts\n";
            cout<<"3. Exit\n";
            cout<<"Choose an option: "; cin>>option;
            rewind(stdin);
        } while(option < 1 || option > 3);
        if(option == 1) {
            system("cls"); //Cleaning terminal

            cout<<"Owner's name: "; cin.getline(name, 20, '\n');
            cout<<"Balance: "; cin>>balance;
            rewind(stdin);
            Append_queue(start, end, name, balance);

            system("pause"); system("cls");
        } else if(option == 2) {
            system("cls"); 

            while(start != NULL) {
                rewind(stdout);
                Supr_queue(start, end);
                rewind(stdin);
            }
            
            system("pause"); system("cls"); 
        } else if(option == 3) {
            system("cls"); 

            cout<<"__________________________\n";
            cout<<"|__________BYE___________|\n";
            on = false;

            system("pause"); system("cls");
        }
    } while(on == true);


    return 0;
}

void Append_queue(Bank_account *&start, Bank_account *&end, char name[20], int balance) {
    Bank_account *new_account = new Bank_account();
    strcpy(new_account->name, name);
    new_account->balance = balance;

    if(start == NULL) {
        start = new_account;
    } else {
        end->next = new_account;
    }
    end = new_account;

    cout<<"\t"<<name<<" added succesfully.\n";
}

// void Fill_data(char (& name)[20], int &balance) {
//     cout<<"Owner's name: "; cin.getline(name, 20, '\n');
//     cout<<"Balance: "; cin>>balance;
//     rewind(stdin);
// }

void Supr_queue(Bank_account *&start, Bank_account *&end) {
    Bank_account *aux = new Bank_account();
    aux = start;

    if(start == end){
        start = NULL;
        end = NULL;
    } else {
        start = start->next;
    }

    cout<<"\t\nAccount:\n";
    cout<<"Name: "<<aux->name<<endl;
    cout<<"Balance: "<<aux->balance<<endl;

    delete aux;
}