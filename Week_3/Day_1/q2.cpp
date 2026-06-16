// linked list cycyle its solved using tortal fare algo or two pointer slow and fast

#include<iostream>
using namespace std;

struct Node
{
   int val;
   Node* Next;

   Node(int data) {
        val = data;
        Next = nullptr;
    }
};



Node* reverse_List(Node* head){
Node* prev = NULL;
       Node* temp = head;
       Node* front = NULL;
       while(temp!=NULL){
    front=temp->Next;
    temp->Next =prev;
    prev=temp;
    temp=front;
       }
       return prev;
    

}


Node* createNode(int data) {
    Node* newNode = new Node(data);
    return newNode;
}


int main(){

    Node* head = createNode(10);
    Node* first = createNode(20);
    Node* second = createNode(30);
    Node* third = createNode(10);

    head->Next = first;
    first->Next = second;
    second->Next = third;
    third->Next = NULL;



   Node* ans =  reverse_List(head);
   

}

