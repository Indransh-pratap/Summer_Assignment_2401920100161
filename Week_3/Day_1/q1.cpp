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



bool detectcycle(Node* head){

    Node* fast = head;
    Node* slow = head;

    while(fast!=NULL && fast->Next!=NULL){
        slow= slow->Next;
        fast = fast->Next->Next;

        if (slow == fast) {
            return true;
        }

    }
    return false;

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



   bool ans =  detectcycle(head);
   cout<<ans;

}

