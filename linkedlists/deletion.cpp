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
///Deleting an element at the beginning

// void deleteAtBeginning(Node*& head){
   
//   if (head == nullptr)
//   {
//     cout <<"No node is present";
//     return;
//   }
//   Node*temp=head;
//   head=head->next;
//   delete temp;
  
   
// }


     //delting an element at the end
// void deleteAtEnd(Node*& head){
//   if(head == nullptr){
//     cout <<"Linkedlist is empty:";
//     return;
//   }

//   if (head->next == nullptr)
//   {
//      delete head;
//      head->next=nullptr;
//      return;
//   }
//   Node * temp=head;
//   while (temp->next->next != nullptr)
//   {
//   temp=temp->next;
//   }
//   delete temp->next;
//   temp->next=nullptr;
  
  
// }

      //deleting an element at the position

void deleteAtPosition(Node*& head,int position){
  if(head == NULL){
    cout <<"List is empty:";
    return;
  }
  Node* temp=head;
  if(position == 0){
    head=temp->next;
    delete temp;
    return;
  }
  for (int i = 0; temp !=nullptr && i < position -1; i++)
  {
    temp=temp->next;
  }

  if (temp == nullptr || temp->next == nullptr)
  {
    cout <<"THe position is out of the bound:\n";
    return;
  }
  Node* nextNode = temp->next->next;
  delete temp->next;
temp->next = nextNode;
  
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
    // deleteAtBeginning(head);

    cout << "Linked list after deleting the first node: ";
    displayList(head);
    return 0;
}