#include <iostream>
#include <random>
#include <chrono>

using namespace std;

void sort_half(unsigned arr[], unsigned begin_idx, unsigned end_idx)
{
    int step = end_idx - begin_idx / 2;
    while (step > 0)
    {
        for (unsigned i = 0; i < end_idx - begin_idx - step; i += step)
        {
            for (unsigned j = 0; j < end_idx - begin_idx; j += step)
            {
                if (arr[j] > arr[j + step])
                {
                    swap(arr[j], arr[j + step]);
                }
            }
        }
        step /= 2;
    }
    
    return;
}

int main()
{


    const int n = 1000;
    unsigned arr[n], arr1[n];

    unsigned seed = 1001;
    default_random_engine rng(seed);
    uniform_int_distribution<unsigned> dstr(1, 1500);
    for (int i = 0; i < n; i++)
    {
        arr[i] = dstr(rng);
    }
    

    cout << "iter = [";
    for (unsigned i = 10; i < 1000; i += 10)
    {
        if (i == 10)
        {
            cout << i;
        }
        else
        {
            cout << ", " << i;
        }
    }
    cout << "]" << '\n';

    cout << "half = [";
    for (unsigned i = 10; i < 1000; i += 10)
    {
        for (int j = 0; j < i; j++)
        {
            arr1[i] = arr[i];
        }
        auto begin = chrono::steady_clock::now();

        sort_half(arr1, 0, i);

        auto end = chrono::steady_clock::now();
        auto time_span = chrono::duration_cast<chrono::microseconds>(end - begin);

        if (i == 10)
        {
            cout << time_span.count();
        }
        else
        {
            cout << ", " << time_span.count();
        }
    }
    cout << "]" << '\n';


    return 0;
}
