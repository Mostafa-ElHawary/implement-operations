#include <array>
#include <iomanip> // for setprecision()
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>

using namespace std;

class DeletPosition
{
private:
    int size;
    int *array;

public:
    DeletPosition(int initialSize)
    {
        this->size = initialSize;
        array = new int[size];
    }

    void pop(int indx)
    {

        cout << "New array : ";
        for (int i = 0; i < size; i++)
        {
            if (i != indx)
            {
                cout << array[i];
            }
        }
        cout << endl;
        cout << "return value : " << array[indx];
    };

    int &operator[](int index)
    {
        return array[index];
    }
    ~DeletPosition()
    {
        delete[] array;
    }
};

int main()
{

    int size = 5;
    DeletPosition arr(size);

    for (int i = 0; i < size; ++i)
    {
        arr[i] = i;
    }

    arr.pop(2);

    return 0;
}