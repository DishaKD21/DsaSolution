#include <iostream>
using namespace std;
class Node
{
public:
    int Data;
    Node *next;

    Node(int val)
    {
        Data = val;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head=nullptr;
    }
  
//insert-begining
void insertAtBegining(int data){
    Node* new_node= new Node(data);
    new_node->next=head;
    head=new_node;
}

//insert-end
void insertAtEnd(int data){
    Node* new_node=new Node(data);
    if(head==nullptr){
        head=new_node;
        return;
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=new_node;
}
//insert-middle
void insertInMiddle(int data, int position) {
        Node* new_node = new Node(data);
        if (position == 0 || head == nullptr) {
            insertAtBegining(data);
            return;
        }

        Node* temp = head;
        for (int i = 0; temp != nullptr && i < position - 1; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position out of bounds" << endl;
            delete new_node;
            return;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }
//search
bool search(int element){
     Node* temp=head;
while(temp!=nullptr){
    if(temp->Data==element){
        return true;
    }
  temp=temp->next;
}
return false;
}

//display
void display(){ 
if(head==nullptr){
    cout<<"the linkedlist does not exist";
}
 Node* temp=head;

    while(temp!=nullptr){
        cout<<temp->Data<<" ";
        temp=temp->next;
}
}
};

int main(){
 int element;
 LinkedList list;
 list.insertAtBegining(5);
 list.insertAtBegining(10);
 list.insertAtEnd(5);
 list.insertAtBegining(2);
 list.display();
 bool search=list.search(10);
 if(search==1){
    cout<<"element found"<<endl;
 }
 else{
    cout<<"element not found"<<endl;
 }
 cout<<search<<endl;
list.insertInMiddle(10, 1);
 list.display();
 return 0;
}