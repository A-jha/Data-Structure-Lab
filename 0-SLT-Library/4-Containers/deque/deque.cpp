#include <iostream>
#include <deque>

using namespace std;

void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    deque<int> queue1;
    queue1.push_back(10);
    queue1.push_front(20);
    queue1.push_back(30);
    queue1.push_front(15);
    cout << "The deque queue1 is : ";
    showdq(queue1);

    cout << "\nqueue1.size() : " << queue1.size();
    cout << "\nqueue1.max_size() : " << queue1.max_size();

    cout << "\nqueue1.at(2) : " << queue1.at(2);
    cout << "\nqueue1.front() : " << queue1.front();
    cout << "\nqueue1.back() : " << queue1.back();

    cout << "\nqueue1.pop_front() : ";
    queue1.pop_front();
    showdq(queue1);

    cout << "\nqueue1.pop_back() : ";
    queue1.pop_back();
    showdq(queue1);

    return 0;
}
/*
The deque queue1 is : 	15	20	10	30

queue1.size() : 4
queue1.max_size() : 2305843009213693951
queue1.at(2) : 10
queue1.front() : 15
queue1.back() : 30
queue1.pop_front() : 	20	10	30

queue1.pop_back() : 	20	10
*/