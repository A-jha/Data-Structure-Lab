/* Reverse a String Using Stack */

//Here Now We will use vector to perform stack operation easily

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    //take a string from user
    cout << "enter the string to be reversed\n";
    cin >> s;

    //find the length of string
    int s_len = s.length();

    // create an stack
    list<char> _stack;

    for (int i = 0; i < s_len; i++)
    {
        _stack.push_front(s[i]);
    }
    for (int i = 0; i < s_len / 2; i++)
    {
        s[i] = _stack.front();
        s[s_len - i - 1] = _stack.back();
        _stack.pop_front();
        _stack.pop_back();
    }
    cout << "\n Reversed string is " << s << "\n";
}