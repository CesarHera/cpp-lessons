#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node {
    int value;
    Node *next_node;
};

void Push_node(Node *&, int); //Prototype

void Pop_node(Node *&, int &);

int main() {
    struct Node *stack = NULL;
    int n;
    cout<<"Enter a number: "; cin>>n;
    Push_node(stack, n);
    
    cout<<"Enter a number: "; cin>>n;
    Push_node(stack, n);

    cout<<"Enter a number: "; cin>>n;
    Push_node(stack, n);

    cout<<"Enter a number: "; cin>>n;
    Push_node(stack, n);

    cout<<"\tDeleting data\n";

    Pop_node(stack, n);
    Pop_node(stack, n);
    Pop_node(stack, n);
    Pop_node(stack, n);

    cout<<endl; system("pause");
    return 0;
}

void Push_node(Node *& stack, int value) { //Definition
    struct Node *new_node = new Node();
    new_node->value = value;
    new_node->next_node = stack;
    stack = new_node;
    cout<<value<<" Added to stack\n";
}

void Pop_node(Node *&stack, int &value) {
    Node *aux = stack;
    value = aux->value;
    stack = aux->next_node;
    delete aux;
    cout<<value<<" Deleted"<<endl;
}