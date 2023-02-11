#include <bits/stdc++.h>
using namespace std;
const int maxSize = 500;
class Stack
{
public:
    int a[maxSize];
    int stack_size;
    Stack()
    {
        stack_size = 0;
    }
    void Push(int value)
    {
        if (stack_size + 1 > maxSize)
        {
            cout << "Stack is full";
            return;
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
        a[stack_size - 1] = 0;
        stack_size--;
    }
    int Top()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty";
            return -1;
        }
        return a[stack_size - 1];
    }
};
int main()
{
    Stack st;
    st.Push(3);

    return 0;
}