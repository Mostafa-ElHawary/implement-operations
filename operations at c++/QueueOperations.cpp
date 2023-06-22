#include <array>
#include <iomanip>
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>
using namespace std;
#include <unordered_map>

class CircularQueue
{
private:
    int *array;
    int capacity;
    int front;
    int rear;
    int length;

public:
    CircularQueue(int initialSize)
    {
        capacity = initialSize;
        array = new int[capacity];
        front = 0;
        rear = 0;
        length = 0;
    }

    bool isFull()
    {
        return length == capacity;
    };

    bool isEmpty()
    {
        return length == 0;
    };

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "the queue is full you can't enqueue " << endl;
            ;
            return;
        }

        array[rear] = val;
        rear = (rear + 1) % capacity;
        length++;
    };

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "the queue is empty" << endl;
            ;
            return;
        }

        int val = array[front];
        front = (front + 1) % capacity;
        length--;
    };

    void GetFront()
    {
        if (isEmpty())
        {
            cout << "the queue is empty" << endl;
            ;
            return;
        }

        cout << "The front is " << array[front] << " and the index is " << front << endl;
    }

    void GetRear()
    {

        if (isEmpty())
        {
            cout << "the queue is empty";
            return;
        }

        int rearIndex = (rear + capacity - 1) % capacity;
        cout << "The rear is " << array[rearIndex] << " and the index is " << rearIndex << endl;
    }

    ~CircularQueue()
    {
        delete[] array;
    }
};

int main()
{

    CircularQueue arr(5);

    cout << arr.isFull() << endl;
    arr.enqueue(10);
    arr.enqueue(20);
    arr.enqueue(30);
    arr.enqueue(40);
    arr.enqueue(50);

    arr.dequeue();
    arr.dequeue();
    arr.dequeue();
    arr.dequeue();
    arr.enqueue(60);
    arr.enqueue(70);
    arr.enqueue(80);
    arr.enqueue(90);
    arr.dequeue();
    arr.GetFront();
    arr.GetRear();

    return 0;
}