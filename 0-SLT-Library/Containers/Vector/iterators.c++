#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 0; i < 5; i++)
    {
        g1.push_back(i);
    }

    //begin() and end()

    cout << *g1.begin(); //----0
    cout << *g1.end();   //-----0

    cout << "Output of begin and end ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " "; //0 1 2 3 4

    //rbegin() and rend()
    for (auto i = g1.rbegin(); i != g1.rend(); i++)
        cout << *i << " "; // 4,3,2,1,0
}