#include<iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
    int a = 8700, b = 16;

    srand(time(NULL));

    //cout << rand() % 4;

    double c = a % b;

    cout << c;
}

/*
int* arrayM(int *);

int main()
{
    int arr [10];

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        arr[i] = i;
    }

    arrayM(arr);

    return 0;
}

int* arrayM(int *arr)
{
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        arr[i] = arr[i]*5;
    }

    return *arr;
}
*/
