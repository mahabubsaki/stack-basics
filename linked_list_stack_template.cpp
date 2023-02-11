#include <bits/stdc++.h>
using namespace std;
template <class T>
class node
{
public:
    T data;
    node *next;
    node *previous;
};
template <class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int size;
    DoublyLinkedList()
    {
        head = NULL;
        size = 0;
    }
    node<T> *CreateNode(T data)
    {
        node<T> *newNode = new node<T>;
        newNode->data = data;
        newNode->next = NULL;
        newNode->previous = NULL;
        return newNode;
    };
    void InsertHead(T data)
    {
        size++;
        node<T> *newNod = CreateNode(data);
        if (head == NULL)
        {
            head = newNod;
            return;
        }
        node<T> *current = head;
        newNod->next = current;
        current->previous = newNod;
        head = newNod;
    }
    void DeleteHead()
    {
        if (head == NULL)
        {
            return;
        }
        node<T> *current = head;
        node<T> *currentNext = head->next;
        delete current;
        if (currentNext != NULL)
        {
            currentNext->previous = NULL;
        }
        head = currentNext;
        size--;
    }
    int getSize()
    {
        return size;
    }
};
template <class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;
    Stack()
    {
    }
    T Top()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }
    void Push(T value)
    {
        dl.InsertHead(value);
    }
    void Pop()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            return;
        }
        dl.DeleteHead();
    }
    int getSize()
    {
        return dl.getSize();
    }
};
int main()
{
    Stack<int> a;
    a.Push(5);
    a.Push(2);
    a.Push(7);
    a.Push(8);
    a.Push(3);

    Stack<int> temp;
    while (a.getSize() > 0)
    {
        int top = a.Top();
        a.Pop();
        while (temp.getSize() > 0)
        {
            if (temp.Top() < top)
            {
                break;
            }
            a.Push(temp.Top());
            temp.Pop();
        }
        temp.Push(top);
    }
    swap(a, temp);

    // sorting a  stack with another stack
    cout << a.Top();
}