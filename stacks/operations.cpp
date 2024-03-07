#include<iostream>
using namespace std;


class stack{
    private:
    int arr[5];
    int top;
    public:
    stack(){
        int top = -1;
        for (int i = 0; i < 4; i++)
        {
            arr[i]=0;
        }   
    };

    bool isEmpty(){
        if (top == -1)
        {
          return true;
        }
        else{
            return false;
        }
        
    }
    bool isFull(){
        if (top == 4)
        {
           return true;
        }
        else{
            return false;
        }
        
    }
    void push(int val){
        if (isFull())
        {
            cout <<"the stack is full";
        }
        else{
            top++;
            arr[top]=val;
        }
        
    }
    int pop(){
        if (isEmpty())
        {
            cout <<"The array is empty";
        }
        else{
            int popValue=arr[top];
            arr[top]=0;
            top--;
            return popValue;
        }
        
    }
    int top(){
        if (isEmpty)
        {
          cout<<"The stack is empty";
        }
        else{
            return arr[top];
        }
        
    }
}