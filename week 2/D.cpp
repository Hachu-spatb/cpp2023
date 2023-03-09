#include <iostream>
using namespace std;
#ifndef N
#define N 3
#endif
void print(int a[N])
{
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}
void moveNegativeToEnd(int (&a)[N])
{
    int k = 0;
    int nac[k];
    int end[N - k];
    int b = 0;
    int v = 0;
  
    for(int i = 0; i < N; i++)
    {
        if(a[i] > 0)
        {
            ++k;
        }
    }
  
    for(int i = 0; i < N; i++)
    {
        
        if(a[i] > 0){
        nac[b] = a[i];
        ++b;
        }
         else
        {
            end[v] = a[i];
            ++v;
        }
    }
    
    for(int i = 0; i < k; i++)
    {
        a[i] = nac[i];
    }
  
    for(int i = 0; i < N - k; i++)
    {
        a[k + i] = end[i];
    }
}

int main()
{
    int o;
    int a[N];
    for(int i = 0; i < N; i++)
    {
        cin >> o;
        a[i] = o;
    }
    moveNegativeToEnd(a);
    print(a);    
}
