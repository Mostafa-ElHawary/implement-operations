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

    void InsertFront(int val)
    {
        // check if immpty || not empty
        Node *newNode = new Node(val);
        if (isEmpty())
        {
            head = newNode;
            tail = newNode;
        }
        else
        {

            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        len++;
    }

    void InsertBack(int val)
    {
        Node *newNode = new Node(val);
        if (isEmpty())
        {
            // head->next = newNode;
            // head = newNode;
            head = newNode;
            tail = newNode;
        }
        else
        {
            // head->next = newNode;
            // tail = newNode;
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        len++;
    }

    void DeleteFront()
    {
        if (isEmpty())
        {
            cout << "Empty linked list" << endl;
        }
        Node *nodeToDelete = head;
        if (head == tail)
        {
            // Special case: there's only one node in the list.
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            head = head->next;
            head->prev = nullptr;
            // head->next = nullptr;
        }

        delete nodeToDelete; // Optional: deallocate memory for the deleted node.
        len--;
    }

    void DeleteBack()
    {
        if (isEmpty())
        {
            cout << "Empty linked list" << endl;
        }
        Node *nodeToDelete = tail;
        if (head == tail)
        {
            // Special case: there's only one node in the list.
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            // tail= tail->prev;
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete nodeToDelete;
        len--;
    }
    void Print()
    {
        // Node* cur = head;
        // for(int i = 0 ; i < len  ;i++ ){
        //   cout << cur->data << " ";
        //   cur = cur->next;
        // }

        // int cout = 0 ;
        Node *cur = head;
        while (cur != nullptr)
        {
            std::cout << cur->data << " ";

            cur = cur->next;
        }
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
    list.InsertFront(10);
    list.InsertBack(20);
    list.InsertFront(30);
    list.InsertBack(40);
    list.InsertFront(50);
    list.DeleteBack();
    list.DeleteFront();
    list.DeleteFront();
    list.DeleteFront();
    list.Len();

    cout << "Printing : " << endl;
    list.Print();

    return 0;
};
