#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    //declate a list iterator variavle
    list<int>::iterator it;

    list<int> list1, list2;
    for (int i = 1; i <= 5; i++)
    {
        list1.push_back(i);
    }

    //push fornt
    list1.push_front(12);

    //pop_back
    list1.pop_back();

    //pop_front
    list1.pop_front();

    //list begin list end
    for (it = list1.begin(); it != list1.end(); it++)
    {
        cout << *it << "\t";
    }

    //check for empty
    cout << list1.empty() << endl;
    cout << list2.empty() << endl;

    //insert
    list1.insert(list1.begin(), 5);
    for (it = list1.begin(); it != list1.end(); it++)
    {
        cout << *it << "\t";
    }

    //remove()
    list1.remove(5);
    for (it = list1.begin(); it != list1.end(); it++)
    {
        cout << *it << "\t";
    }
    //size
    cout << list1.size();
    //sort
    list1.sort();
    for (it = list1.begin(); it != list1.end(); it++)
    {
        cout << *it << "\t";
    }
}