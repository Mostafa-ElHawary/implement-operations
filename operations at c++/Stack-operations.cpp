
#include <array>
#include <iomanip> // for setprecision()

#include <string.h>
#include <string>
#include <vector>

#include <unistd.h>
#include <iostream>
#include <type_traits>

#include <cmath>
using namespace std;
class Stack
{
private:
    int *array;
    int sz;
    int top;

public:
    Stack(int size) : sz(size), top(-1)
    {
        array = new int[size];
    }

    void len() { cout << "Length of stack is: " << top + 1 << "\n"; }
    bool isFull() { return top == sz - 1; }
    bool isEmpty() { return top == -1; }
    void Size() { cout << "Size of stack is: " << sz << "\n"; }
    int pop() { return array[top--]; }
    void peek() { cout << "The last val is :" << array[top] << "\n"; }
    void clear()
    {
        top = -1;
    }
    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack is full\n";
        }
        else
        {
            array[++top] = val;
        }
    };

    void print()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
        }

        while (top >= 0)
        {
            cout << array[top--] << " ";
        }
        cout << " "
             << "\n";
    }
};
int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.peek();
    s.Size();
    s.len();
    s.print();
    s.clear();
    s.len();
    s.print();
    return 0;
};
