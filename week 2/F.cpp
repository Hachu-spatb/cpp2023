#include <iostream>
using namespace std;
#ifndef N
#define N 4
#endif

void ch(int(&a)[N])
{
    for (int i=0; i<N; i++)
    {
        cin >> a[i];
    }
}


int findLastZero(int (&a)[N])
{
    int l = 0, b = N, mid;
    while (l < b) 
    {
        mid = (l+b)/2; 
        if (a[mid] == 1) b = mid;
        else if ((a[mid] == 0) and (a[mid+1] == 1))
        {
            return mid;
        }
        else l = mid + 1;
    }
    b--;
    return 0;
}

int main(){
    int a[N];
    ch(a);
    
    cout << findLastZero(a);
    return 0;
}
