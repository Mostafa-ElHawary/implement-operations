
#include <array>
#include <iomanip> // for setprecision()
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>


 class Node{
public:
    int data ;
    Node* next;
    Node(int data): data(data)  , next(nullptr) {}
 };
 class Linked
 {
    public:
    Node* head ;
    Node* tail ;
    int len   ;

   Linked() : head(nullptr), tail(nullptr), len(0) {}


    bool isEmpty(){
       return (head == nullptr);
    }

    void Len(){
       cout << len << endl;
    }
    
void Insert(int val){
  Node* newNode = new Node(val);
  if(isEmpty())
  {
    head = newNode;
    tail = newNode;
    len++;
  }
  else{
    tail->next = newNode;
    tail = newNode;
    len++;

  }
}

 };

int main (){

   Linked list;
   // list.Insert(100);
    if (list.isEmpty()) {
        std::cout << "The list is empty." << std::endl;
    }else{
      std::cout << "The list is not empty." << std::endl;
    }

    return 0 ;}