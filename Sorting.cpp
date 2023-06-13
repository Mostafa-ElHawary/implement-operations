
#include <array>
#include <iomanip> // for setprecision()
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>

using namespace std;

class SortToLower
{
    int size;
    int *arr;

public:
    SortToLower(int size)
    {
        this->size = size;
        arr = new int[size];
    };

    void SetElementByIndex(int val, int ind)
    {

        if (ind >= 0 && ind < size)
        {
            arr[ind] = val;
        }
    }

    void SortingToLower()
    {

        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    int &operator[](int index)
    {
        if (index >= 0 && index < size)
        {
            return arr[index];
        }
        throw std::out_of_range("Index out of range");
    };
    ~SortToLower()
    {
        delete[] arr;
    }
};

int main()
{
    int size = 5;
    SortToLower ar(size);

    for (int i = 0; i < size; i++)
    {
        ar.SetElementByIndex(i + 1, i);
    };
    ar.SortingToLower();
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}