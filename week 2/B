#include <iostream>
using namespace std;
#ifndef N
#define N 5
#endif

void shiftRight(int (&a)[N])
{
    int b = a[N-1];
    for(int i = 0; i < N-1; i++)
    {
        a[N-1-i] = a[N-2-i];
    }
    a[0] = b;
}

int main() 
{
    int b;
    int a[N];
    for(int i = 0; i < N; i++)
    {
        cin >> b;
        a[i] = b;
    }
    
    shiftRight(a);
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }   
}
