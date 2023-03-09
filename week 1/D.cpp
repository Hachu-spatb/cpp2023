#include <iostream>
using namespace std;
int max_min(int n, int b) 
{
    int a;
    int mmin = 0;
    int mmax = 0;
    for(int i = 1; i < n; ++i)
    {
        cin >> a;
        if(a < b){
            ++mmin;
        } 
      else
        {
            if(a > b)
            {
                ++mmax;
            }
        }
        b = a;
    }
    if(mmax > mmin)
    {
        return 1;
    } 
  else
    {
        return 0;
    }
}

int main() {
    int n, b;
    cin >> n >> b;
    int ans = max_min(n, b);
    if(ans == 1){
        cout << "MAX";
    } 
  else
  {
        cout << "MIN";
    }
}
