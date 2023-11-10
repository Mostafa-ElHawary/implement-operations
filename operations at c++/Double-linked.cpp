
#include <array>
#include <iomanip> // for setprecision()

#include <string.h>
#include <string>
#include <vector>

#include <unistd.h>
#include <iostream>
#include <type_traits>

#include <cmath>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};
class Linked
{
public:
    Node *head;
    Node *tail;
    int len;

    Linked() : head(nullptr), tail(nullptr), len(0) {}

    bool isEmpty()
    {
        return (head == nullptr);
    }       
    void Len()
    {
        cout << "Length of linked is: " << len << endl;
    }
// okay let's do some opearation 
// we need for operationns :
// like a insertions and deleting 

// insertions : insertFront / insertBack
// delete : DeleteFront / DeleteBack

   void insertFront(int val){
     // let's check if the linked list is empty or not
     Node* newNode = new Node(val);
     if(isEmpty()){
       head = newNode ; // oky 
       tail= newNode ; // too
       
     }
     // if there a node 
     else{
       newNode->next = head ;
       head->prev = newNode ;  
       head  = newNode;  
     }
     len++;
     // let's check it 
   }

   void insertBack(int val){
      // let's check if the linked list is empty or not
     Node* newNode = new Node(val);
     
     if(isEmpty()){
       head = newNode ; 
       tail = newNode ; // too :)
     }
     else{
       newNode->prev = tail ; 
       tail->next = newNode ; 
       tail = newNode ; 
     }
     len++;
     // let's check it 
     // okay it's work :)  20 in the back 
   }

   void  DeleteFront(){
     // let's check if the linked list is empty or not
     if(isEmpty()){
       cout << "Linked list is empty :(" << endl;
     }
      
     Node* nodeToDelet = head ; 
     if(head == tail){
       head = nullptr ; 
       tail = nullptr;
     }
     else{
       head = head->next ;
       // the prev
       head->prev = nullptr;
     }
     
     // we need delet the Node of frist or the head 
     delete nodeToDelet;
     // and the length -- 
     len--;
     // let's check it
   }

void DeletBack(){
  if(isEmpty()){
    cout << "Linked list is empty :(" << endl;
  }
  Node* nodeToDelete = tail;
  if(head == tail){
     head = nullptr ; 
     tail = nullptr;
   }
  else{
    tail = tail->prev;
    tail->next = nullptr;
    // we need delete the nodeToDelete or the tail
    
  }
  delete nodeToDelete;
  len--; // forget that :)
  // let's check it
}
void Print(){
  //let's use while loop
  Node* cur  = head ; 
  while(cur!= nullptr)
    // loop until cur is not null
     {std::cout << cur->data << " ";
    cur = cur->next ;
     }
  cout << endl ; 
}
 // Note : some thing wrong 
// Note : the error in lopping 
~Linked()
{
    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}
};

int main()
{

    Linked list;
  list.Len();
  // int ITEMSCOUNT ;
  // cout << "Inter the count of Items you need insert in back ";
  // for(int i = 1; i < ITEMSCOUNT ; i++ ){
  //   cout << "type item: " << i  << endl ;
  //    int val ;
  //    cin >> val ;
  //   list.insertBack(val);
  // }
  list.insertFront(10);
  list.insertBack(20);
  list.insertFront(30);
  list.insertBack(40);
  list.Print(); // will be 30 10 20 40 :)
  // list.DeleteFront();
  // list.Print(); // will be  10 20 40 :) okay 
  // list.DeletBack();
  // list.Print(); // will be  10 20  :) 
  //shit  sorry
  list.Len();
   // we need a printing :)
   

    return 0;
};
