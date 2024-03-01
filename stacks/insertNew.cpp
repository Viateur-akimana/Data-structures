#include<iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size for the stack

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // Initialize top to -1
    }

    void insert(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "The stack is full";
        } else {
            top++;
            arr[top] = value;
        }
    }
};

int main() {
    Stack stack; // Creating an instance of the Stack class

    // Example usage:
    stack.insert(5);
    stack.insert(10);

    return 0;
}
