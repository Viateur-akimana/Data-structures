#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *reverseLinkedList(Node *&head)
{
    Node *prev = nullptr;
    Node *current = head;
    Node *next = NULL;

    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;

    return head;
};

void append(Node *&head, int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = nullptr;
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void displayList(Node *&head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = nullptr;
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);

    std::cout << "Original linked list: \n";

    head = reverseLinkedList(head);

    std::cout << "Reversed linked list: \n";
    displayList(head);

    return 0;
}