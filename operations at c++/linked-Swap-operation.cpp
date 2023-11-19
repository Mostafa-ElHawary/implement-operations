class Node{
  public:
    int data ;
    Node *next ;
    Node *prev ;
    Node(int data) : data(data), next(nullptr) , prev(nullptr) {};
};
class Linked{
public:
 Node* head ;
 Node* tail ;
 int len ;

 Linked() : head(nullptr), tail(nullptr), len(0){}; 

   bool isEmpty(){
    return head == nullptr ;
   }

void Len(){
cout <<  "The Length Of Index Is : " << len << endl ;
} 

  void add(int data){
    Node* newNode = new Node(data) ;
    if(isEmpty()){
      // ADD A NODE LIKE A HEAD 
      head = newNode ;
      tail = newNode ;
    }
    else{
      // add to back of linked list
      newNode->prev = tail;
      tail->next = newNode ;
      tail = newNode;
    }
    len++;
  }

 void Print()
{
 Node* cur = head ;
  while(cur!=nullptr){
  cout << cur->data;
  cur = cur->next ;
  cout << " -> " ;
  }
}
void Swap(Node* a , Node* b){
  
  Node* PrevA = a->prev;
  Node* NextA = a->next;
  Node* PrevB = b->prev;
  Node* NextB = b->next;

 // if(NextA == PrevB ){
 //   NextA =  NextB->prev ;
 //   NextB = PrevA ; 
 //   PrevA = NextB ;
 // }
  if(a == head){}
  if(b == head){}
  if(a == tail){}
  if(b == tail){}

}




};
int main()
{
  Linked list;
  list.isEmpty();
  list.add(10);
  list.add(20);

  list.Len();
  list.Print();
  // Stack s(5);
  // s.isEmpty();
  
  // s.Push(20);
  // s.Push(30);
  // s.isEmpty();
  // s.len();
  // s.Display();
   

    return 0;
};
