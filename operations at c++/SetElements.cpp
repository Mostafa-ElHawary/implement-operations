#include <array>
#include <iomanip> // for setprecision()
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>

using namespace std;

  // here i need to write how can inssert val in array 
              // create a new array with a new add size ++
              // put the elemet of after the specificIndex in a new array call elAfterspecificIndex
              // loop on array untell the specificIndex
              // and added the element in a new array 
              // add in new array the new value 
              // loop on array is name elAfterspecificIndex and put the element in a new array 
class DynamicArray {

private:
    int* array;
    int size;

public:
    DynamicArray(int initialSize) {
        size = initialSize;
        array = new int[size];
    }

     // Add count element in array 
    void initializeElements() {
        for (int i = 0; i < size; ++i) {
            array[i] = i;
        }
    }

    int SetElements(std::string CheckPlace, int value) {
        string first = "frist";
        string last = "last";
        string index = "index";
     

            if (CheckPlace == first) {
                array[0] = value;
                return 1; // Indicate successful operation
            }
            if (CheckPlace == last) {
                array[size - 1] = value;
                return size - 1; // Return the last index of the array
            }
            if (CheckPlace == index) {
                int specificIndex;
                cout << "Enter the index: ";
                cin >> specificIndex;
                if (specificIndex >= 0 && specificIndex < size) {

                    array[specificIndex] = value;
                    return specificIndex;
                } else {
                    std::cout << "Invalid index!";
                    return -1; // Indicate invalid index
                }
            }
        

        return -1; // Indicate invalid option
    }

    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return array[index];
        }
        throw std::out_of_range("Index out of range");
    }

    ~DynamicArray() {
        delete[] array;
    }
};


int main() {
   int size = 5;
    DynamicArray arr(size);

    arr.initializeElements();
  
//  for (int i = 0; i < size ; ++i) {
//         // std::cout << i << "-" << arr[i] << " "  << endl;
//       std::cout << arr[i] << " " << endl;
//     }
  
    int elements = arr.SetElements("frist", 11);

    for (int i = 0; i < size ; ++i) {
        // std::cout << i << "-" << arr[i] << " "  << endl;
      std::cout <<  arr[i] << " " << endl;
    }

    return 0;
}
    // we need set element by three option 
       // 1- set with index 
       // 2- set at last index 
       // 3- set at frist index   

    // look like function is :
     // setElement(frist , val ) => it will add to frsit 
    // setElement(last , val ) => it will add to last
    // setElement(idnex , val ) => it will add to the spicific index

    // ==================================
