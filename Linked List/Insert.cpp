
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Linked list implementation in C++

#include <iostream>
using namespace std;

// Creating a node
class Node {
   public:
  int value;
  Node* next;
};



//insert node at Beginning
void insertBeg(Node**head,int newValue){
    //prepare a newNode
    Node* newNode = new Node();
    newNode->value = newValue;

    //put it in begging of curr head
    newNode->next = *head;

    //Move head of the list to point to the newNode

    *head = newNode;
}

// //insert node at END
// void insertEnd(Node**head,int newValue){
//     //Prepare a newNode 
//     Node* newNode =new Node();
//     newNode->value= newValue;
//     newNode->next =NULL;
//     // if LL is empty ,newNode will be head node
    
//     if(*head ==NULL){
//         *head =newNode;
//         return;
//     }
//     //Find the last node  
//     Node* last = *head;
//     while(last-> next!=NULL){
//         last =last ->next;
//     }

//     //Insert newNode after last node (at the end)

//     last->next =newNode;
// }


//Insert node Btw

void insertAfter(Node*previous , int newValue){
    // check if previous node is NULL
    if( previous==NULL){
        cout<<"previous can't be NULL";
        
    }
    //newNode
    Node* newNode =new Node();
    newNode->value = newValue;

    //insert newNode after prev
    newNode->next = previous->next;
    previous->next = newNode;
}
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
  head = one;
// insertEnd(&head,4);
insertAfter(two,7);
// insertBeg(&head, -1);
// insertBeg(&head, -5);
  // print the linked list value
   
  while (head != NULL) {
    cout << head->value;
    head = head->next;
  }
}