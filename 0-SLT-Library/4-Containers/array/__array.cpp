#include <iostream>
#include <array> //for at()
#include <tuple> //for get()
using namespace std;

int main()
{
    //initializing array
    array<int, 6> arr = {1, 2, 3, 4, 5, 6};

    //printing array element s using at
    cout << "array el using at() :";
    for (int i = 0; i < 6; i++)
    {
        cout << arr.at(i) << " ";
    }
    cout << endl;

    //printing array using get()
    cout << "printing el using get() :";
    cout << get<0>(arr) << " ";
    cout << get<1>(arr) << " ";
    cout << get<2>(arr) << " ";
    cout << get<3>(arr) << " ";
    cout << get<4>(arr) << " ";
    cout << get<5>(arr) << " ";
    cout << endl;

    //print element using []
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //print front of arr
    cout << "front of array arr : " << arr.front() << endl;

    //back of arr
    cout << "back of array arr : " << arr.back() << endl;

    //size of arr
    cout << "size of arr is : " << arr.size() << endl;

    //maxi"mum size of array
    cout << "maximum size of array : " << arr.max_size() << endl;

    //declare a new array
    array<int, 6> arr1 = {7, 8, 9, 10, 11, 12};

    //print first and second array before swaping
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    //swaping arr1 with arr
    arr.swap(arr1);

    //print first and second array before swaping
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    //check for empty
    cout << arr1.empty() << endl;

    //fill array with 0
    array<int, 10>
        zarr;
    zarr.fill(0);
    for (int i = 0; i < zarr.size(); i++)
    {
        cout << zarr[i] << " ";
    }
}
/*
array el using at() :1 2 3 4 5 6 
printing el using get() :1 2 3 4 5 6 
1 2 3 4 5 6 
front of array arr : 1
back of array arr : 6
size of arr is : 6
maximum size of array : 6
1 2 3 4 5 6 
7 8 9 10 11 12 
7 8 9 10 11 12 
1 2 3 4 5 6 
0
0 0 0 0 0 0 0 0 0 0 
*/