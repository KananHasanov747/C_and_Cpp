#include <iostream>

using namespace std;

// Implementing Stack using Array

#define MAX 1000

struct ArrayStack {
    int arr[MAX];
    
    ArrayStack() { top = -1; }

    void push(int);
    int pop();
    int peek();
    bool isEmpty();

private:
    int top;

};

void ArrayStack::push(int x) {
    if(top >= (MAX - 1)) cout << "Stack Overflow";
    else {
        arr[++top] = x;
        cout << x << "pushed into stack\n";
    }
}

int ArrayStack::pop() {
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = arr[top--];
        return x;
    }
}

int ArrayStack::peek() {
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = arr[top];
        return x;
    }
}

bool ArrayStack::isEmpty() { return top < 0; }