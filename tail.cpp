#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node {
    int value;
    Node *next_node;
};

void Append_tail(Node *&, Node *&, int);

bool Empty_tail(Node *&);

void Supr_tail(Node *&, Node *&, int &);

int main() {
    Node *start = NULL, *end = NULL;
    int value;
    
    cout<<"Enter a value: "; cin>>value;
    Append_tail(start, end, value);

    rewind(stdin);
    cout<<"Enter a value: "; cin>>value;
    Append_tail(start, end, value);

    cout<<"Enter a value: "; cin>>value;
    Append_tail(start, end, value);

    cout<<"\n\tDeleting values\n";

    while(start != NULL) {
        Supr_tail(start, end, value);
        cout<<value<<endl;
    }

    cout<<endl; system("pause");
    return 0;
}

void Append_tail(Node *&start, Node *&end, int value) {
    Node *new_node = new Node();
    new_node->value = value;
    new_node->next_node = NULL;

    if(Empty_tail(start)) {
        start = new_node;
    } else {
        end->next_node = new_node; //Eureka, that is why we use pointers, we can change the value of the last node through iterations.
    }
    
    end = new_node;

    cout<<"\t"<<value<<" Succesfully appended to tail"<<endl;
}

bool Empty_tail(Node *&start) {
    return (start == NULL)? true : false;
    // if(start == NULL) {
    //     return true;
    // } else {
    //     return false;
    // }
}

void Supr_tail(Node *&start, Node *&end, int &value) {
    Node *aux = new Node();

    aux = start;
    value = start->value;
    if(start == end) {
        start = NULL;
        end = NULL;
    } else {
        start = start->next_node;
    }

    delete aux;
}