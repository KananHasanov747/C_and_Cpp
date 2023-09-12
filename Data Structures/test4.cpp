#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node()               : data(0), next(NULL) {}
    Node(int d)          : data(d), next(NULL) {}
    Node(int d, Node *n) : data(d), next(n)    {}
};

// void push(Node *head, int data) { head = new Node(data, head); }

int main() {
    Node *obj = NULL;
    obj = new Node(3, obj);
    obj = new Node(2, obj);
    obj = new Node(1, obj);
    // push(&obj, 3);
    // push(&obj, 2);
    // push(&obj, 1);

    while(obj) {
        cout << obj->data << ' ';
        obj = obj->next;
    }
    cout << endl;
}