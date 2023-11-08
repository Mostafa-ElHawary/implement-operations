
#include <array>
#include <iomanip> // for setprecision()
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>



class Node
{
  public:
      int data;
      Node *next;
      Node(int data) : data(data), next(nullptr) {}
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
  
    void Push(int val){
       Node* newNode = new Node(val);
      //if empty
       if(isEmpty()){
         newNode->next = head;
         head = newNode;
         tail = newNode;
       }
       else{
         tail->next = newNode ; 
         tail = newNode;
       }
       //if not empty
       len++;
     }
  
   // func to get frist node
    void GetFrist(){
      if(isEmpty()){
        cout << "Linked is empty" << endl;
      }
      else{
        cout << "First node is: " << head->data << endl;
      }
    }
   // func to get last node
  
    void GetLast(){
  
      Node* current = head;
  
     if (current == nullptr ) {
         cout << "The list is empty." << endl;
         return;
     }
    
     while(current->next != nullptr){
       current = current->next;
     }
     cout << "Last node is: " << current->data << endl;
  
   }
  
    void Print(){
  
     Node* current = head;
  
     while (current != nullptr) {
         cout << current->data << " ";
         current = current->next;
     }
  
     cout << endl;
  };

    void DeletByIndex(int indx){
     if(isEmpty()){
       cout << "Linked is empty" << endl;
       
     }
     else{
       Node* current = head;
       Node* prev = nullptr;
       int count = 0;
 
       
     }
   }


// LET'S TRYYYYYYYYY :)
// OKY WE NEED TO GET THE MIDDLE ITEMS
  void GetMiddleItem(){
    // get the middle by using floor func 
    int Mid  = floor(len / 2); // the length of linked
    // need a count here 
    int count = 0;
     Node* current = head ; 
    // using while 
    while( current != nullptr){ // shit there a error
      // if cout == mid
      if(count == Mid){
        cout << "Middle node is : "<< current->data<< endl;
        break;
      }
      current = current->next;
      count++;
    }
  }

 // we will use another way to use  HEAD to solve it on leet code 
// okayyyyy we solve it 



 // func ideas //
 // swap 
 // insert after specific node
 // insert befor specific node
};

int main()
{

   Linked list;


  // PUSH ONE item :
  
  list.Push(1000);
  list.Push(20);
  list.Push(30);
  list.Push(40);
  list.Push(50);
  list.Push(60);
  list.Push(70);
  // CHECK IF THERE items :
  cout << "1: mean is Empty " << list.isEmpty() << endl;
  
  list.Len();

  // GET THE FRIST ITEM IN LINKED
  list.GetFrist();
  // GET THE LAST ITEM IN LINKED
  list.GetLast();
  // THERE AN ERROR IF THERE IS NO ITEMS IN LINKED
  // list.DeletByIndex(2);
  list.GetMiddleItem(); // 40 // by :)
  list.Print();
    return 0;
};
