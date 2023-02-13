#include <iostream>

using namespace std;

int aboba(int a)
{
    int o = 1;
    int i = 0;

    while(o < a)
        {
        o = o * 10;
        i = i + 1;  
        }
    o = o / 10;
    i = i - 1;

    int vyvod= 1;
    int zn = 0;
    int zk = 0;
    
    while(a > 0)
    {
        zk = a % 10;
        zn = a / o;
        if(zn != zk){
            vyvod = 0;
            }
        a = a % o;
        a = (a - zk) / 10;
        o = o / 100;
        
    }
    return vyvod;
}

int main()
{
    int a;
    cin >> a;
    int vyvod = aboba(a);
    if(vyvod == 1)
    {
        cout << "YES" << endl;
    } 
    else
    {
        cout << "NO" << endl;
    }
    
}