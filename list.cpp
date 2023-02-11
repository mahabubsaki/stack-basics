#include <bits/stdc++.h>
using namespace std;
void printList(list<int> mylist)
{
    // list<int>::iterator a = mylist.begin();
    auto a = mylist.begin();
    while (a != mylist.end())
    {
        cout << *a << " ";
        a++;
    }
};
void InsertAt(list<int> &mylist, int index, int value)
{
    auto a = mylist.begin();
    advance(a, index);
    mylist.insert(a, value);
}
void DeleteAt(list<int> &mylist, int index)
{
    auto a = mylist.begin();
    advance(a, index);
    mylist.erase(a);
}
int main()
{
    list<int> mylist;
    mylist.push_front(2);
    mylist.push_front(25);
    mylist.push_front(254);
    InsertAt(mylist, 0, 4);
    DeleteAt(mylist, 0);
    printList(mylist);
    return 0;
}