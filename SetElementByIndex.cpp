
#include <array>
#include <iomanip> // for setprecision()
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>

using namespace std;

class DymicArr
{
    int size;
    int *arr;

public:
    DymicArr(int size)
    {
        this->size = size;
        arr = new int[size];
    };

    int GetSize()
    {
        return size;
    }

    int getElement(int index)
    {
        if (index >= 0 && index < size)
        {
            return arr[index];
        }
        throw std::out_of_range("Index out of range");
    }

    void SetElementByIndex(int val, int ind)
    {

        if (val >= 0)
        {
            arr[ind] = val;
        }
    }

    ~DymicArr()
    {
        delete[] arr;
    }
};
int main()
{
    int size = 5;
    DymicArr ar(size);

    for (int i = 0; i < size; i++)
    {
        ar.SetElementByIndex(i + 1, i);
        cout << ar.getElement(i) << endl;
    };

    return 0;
}
// services.msc