// 1. empty() - check empty or not
// 2. size() - size of the queue
//3. swap() - exchange the content of two queue
//4 . front()
//5. back()
//6. push()
//7. pop()
#include <iostream>
#include <queue>
using namespace std;

void showQ(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty())
    {
        cout << "\t" << g.front();
        g.pop();
    }
    cout << "\n";
}
int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    cout << "The queue gquiz is : ";
    showQ(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showQ(gquiz);

    return 0;
}
