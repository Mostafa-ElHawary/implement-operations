
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

    void Insert(int val)
    {
        Node *newNode = new Node(val);
        if (isEmpty())
        {
            head = newNode;
            tail = newNode;
            len++;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            len++;
        }
    };

    void Print()
    {
        for (Node *cur = head; cur; cur = cur->next)
        {
            cout << cur->data << " => ";
        }
    }
};

int main()
{

   Linked list;
   // list.Insert(100);
    if (list.isEmpty()) {
      
        std::cout << "The list is empty." << std::endl;
    }else{
      std::cout << "The list is not empty." << std::endl;
    }

  
   int CountItems ;
  cout << "Inter count of items you need added : ";
  cin >> CountItems;
  for(int i = 0 ; i < CountItems ; i++){
    cout << "Inter  items " << i+1 << " : "<< endl;
    int val;
    cin >> val;
    list.Insert(val);
  }
  list.Len();
  list.Print();

    return 0;
}