
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

    void insertFront(int val)
    {
        // let's check if the linked list is empty or not
        Node *newNode = new Node(val);
        if (isEmpty())
        {
            head = newNode; // oky
            tail = newNode; // too
        }
        // if there a node
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        len++;
        // let's check it
    }
    void insertBack(int val)
    {
        // let's check if the linked list is empty or not
        Node *newNode = new Node(val);

        if (isEmpty())
        {
            head = newNode;
            tail = newNode; // too :)
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        len++;
        // let's check it
        // okay it's work :)  20 in the back
    }
    void DeleteFront()
    {
        // let's check if the linked list is empty or not
        if (isEmpty())
        {
            cout << "Linked list is empty :(" << endl;
        }

        Node *nodeToDelet = head;
        if (head == tail)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            head = head->next;
            // the prev
            head->prev = nullptr;
        }

        // we need delet the Node of frist or the head
        delete nodeToDelet;
        // and the length --
        len--;
        // let's check it
    }
    void DeleteBack()
    {
        if (isEmpty())
        {
            cout << "Linked list is empty :(" << endl;
        }
        Node *nodeToDelete = tail;
        if (head == tail)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            tail = tail->prev;
            tail->next = nullptr;
            // we need delete the nodeToDelete or the tail
        }
        delete nodeToDelete;
        len--; // forget that :)
               // let's check it
    }
    void FindMiddle()
    {
        int Mid = floor(len / 2);
        int indx = 0;
        Node *cur = head;
        while (cur != nullptr)
        {
            if (indx == Mid)
            {
                cout << "The middle element is : " << cur->data << endl;
            }
            cur = cur->next;
            indx++;
        };
    }

    void GetNextNode(int indx)
    {
        // we need to use while loop
        if (len == 0)
            cout << "Linked list is empty :(" << endl;
        if (indx > len || indx < 0)
            cout << "Index is out of range :(" << endl;
        if (indx + 1 == len)
            cout << "Index is out of range :(" << endl;
        Node *cur = head;
        int count = 0;
        // let's check if count < indx or != null
        while (cur != nullptr)
        { // okay
            if (count == indx)
                cout << "The next node is : " << cur->next->data << endl;
            cur = cur->next;
            count++;
        }
    }

    void GetPrevNode(int indx)
    {
        // same thing
        // we need to use while loop
        if (len == 0)
            cout << "Linked list is empty :(" << endl;
        if (indx > len || indx < 0)
            cout << "Index is out of range :(" << endl;
        if (indx + 1 == len)
            cout << "Index is out of range :(" << endl;
        Node *cur = head;
        int count = 0;
        // let's check if count < indx or != null
        while (cur != nullptr)
        { // okay
            if (count == indx)
                cout << "The next node is : " << cur->prev->data << endl;
            cur = cur->next;
            count++;
        }
    }

    int GetHead()
    {
        if (isEmpty())
            cout << "Linked list is empty :(" << endl;
        // cout << head->data << endl;
        return head->data;
    }
    int GetTail()
    {
        if (isEmpty())
            cout << "Linked list is empty :(" << endl;
        // cout  << tail->data << endl;
        return tail->data;
    }
    void InsertByIndx(int val, int indx)
    {
        // any way we need this newNode
        Node *newNode = new Node(val);
        // frist let's check if the indx is vaild insx
        if (indx < 0 || indx > len)
            cout << "Invalid Index :(" << endl;

        if (indx == 0)
            insertFront(val); // mean will insert Node in the  Front of linked list

        if (indx == len)
            insertBack(val); // will insert it in the Back of Node
        else
        {
            // insert at a specific indx
            // we need current and count of index
            Node *cur = head;
            int count = 0; // using while
            while (cur != nullptr && count < indx)
            { //   thinking :)
                cur = cur->next;
                count++;

                // like example if will insert at indx 1
            }
            newNode->next = cur;
            newNode->prev = cur->prev;
            cur->prev->next = newNode;
            cur->prev = newNode;
        }
        len++;
        // let's check it  it's work don't worry
    }

    void DeleteByIndx(int indx)
    {

        // at the nsertion by index we use the insert front func and insert back func
        // now we will use delet back and delet front function at the deleting by indx :)

        // didn't need a anew Node sure

        // frist let's check if the indx is vaild insx
        if (indx < 0 || indx > len)
            cout << "Invalid Index :(" << endl;

        if (indx == 0)
            DeleteFront(); // mean will insert Node in the  Front of linked list

        if (indx == len)
            DeleteBack(); // will insert it in the Back of Node
        Node *cur = head;
        int count = 0; // using while
        while (cur != nullptr)
        {

            if (count == indx)
            {
                cur->prev->next = cur->next;
                cur->next->prev = cur->prev;
                // we will delete the node
                delete cur;
                len--;
                break;
            }
            cur = cur->next; // okaay let's check i t
            count++;
        }
    }

    void DeletByVal(int val)
    {

        if (val < 0 || val > len)
            cout << "Invalid val :(" << endl;

        if (len == 0)
            DeleteFront();

        if (val == GetTail())
            DeleteBack();
        Node *cur = head;
        int count = 0; // using while
        while (cur != nullptr)
        {

            if (val == cur->data)
            {
                cur->prev->next = cur->next;
                cur->next->prev = cur->prev;

                delete cur;
                len--;
                break;
            }
            cur = cur->next;
            count++;
        }
    }
    void getPosition(int val){
        Node* cur = head ;
    int count = 0 ;
    while(cur!=nullptr ){
        if(cur->data == val){
        cout << "Index of " << val << " is : " << count << "\n";
        
        }
        cur = cur->next ;
        count++ ;
    }
    }

    void Print()
    {
        // let's use while loop
        Node *cur = head;
        while (cur != nullptr)
        // loop until cur is not null
        {
            std::cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }

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

    list.insertBack(10); // 0
    list.insertFront(20);
    list.insertBack(30); // 1
    list.insertFront(40);
    list.insertBack(50); // 2
    list.insertFront(60);
    list.insertBack(70);
    list.Print(); // will be 30 10 20 40 :)
    list.Len();
    list.GetNextNode(2); // it's true
    list.GetPrevNode(2);
    list.FindMiddle();
    list.InsertByIndx(100, 2); // it's work :)
    list.DeleteByIndx(3);      // will delet 20

    list.Print();
    // list.DeleteFront();
    // list.Print(); // will be  10 20 40 :) okay
    // list.DeletBack();
    // list.Print(); // will be  10 20  :)
    // shit  sorry
    // list.InsertByIndx(100,4);
    // list.Print();
    // list.FindMiddle();
    // we need a printing :)

    return 0;
};
