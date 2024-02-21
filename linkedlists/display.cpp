#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
};

void displayList(Node* n){
    while (n != NULL)
    {
        cout << n->data << " ";
        n=n->next;
    }
    
}

int main(){
    Node* first = new Node();
    Node* second = new Node();
    Node*  third = new Node();
    Node* last = new Node();
    

    first->data=1;
    first->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=last;
    last->data=4;
    last->next=nullptr;
    displayList(first);
    return 0;
}