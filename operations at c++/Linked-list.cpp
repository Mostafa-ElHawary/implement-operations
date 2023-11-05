
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

    void InsertEnd(int val)
    {
        Node *newNode = new Node(val);
        if (isEmpty())
        {
            head = newNode;
            tail = newNode; 
           
        }
        else
        { 
            tail->next = newNode;
            tail = newNode;
        }
            len++;
    };

    void InsertFront(int val)
    {
        Node *newNode = new Node(val);
        if (isEmpty())
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        len++;
    }

   // we need to check if the indx is valid ot is't tail
  // if the indx == len - 1 insert at end .. okay 

//  now if the insertion in the midle of linked list 
        // try to insert a val by indx
        // creat a curr ptr to traverse the list
        // like example we will insert it at indx 2  
        // if indx is 2 then we will insert it at indx 2
        // let's check if this is true 
       /// i'm thinking ...
      // out of scope !! 
    void InsertByIndx(int val, int indx ){
      // if the indx < 0 or > len
      if(indx < 0 || indx > len){
        cout << "Vailid Indx"<< endl ; 
        return; 
      }
      Node* newNode = new Node(val);
      
      // if the insertion to front 
      //mean indx == 0
      if(indx == 0  ){
        newNode->next = head ;
        head = newNode;
      }
      // if the insertion to end
       if(indx == len){
         tail->next = newNode;
         tail = newNode;
       }
      
        //len iT'S mean the length
      // if the indx < 0 or > len

      // if the indx ther in the midle in the linked list
      else {
        Node* curr = head; // ptr for traversing the list
        for(int i= 0; i < indx - 1;++i){

           curr = curr->next;
          
        } // we can use while loop
        newNode->next = curr->next;
        // if the indx is 2 then we will insert it at indx 2
        // so here 
        curr->next = newNode ;
      }
      len++;
      //let's try this solution

    };

    void Print()
    {
        for (Node *cur = head; cur; cur = cur->next)
        {
            cout << cur->data << " => ";
        }
        cout << endl;
    }


    void getItemByIndex(int indx)
    {
        if (!isEmpty())
        {
            Node *cur = head;
            int num = 0;
            while (cur != NULL)
            {
                if (num == indx && indx < len)
                {
                    cout << "Item index " << num << " is: " << cur->data << " " << endl;
                    break;
                }
                cur = cur->next;
                num++;
            }
        }
    }

    void Search(int val)
    {
        int indx = 0;
        for (Node *cur = head; cur; cur = cur->next, ++indx)
        {
            if (cur->data == val)
            {
                cout << "i found item " << cur->data << " in index : " << indx << " ";
                return;
            }
        }
        cout << "Did not find item " << val << endl;
    }

    void Swap()
    {
    }
};



int main()
{

   Linked list;

   int CountItems ;
    cout << "Inter count of items you need added : ";
    cin >> CountItems;
    for(int i = 0 ; i < CountItems ; i++){
      cout << "Inter  items " << i << " : ";
      int val;
      cin >> val;
      list.InsertEnd(val);
    }
    list.Len();
    list.Print();


    //  int size;
  //   int data;
  //   int countOfElements;

  //   std::cout << "Enter the size of the array: ";
  //   std::cin >> size;
  //   Array Arr(size);

  //   std::cout << "How many elements do you want to enter in this array: ";
  //   std::cin >> countOfElements;

  //   for (int i = 0; i < countOfElements; i++) {
  //       std::cout << "Enter the element: ";
  //       std::cin >> data;
  //       Arr.push(data);
  //   }

  //   std::cout << "Length after pushing: " << Arr.Len() << std::endl;
  //   std::cout << "Size after pushing: " << Arr.Size() << std::endl;

  //   std::cout << "Elements in the array: ";
  //   Arr.Display();

  //   // Insert an element at a specific index
  //   int valueToInsert, indexToInsert;
  //   std::cout << "\nEnter a value to insert: ";
  //   std::cin >> valueToInsert;
  //   std::cout << "Enter the index where you want to insert: ";
  //   std::cin >> indexToInsert;

  //   Arr.Insert(valueToInsert, indexToInsert);

  //   std::cout << "Updated array after insertion: ";
  //   Arr.Display();

  // // Remove an element from the array
  // int valueToRemove;
  // std::cout << "\nEnter a value to remove: ";
  //   std::cin >> valueToRemove;
  // Arr.RemoveVal(valueToRemove);
  // std::cout << "Updated array after removal: ";
  // Arr.Display();
  


    return 0;
};
