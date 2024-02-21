#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
bool search(Node*& head, int target)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->data == target)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}
int main()
{
    Node *head = nullptr;
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head = first;
    first->data = 10;
    first->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = nullptr;
    cout << "Search for 20: " << (search(head, 20) ? "Found" : "Not found") << endl;
    cout << "Search for 40: " << (search(head, 40) ? "Found" : "Not found") << endl;

    return 0;
}
