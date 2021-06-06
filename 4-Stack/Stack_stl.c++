#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> stack;
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);

    while (!stack.empty())
    {
        cout << ' ' << stack.top();
        stack.pop();
    }
}