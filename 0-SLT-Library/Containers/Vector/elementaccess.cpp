#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;

    for (int i = 1; i <= 5; i++)
        v1.push_back(i);

    cout << "\n Reference operator [index] : v1[2] = " << v1[2]; //3

    cout << "\n v1.at(3) = " << v1.at(3); // 4

    cout << "\n front() : v1.front : " << v1.front();

    cout << "\n back() :" << v1.back();

    int *pos = v1.data();

    cout << "\n The second element is " << *(pos + 1);

    return 0;
}