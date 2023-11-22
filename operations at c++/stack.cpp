
#include <array>
#include <iomanip> // for setprecision()
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>

class Stack
{
private:
    int top;
    int size;
    int length;
    int *array;

public:
    Stack(int size) : size(size), top(-1), length(0)
    {
        array = new int[size];
    }

    void len()
    {
        cout << "Length of stack is: " << length << "\n";
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == size - 1;
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
            length++;
        }
    }
    void pop()
    {
        array[--top];
        length--;
    }
    void peek()
    {
        cout << "The top val is : " << array[top] << "\n";
    }
    void Getsize()
    {
        cout << "The size of stack is : " << size << "\n";
    }
    void clear()
    {
        top = -1;
        length = 0;
    }
    void print()
    {
        for (int i = top; i >= 0; i--)
        {
            if (top != -1)
            {
                cout << array[i] << " ";
            }
        }
    }
};

int main()
{
    Stack s(5);
    s.len();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.len();
    // s.pop();
    // s.peek();
    // s.len();
    // s.clear();
    // s.len();
    s.print();

    return 0;
};
