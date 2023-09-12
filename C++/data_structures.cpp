#include <iostream>
#include <vector>

using namespace std;

// Dynamic Array
/*
class DynamicArray {
private:
    int size_;
    int max_;
    int *arrayholder_;
public:
    DynamicArray() {
        this->size_ = 0;
        this->max_ = 5;
        this->arrayholder_ = new int[5];
    }
    ~DynamicArray() { delete[] this->arrayholder_; }

    int size() { return this->size_; }
    int& operator[](int i) {
        assert(i < this->size_);
        return this->arrayholder_[i];
    }
    void add(int n) {
        if(this->max_ < this->size_ + 1) {
            this->max_ *= 2;
            int* tmp_ = new int[this->max_];

            for(size_t i = 0; i < this->size_; i++)
                tmp_[i] = this->arrayholder_[i];
            
            delete[] this->arrayholder_;
            this->arrayholder_ = tmp_;
            this->arrayholder_[this->size_] = n;
            this->size_ += 1;
        }
        else {
            this->arrayholder_[this->size_] = n;
            this->size_ += 1;
        }
    }
};

int main() {
    DynamicArray darray;
    vector<int> varray;

    for(size_t i = 0; i <= 15; i++) darray.add(i);
    return 0;
}
*/

template <typename T>
class Node {
    public:
    T value;
    Node *next;
    Node *previous;

    Node(T value) { this->value = value; }
};

template <typename T>
class LinkedList {
    private:
    int size_;
    Node<T> *head_ = NULL;
    Node<T> *tail_ = NULL;
    Node<T> *itr_ = NULL;

    public:
    LinkedList() { this->size_ = 0; }

    void append(T value) {
        if (this->head_ == NULL) {
            this->head_ = new Node<T>(value);
            this->tail_ = this->head_;
        }
        else {
            this->tail_->next = new Node<T>(value);
            this->tail_->next->previous = this->tail_;
            this->tail_ = this->tail_->next;
        }
        this->size_ += 1;
    }

    void prepend(T value) {
        if (this->head_ == NULL) {
            this->head_ = new Node<T>(value);
            this->tail_ = this->head_;
        }
        else {
            this->head_->previous = new Node<T>(value);
            this->head_->previous->next = this->head_;
            this->head_ = this->head_->previous;
        }
        this->size_ += 1;
    }

    Node<T> * iterate() {
        if (this->itr_ == NULL) this->itr_ = this->head_; 
        else this->itr_ = this->itr_->next;
        return this->itr_;
    }

    T ptr() { return this->itr_->value; }

    void resetIterator() { this->tail_ = NULL; }
};


int main(int argc, char **argv)
{
    LinkedList<int> llist;
    llist.append(10);
    llist.append(12);
    llist.append(14);
    llist.append(16);
    llist.prepend(5);
    llist.prepend(4);
    llist.prepend(3);
    llist.prepend(2);
    llist.prepend(1);

    cout << "Printing Linked List" << endl;

    while(llist.iterate() != NULL) cout << llist.ptr() << "\t";
    cout << endl;

    return 0;
}