#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;

    //fill the array with 10 five times
    v1.assign(5, 10);

    cout << "vector elements are : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    //insert 15 to last position
    v1.push_back(15);
    cout << "\nLast element of vector" << v1[v1.size() - 1];

    //remove last element
    v1.pop_back();
    cout << "\nLast element of vector after pop_back" << v1[v1.size() - 1];

    //inset element at the begining
    v1.insert(v1.begin(), 5);
    cout << "\nFirst element of vector" << v1[0];

    //remove the first element
    v1.erase(v1.begin());
    cout << "\nFirst element of vector" << v1[0];

    //insert at the begining
    v1.emplace(v1.begin(), 5);
    cout << "\nFirst element : " << v1[0];

    //insert 20 at the end
    v1.emplace_back(20);
    cout << "\nLast element of vector" << v1[v1.size() - 1];

    //erase the vector
    v1.clear();
    cout << "\nVector size after erase is :" << v1.size();
    cout << "\nVector capacity after erase is :" << v1.capacity();

    //two vwctor to perform swap
    vector<int> v2, v3;
    v2.push_back(1);
    v2.push_back(2);

    v3.push_back(3);
    v3.push_back(4);

    cout << "\n Vector1: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    cout << "\n Vector2: ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";

    //swap v2 aqnd v3
    v2.swap(v3);

    cout << "\n Vector1 after swap: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    cout << "\n Vector2 after swap: ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
}
