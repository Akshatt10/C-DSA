#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void insertatposition(Node* &tail, Node* &head, int position, int d){

    //To insert at Start
    if(position ==1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt= 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //Inserting at Last Position
    if(temp -> next = NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main() {
    
    //created a new node
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 12);

    print(head);
    
    insertAtTail(tail, 15);
    print(head);

    insertatposition(tail,head, 3, 22);
    cout<< "head"<< head->data<<endl;
    cout<<"tail"<< tail->data<<endl;
    print(head); 
}