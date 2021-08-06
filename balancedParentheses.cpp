#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    //take a string consists of parentheses
    string s;
    cin >> s;
    bool flag = true;
    //create a stach which will contain parentheses
    stack<char> S;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
        {
            S.push(s[i]);
        }
        if (s[i] == ']' || s[i] == '}' || s[i] == ')')
        {
            if (S.top() == '(' && s[i] == ')')
            {

                S.pop();
            }
            else if (S.top() == '{' && s[i] == '}')
            {

                S.pop();
            }
            else if (S.top() == '[' && s[i] == ']')
            {

                S.pop();
            }
            else
            {
                flag = false;
                cout << "Expression is unbalanced\n";
                break;
            }
        }
    }
    if (flag)
    {
        cout << "Given expression is a balanced \n";
    }
}