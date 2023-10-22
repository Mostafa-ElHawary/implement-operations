
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
    int size;
    int len;
    int *items;

public:
    Array(int siz)
    {
        len = 0;
        size = siz;
        items = new int[siz];
    }

    void Fill()
    {
        int count;
        cout << "inter your count of element" << endl;
        cin >> count;
        if (count > size)6
        {
            cout << "this num is large";
        }
        else
        {
            for (int i = 0; i < count; i++)
            {
                cout << "inter your element" << i << endl;
                cin >> items[i];
                len++;
            }
        }
    };

    void display()
    {
        for (int i = 0; i < len; i++)
        {
            cout << items[i] << "\t";
        }
    };

    int Search(int val)
    {
        for (int i = 0; i < len; i++)
        {
            if (items[i] == val)
            {
                cout << "found at index " << i << endl;
            }
        }
        // cout << "not found" << endl;
    };
    void Append(int val)
    {
        if (len < size)
        {
            items[len] = val;
            len++;
        }
        else
        {
            cout << "array is full" << endl;
        }
    }

    void Insert(int index, int val)
    {
        //          8     5
        for (int i = len; i > index; i--)
        {
            items[len] = items[i - 1];
            // 5  9    =     90
        }
        items[index] = val;
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
