#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node {
    char letter;
    Node *next_node;
};

void Push_node(Node *&, char); //Prototype

void Pop_node(Node *&);

int main() {    
    Node *stack = NULL;
    bool on = true;
    int option;
    char letter;

    while(on == true) {
        do{
            cout<<"1. Add a character"<<endl;
            cout<<"2. Show all characters"<<endl;
            cout<<"3. Exit"<<endl;
            cout<<"Choose an option: "; cin>>option;
        } while(option < 1 || option > 3);
        if(option == 1) {
            cout<<"Type a letter to add: "; cin>>letter;
            Push_node(stack, letter);
        } else if(option == 2) {
            cout<<"\tShowing all new data:\n";
            while(stack) {
                Pop_node(stack);
            }
        } else if(option == 3){
            on = false;
        }
        rewind(stdin);
    }


    return 0;
}

void Push_node(Node *&stack, char letter) { //Definition
    Node *new_node = new Node();
    new_node->next_node = stack;
    new_node->letter = letter;
    stack = new_node;
    cout<<"\t"<<letter<<" Successfully added\n";
}

void Pop_node(Node *&stack) {
    Node *aux = stack;
    stack = stack->next_node;
    cout<<aux->letter<<endl;
    delete aux;
}