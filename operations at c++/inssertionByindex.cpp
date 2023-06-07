#include <array>
#include <iomanip> // for setprecision()
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>

using namespace std;

// class DynamicArray
// {

// private:
//     int *array;
//     int size;

// public:
//     DynamicArray(int initialSize)
//     {

//         size = initialSize;
//         array = new int[size];
//     }

//     int GetSiZe()
//     {
//         return size;
//     }
//     void setByindices(int index, int val)
//     {
//         array.IncrementArray();
//         for (int i = 0; i < index; ++i)
//         {
//             array[i] = i;
//         }
//         array[index] = val;
//         for (int i = index++; i < size; ++i)
//         {
//             array[index++] = i;
//         }
//     }

//     // what we need
//     void IncrementArray()
//     {
//         int *NewArray = new int[size++];
//     };

//     ~DynamicArray()
//     {
//         delete[] array;
//     }
// };

// int main()
// {
//    int size = 5 ;
//     DynamicArray arr(size);

//     arr.IncrementArray();
//     int x = arr.setByindices(2, 10);

//     for (int i = 0; i < size; ++i)
//     {
//         cout << arr[i] ;
//     }
//     // cout << arr.GetSiZe();

//     return 0;
// }

class DynamicArray
{
private:
    int *array;
    int size;

public:
    DynamicArray(int initialSize)
    {
        size = initialSize;
        array = new int[size];
    }

    int GetSize()
    {
        return size;
    }

    void setByIndices(int index, int val)
    {
        array[index] = val;
    }

    int getByIndex(int index)
    {
        return array[index];
    }

    void IncrementArray()
    {
        int *newArray = new int[size + 1];
        for (int i = 0; i < size; ++i)
        {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
        size++;
    }

    int& operator[](int index)
        {
            return array[index];
        }


    ~DynamicArray()
    {
        delete[] array;
    }
};

int main()
{
    int size = 5;
    DynamicArray arr(size);

    arr.IncrementArray();
     for(int j = 0 ; j < 6 ; ++j  )
     {
       arr[j] = j;
     }
    arr.setByIndices(2, 10);

    for (int i = 0; i < arr.GetSize(); ++i)
    {
        std::cout << arr.getByIndex(i) << " ";
    }

    return 0;
}