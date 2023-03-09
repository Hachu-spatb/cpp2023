#include <iostream>
using namespace std;

int nuli(int a)
{
    int otv = 0;
    for(int i = 5; i < 1000000; i = i * 5)
    {
        otv = otv + a / i;
    }
    return otv;
}

int main()
{
    int a;
    cin >> a;
    int otv = nuli(a);
    cout << otv;
}

// jj