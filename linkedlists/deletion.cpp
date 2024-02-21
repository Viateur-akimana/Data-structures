#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void displayList(Node* head){
    Node* current=head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current=current->next;
    }
    
}

void deleteAtBeginning(Node*& head){
   
  if (head == nullptr)
  {
    cout <<"No node is present";
    return;
  }
  Node*temp=head;
  head=head->next;
  delete temp;
  
   
}

int main(){
    Node* head = nullptr;

    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head = first;
    first->data = 10;
    first->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = nullptr;

    cout << "Original linked list: ";
    displayList(head);
    deleteAtBeginning(head);

    cout << "Linked list after deleting the first node: ";
    displayList(head);
    return 0;
}