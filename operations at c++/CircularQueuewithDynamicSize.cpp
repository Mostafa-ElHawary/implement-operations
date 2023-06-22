#include <array>
#include <iomanip> // for setprecision()
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>
using namespace std;
#include <unordered_map>
#include <iostream>
using namespace std;



 class ArrayQueue{

  int front;
  int rear;
  int length;
  int* array;

 // isEmplty
    
    // check if length != Rear OR length == 0 OR Rear < length
   
 // isFull

    // check if Rear +1 = length

 // Enqueue
  
  

 // Dequeue
 // GetFront
 // GetRear
 // Resize

 
  public:
 
   ~ArrayQueue()
  {
    delete[] arr;
  };



};

int main() {

  ArrayQueue arr;
  // cout << arr.enqueq(10) << endl ;
  cout << arr.isFull();
  arr.enqueq(10);
  cout << GetElments()<< endl;
    return 0;
};