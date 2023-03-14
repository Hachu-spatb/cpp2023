#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> arr;
    int num;
    cin >> num;
    while (num != 0) 
   {
        arr.push_back(num);
        cin >> num;
    }
    for (int i = 1; i < arr.size(); ++i) 
    {
        cout << arr[i-1] - arr[i] << " "; \\вывод массива в строку
    }
    return 0;
}
