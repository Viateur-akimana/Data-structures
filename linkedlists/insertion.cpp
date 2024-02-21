#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

void displayList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void insertAtBeginning(Node *&head, int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(Node *&head, int position, int newData)
{
    if (position < 1)
    {
        cout << "Invalid position";
        return;
    }
    Node *newNode = new Node;
    newNode->data = newData;
    if (position == 1 && head == nullptr)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    if (int i = 1; i < position - 1 && temp != nullptr)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void insertAtEnd(Node*& head, int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    Node *temp = head;
    if(head == nullptr){
        head=newNode;
        return;
    }
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main()
{

    // Insert at the beginning
    // Node * head = nullptr;
    // insertAtBeginning(head,10);
    // insertAtBeginning(head,20);
    // insertAtBeginning(head,30);
    // insertAtBeginning(head,40);

    // insert at the any position

    // Node* head = nullptr;
    // insertAtPosition(head, 1, 10);
    // insertAtPosition(head, 2, 20);
    // insertAtPosition(head, 2, 30);
    // insertAtPosition(head, 4, 40);
    // displayList(head);

    // Insert at the end

    Node *head = nullptr;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    displayList(head);

    return 0;
}