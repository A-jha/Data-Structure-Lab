//Heap Sort In C++

#include <iostream>
using namespace std;

//heapify function
// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    //find the largest among left and right child
    int largest = i;
    //i+1 because index of array starts from 0
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    //swap and continue
    //heapifying if root is not largest
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

//heap sort fuction
void heapSort(int arr[], int n)
{
    //Build a Max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    //heap sort
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        //heapify root element
        heapify(arr, i, 0);
    }
}

//print array
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

//main function
int main()
{
    int arr[] = {1, 12, 9, 7, 5, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array\n";
    display(arr, n);

    heapSort(arr, n);

    cout << "Sorted Array\n";
    display(arr, n);
}