#include <iostream>

using namespace std;

template <class T = int, int size = 10>
class Stack
{
    T data[size];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T);

    T pop();

    int getSize()
    {
        return (top + 1);
    }
};

template <class T = int, int size = 10>
void Stack<T, size>::push(T n)
{
    if (top == size - 1)
    {
        cout << "Stack is full";
    }
    else
        data[++top] = n;
}

template <class T = int, int size = 10>
T Stack<T, size>::pop()
{
    f(top < 0)
    {
        cout << "Stack is empty";
    }
    return (data[top--]);
}

int main()
{
    Stack<int> s1;
    Stack<float> s2;
    Stack<char> s3;
    s1.push(10);
    s1.push(20);
    cout << s1.pop() << "is popped";
    cout << s1.pop() << "is popped";
}