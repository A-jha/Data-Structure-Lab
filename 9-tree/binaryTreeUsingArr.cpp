#include <iostream>
using namespace std;
#define SIZE 20
/*
       A(0)
      /   \
    B(1)  C(2)
   /   \     \
  D(3)  E(4) F(6)
*/

//global array
int tree[SIZE] = {-1};

//1. Create a root
int root(int key)
{
    if (tree[0] != -1)
    {
        cout << "Root node is already present\n";
    }
    else
    {
        tree[0] = key;
    }
    return key;
}

//2. Insertion in left
int lInsert(int key, int parent)
{
    if (parent >= SIZE - 1)
    {
        cout << "\n Sorry Tree has no space\n";
    }
    else
    {
        tree[(parent * 2) + 1] = key;
    }
    return key;
}

//3. insert in right
int rInsert(int key, int parent)
{
    if (parent >= SIZE - 1)
    {
        cout << "\n Sorry Tree has no space\n";
    }
    else
    {
        tree[(parent * 2) + 2] = key;
    }
    return key;
}

//4. Print tree
void display()
{
    cout << "\n";
    for (int i = 0; i < SIZE; i++)
    {
        if (tree[i] > 0)
        {
            cout << tree[i] << "\t";
        }
        else
        {
            cout << "---"
                 << "\t";
        }
    }
}
int main()
{
    root(1);
    rInsert(10, 0);
    lInsert(20, 0);

    rInsert(100, 1);
    lInsert(400, 1);

    rInsert(400, 2);
    lInsert(1600, 2);

    display();
}