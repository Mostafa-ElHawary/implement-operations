
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
            len++;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            len++;
        }
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
    // list.Insert(100);
    int CountItems;
    cout << "Inter count of items you need added : ";
    cin >> CountItems;
    for (int i = 0; i < CountItems; i++)
    {
        cout << "Inter  items " << i << " : ";
        int val;
        cin >> val;
        list.Insert(val);
    }
    list.Len();
    list.Print();
    list.getItemByIndex(3);
    list.Search(50);
    int InsertItems ;
    cout << "Inter the item for intsertion : ";
    cin >> InsertItems;
    list.InsertFront(InsertItems);
    list.Len();
  
    list.Print();
    return 0;
}