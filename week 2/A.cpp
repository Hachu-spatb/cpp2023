#include <iostream>

using namespace std;
#ifndef N
#define N 5
#endif

void reverseArray(int (&a)[N])
{
    int b;
    int c;
    for(int i = 0; i < N/2; i++)
    {
        b = a[i];
        c = a[N-i-1];
        a[i] = c;
        a[N-i-1] = b;
    }
}

int main() {
    int d;
    int a[N];
    for(int i = 0; i < N; i++)
    {
        cin >> d;
        a[i] = d;
    }
    reverseArray(a);
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }    
}
