#include <iostream>
#include <conio.h>
using namespace std;

// //////////////////////////////////////////// //
//               Get Array Input                //
// //////////////////////////////////////////// //

int *getArrayInput(int n)
{
    int *arr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

// //////////////////////////////////////////// //
//                  Print Array                 //
// //////////////////////////////////////////// //

void printArray(int *arr, int n, string msg = "")
{
    cout << msg;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// //////////////////////////////////////////// //
//                 Reverse Array                //
// //////////////////////////////////////////// //

void reverseArray(int *arr, int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// //////////////////////////////////////////// //
//                Min Max Of Array              //
// //////////////////////////////////////////// //

struct MinMax
{
    int min;
    int max;
};

MinMax MinMaxOfArray(int *arr, int n)
{
    struct MinMax data;
    data.min = arr[0];
    data.max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > data.max)
        {
            data.max = arr[i];
        }
        if (arr[i] < data.min)
        {
            data.min = arr[i];
        }
    }
    return data;
}
