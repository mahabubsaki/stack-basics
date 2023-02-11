#include <bits/stdc++.h>
using namespace std;
template <class T>
class Stack
{
public:
    int *a;
    int stack_size;
    int capacity;
    Stack()
    {
        a = new T[1];
        stack_size = 0;
        capacity = 1;
    }
    void IncreaseSize()
    {
        int *newArray = new T[capacity * 2];
        for (int i = 0; i < capacity; i++)
        {
            newArray[i] = a[i];
        }
        swap(a, newArray);
        delete[] newArray;
        capacity = capacity * 2;
    }
    void Push(T value)
    {
        if (stack_size + 1 > capacity)
        {
            IncreaseSize();
        }
        stack_size++;
        a[stack_size - 1] = value;
    }
    void Pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty";
            return;
        }

        stack_size--;
    }
    T Top()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            return a[stack_size - 1];
        }
    }
};
int main()
{
    Stack<int> st;
    cout << st.Top();
    return 0;
}