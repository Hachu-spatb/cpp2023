#include <iostream>
using namespace std;
#ifndef N
#define N 7
#endif

int Max(int a[], int n)
{
    int minn;
    int i;
    for (minn = 0, i = 0; i < n; ++i)
        if (a[i] > a[minn])
            minn = i;
    return minn;
}

void pov(int b[], int i)
{
    int t, nach = 0;
    while (nach < i)
    {
        t = b[nach];
        b[nach] = b[i];
        b[i] = t;
        nach++;
        i--;
    }
}
  
  



void pancakeSort(int (&a)[N])
{
    for (int i = N; i > 1; i = i - 1)
    {
        int minn = Max(a, i);
        if (minn != i - 1)
        {
            pov(a, minn);
            pov(a, i - 1);
        }
    }
}
  

void print(int a[N])
{
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}

void vvo(int (&a)[N])
{
    int el;
    for(int i = 0; i < N; i++)
    {
        cin >> el;
        a[i] = el;
    }
}

int main()
{
    int a[N];
    vvo(a);
    pancakeSort(a);
    print(a);
}
