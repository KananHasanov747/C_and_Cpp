#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(auto x) {
        this->data = x;
        this->next = nullptr;
    }
};

struct LinkedList {
    Node* head;

    LinkedList() { head = nullptr; }

    bool isEmpty() { return !head; }

    void push(auto new_data) {
        /* allocate node */
        Node* new_node = new Node(new_data);
    
        /* link the old list of the new node */
        new_node->next = (*&head);
    
        /* move the head to point to the new node */
        (*&head) = new_node;
    }

    void append(auto new_data) {
        Node* new_node = new Node(new_data),
                  last = *head;

        if(*&head == NULL) *&head = new_node;
    
        while(last.next != NULL) {
            last = *(&last)->next;
        }
    
        last.next = new_node;
    }

    void pop() {
        if(!head) {
            cout << "Error: list is empty" << endl;
            exit(1); return;
        }

        Node* temp = head;
        head = head->next;
        free(temp);
    }

    bool search(auto target) {
        Node* current = head;
        while(current) {
            if(current->data == target) return true;
            current = current->next;
        }

        return false;
    }
};

int main() {
    LinkedList ll1;
    ll1.head = NULL;
    int x = 21;

    ll1.push(10);
    ll1.push(30);
    ll1.push(11);
    ll1.push(21);
    ll1.push(14);

    cout << ll1.search(21) << endl;


    return 0;
}