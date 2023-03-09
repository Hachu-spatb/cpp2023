#include <iostream>
using namespace std;
#ifndef N
#define N 3
#endif

void shiftRight(int (&arr)[N], unsigned n)
{
    int copy[2*N];
    for (int i=0; i<N; i++)
    {
        copy[i] = arr[i];
        copy[i+N] = arr[i];
    }

    for (int i=0; i<N; i++)
    {
        arr[i] = copy[N + i - n % N];
    }
}

void ch(int(&arr)[N])
{
    for (int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
}


void vy(int(&arr)[N])
{
    for (int i=0; i<N; i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    int arr[N];
    int n;
    cin >> n;
    ch(arr);
    shiftRight(arr, n);
    vy(arr);
    return 0;
}
