#include <iostream> 
#include <chrono> 
#include <random> 
using namespace std;

 
 
 
int
binsearch (int k, int l, int r, int *numbers) 
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


 
int
simplesearch (int k, int n, int *numbers) 
{
  
bool flag = false;
  
for (int i = 0; i < n; i++)
    
    {
      
if (numbers[i] == k)
	
	{
	  
flag = true;
	  
return i;
	
}
    
}
  
if (!flag)
    
    {
    return -1;
    }

return -1;

}
 
int
main () 
{
  
const int n = 10000;
  
int numbers[n];
  
for (int i = 0; i < n; i++)
    
    {
      
numbers[i] = i;
    
} 
 
const long iter = 10000;
  
 
 
unsigned seed = 1001;
  
default_random_engine rng (seed);
  
uniform_int_distribution < unsigned >dstr (10000, 15000);
  
int values[iter];
  
for (int i = 0; i < iter; i++)
    
    {
      
values[i] = dstr (rng);
    
} 
 
cout << "iter = [";
  
for (int i = 100; i < 10000; i += 100)
    
    {
      
if (i == 100)
	
	{
	  
cout << i;
	
}
      
      else
	
	{
	  
cout << ", " << i;
	
}
    
}
  
cout << "]" << '\n';
  
 
cout << "bs = [";
  
 
for (int i = 100; i < 10000; i += 100)
    
    {
      
auto begin = chrono::steady_clock::now ();
      
for (unsigned c = 0; c < 1000; c++)
	
	{
	  
binsearch (values[c], 0, i, numbers);
	
} 
auto end = chrono::steady_clock::now ();
      
auto time_span =
	chrono::duration_cast < chrono::microseconds > (end - begin);
      
if (i == 100)
	
	{
	  
cout << time_span.count ();
	
}
      
      else
	
	{
	  
cout << ", " << time_span.count ();
	
}
    
}
  
cout << "]" << '\n';
  
 
 
cout << "ss = [";
  
for (int i = 100; i < 10000; i += 100)
    
    {
      
auto begin = chrono::steady_clock::now ();
      
for (unsigned c = 0; c < 1000; c++)
	
	{
	  
int a = simplesearch (values[c], i, numbers);
	
} 
auto end = chrono::steady_clock::now ();
      
auto time_span =
	chrono::duration_cast < chrono::microseconds > (end - begin);
      
if (i == 100)
	
	{
	  
cout << time_span.count ();
	
}
      
      else
	
	{
	  
cout << ", " << time_span.count ();
	
}
    
}
  
cout << "]" << '\n';
  
 
return 0;

}
