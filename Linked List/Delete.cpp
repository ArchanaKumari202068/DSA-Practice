// Linked list implementation in C++

#include <iostream>
using namespace std;

// Creating a node
class Node {
   public:
  int value;
  Node* next;
};

//insert node at Begining
void insertBeg(Node**head,int newValue){
    //prepare a newNODE
    Node* newNode = new Node();
    newNode->value = newValue;

    //put it in begging of curr head
    newNode->next = *head;

    //Move head of the list to point to the newNode

    *head = newNode;


}

void deleteAtStart(Node* &head){
    Node* todelete = head;
    head = head->next;
    delete todelete;

}

// void deletion(Node*head,int newValue){
// Node* temp = head;
// while(temp->next->value!=newValue){
//     temp=temp->next;
// }
// Node* todelete = temp->next;
// temp->next= temp->next->next;
// delete todelete;
// }
            
int main() {
  Node* head;
  Node* one ;
  Node* two ;
  Node* three ;

  // allocate 3 nodes in the heap
  one = new Node();
  two = new Node();
  three = new Node();

  // Assign value values
  one->value = 1;
  two->value = 2;
  three->value = 3;

 
  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

//point head to the one 

head = one;

insertBeg(&head, -1);

insertBeg(&head,- 5);
// deletion(head,2);
deleteAtStart(head);

  // print the linked list value

  while (head != NULL) {
    cout << head->value<<"-> ";
    head = head->next;
  }
}







// void deletion(Node**head,int newValue){
// node* temp = head;
// while(temp->next->data!=newValue){
//     temp=temp->next;
// }
// node* todelete = temp->next;
// temp->next= temp->next->next;
// delete todelete;
// }


// // call
// deletetion(head,2);