#include <iostream>
#include "vector"
using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 1; i <= 9; i++)
        g1.push_back(i);

    cout << "Size : " << g1.size(); // Size : 5

    cout << "\n capacity: " << g1.capacity(); // capacity : 8

    cout << "\n Max_size : " << g1.max_size(); // Max_size : 2305843009213693951

    g1.resize(4);

    cout << "\n Size : " << g1.size();

    if (g1.empty() == false)
        cout << "\n vaector is non empty"; //  vaector is non empty
    else
        cout << "\n vector is empty";

    g1.shrink_to_fit();
    cout << "\n Vector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " "; //  Vector elements are: 1 2 3 4
}