#include <iostream>
using namespace std;

template<class T>
class Node{
    public:
    Node* next = nullptr;
    T data;
    Node(T a){
        data = a;
    }
    void showlist(){
        Node<T> *curr = this;
        while (curr != nullptr){
            cout << curr-> data << " ";
            curr = curr -> next;
        }
    }
    template<class U>
    friend void Enqueue(Node<U>* &head, U data);
    template<class U>
    friend U Dequeue(Node<U>* &head);
};

template<class U>
void Enqueue(Node<U> *&head, U data){
    Node<U> *curr = head;
    while(curr->next != nullptr)
    curr = curr -> next;
    curr -> next = new Node<U>(data);
}
template<class U>
U Dequeue(Node<U> *&head){
    Node<U> *curr = head;
    if(curr == nullptr){
        cout << "Empty list!" << endl;
        exit(-1);
    }else{
        U output = curr->data;
        head = curr->next;
        delete curr;
        return output;
    }
}

int main(){
    Node<int> *head = new Node<int>(1);
    Enqueue(head, 2);
    Dequeue(head);
    Enqueue(head, 3);
    Dequeue(head);
    Enqueue(head, 4);
    Enqueue(head, 5);
    Dequeue(head);
    (*head).showlist();
    return 0;
}
