#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
// bool search(Node*& head, int target)
// {
//     Node *current = head;
//     while (current != nullptr)
//     {
//         if (current->data == target)
//         {
//             return true;
//         }
//         current = current->next;
//     }
//     return false;
// }
// int search(Node * head, int key){
//     Node* current = head;
//     int index=1;
//     while (current != NULL)
//     {
//         if(current->data == key){
//             return index;
//         }
//         current=current->next;
//         index++;
//     }
//     return -1;
    
// }

int getPosition(Node*& head,int target){
    Node* current=head;
    int position=1;
    while (current != nullptr)
    {
        if (current->data == target)
        {
            return position;
        }
        current=current->next;
        position++;
    }
    return -1;
    
}
int main()
{
    // Node *head = nullptr;
    // Node *first = new Node();
    // Node *second = new Node();
    // Node *third = new Node();

    // head = first;
    // first->data = 10;
    // first->next = second;
    // second->data = 20;
    // second->next = third;
    // third->data = 30;
    // third->next = nullptr;
    // cout << "Search for 20: " << (search(head, 20) ? "Found" : "Not found") << endl;
    // cout << "Search for 40: " << (search(head, 40) ? "Found" : "Not found") << endl;

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
    cout << "Position of 20: " << getPosition(head, 20) << endl;
    cout << "Position of 40: " << getPosition(head, 40) << endl;


    return 0;
}
