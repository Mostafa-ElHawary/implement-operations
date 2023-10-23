
#include <array>
#include <iomanip> // for setprecision()
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>

using namespace std;

#include <iostream>

class Array
{
private:
    int *item;
    int size;
    int len;

public:
    Array(int initialsize)
    {
        if (initialsize <= 0)
            cout << "Invalid size" << endl;
        size = initialsize;
        len = 0;
        item = new int[initialsize];
    }
    bool IsEmpty() const
    {
        return len == 0;
    }

    bool IsFull() const
    {
        return len == size;
    }
    void Size()
    {
        cout << "the array Size is : " << size << endl;
    }
    void Length()
    {
        cout << "the array Length is : " << len << endl;
    }

    void Append(int val)
    {

        if (len < size)
        {
            item[len] = val;
            ++len;
        }
        else
        {
            cout << "Array is full" << endl;
        }
    }
    void GetlastIndex()
    {
        if (len == 0)
        {
            cout << "Array is empty " << endl;
        }
        else
        {
            cout << "the last index is : " << item[len - 1] << endl;
        }
    }

    void Insert(int index, int val)
    {

        for (int i = len; i > index; i--)
        {
            item[i] = item[i - 1];
        }
        item[index] = val;
        len++;
    }
    void Display()
    {
        if (len == 0)
            cout << "Array is empty" << endl;
        for (int i = 0; i < len; i++)
        {
            cout << item[i] << " " << endl;
        }
    }

    void Remove(int index)
    {
        // Add a method to remove elements by index
        for (int i = index; i < len; i++)
        {
            item[i] = item[i + 1];
        }
        len--;
    }
    void Resize(int newsize)
    {
        if (newsize > size)
        {
            size = newsize;
            int *newitem = new int[newsize];
            for (int i = 0; i < len; i++)
            {
                newitem[i] = item[i];
            }
        }

        // Implement a mechanism to resize the array when it becomes full. You can create a new, larger array and copy the elements from the old array to the new one.
    }

    void Find(int indx)
    {
        // Implement a method to find the index of a specific value in the array.

        cout << "the index of " << indx << " is : " << item[indx] << endl;
    }

    ~Array()
    {
        delete[] item;
    }
};

int main()
{

    Array arr(10);
    arr.Fill();
    cout << "fill array is Done" << endl;
    // arr.Search(4);
    // cout << "Search array is Done" << endl;

    arr.display();
    cout << "display array is Done" << endl;

    arr.Insert(2, 4);
    arr.display();
    cout << "Insert array is Done" << endl;
    // arr.Append(6);
    // cout << "Append array is Done" << endl;
    // arr.display();
    // cout << "display array is Done" << endl;

    return 0;
};
