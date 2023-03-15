#include <iostream>
#include <random>
#include <fstream>
using namespace std;

int binsearch (int k, int l, int r, int *numbers) 
{
if ((l == r) && (numbers[l] == k))    
return l;
  else if ((l == r) && (numbers[l] != k))
	return -1;
  else if ((k < numbers[l]) && (numbers[r] > k))    
	return -1;
  
int m = int ((l + r) / 2);  
if (numbers[m] == k)    
	return m;
  else if (k < numbers[m])   
	  	{
		binsearch (k, l, m - 1, numbers);
		}
  else if (k > numbers[m])   
  		{
		binsearch (k, m + 1, r, numbers);
  		}  
	return -1;
}

void randomize(int* &ptr, size_t N, int seed) {
    std::default_random_engine rng(seed);
    std::uniform_int_distribution<unsigned> dstr(0, 20);
    ptr = new int[N];
    for(int i = 0; i < N; ++i){
        ptr[i] = dstr(rng);
    }
}

void create_outfile(int* ptr, size_t N, int step) {
    std::ofstream out("binsearch.txt", std::ios::out);
    for (int i = 0; i < N; ++i) {
        if (out.is_open()) {
            out << ptr[i] << " ";
        }
    }
    out << endl;
    for (int i = 0; i < N; ++i){
        if (out.is_open()) {
            out << i * step << " ";
        }
    }
    out.close();
}

int main() {
    int steps_number = 20; // количество измерений при разных N
    int step = 5000; // шаг по N
    int repeats_number = 100; // количество измерений при одном N
    int* data = nullptr;  // массив данных
    int* ans = new int[steps_number];  // массив усредненных времен для каждого эксперимента 
    int N;
    for (int j = 1; j <= steps_number; ++j) {
        N = j * step;
        int time1 = 0;
        randomize(data, N, 1001);
        for (int repeats = 0; repeats < repeats_number; ++repeats) { 
            auto begin = std::chrono::steady_clock::now();
            binsearch(21, 0, N - 1, data);
            auto end = std::chrono::steady_clock::now();
            auto time_span = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
            time1 += time_span.count();
        ans[j] = time1 / repeats_number;
        }
    }
    create_outfile(ans, steps_number, step);
    delete[] data;
    delete[] ans;
    return 0;
}