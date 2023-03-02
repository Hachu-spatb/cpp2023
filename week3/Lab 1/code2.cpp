#include <iostream> 
#include <chrono> 
#include <random> 
using namespace std;

 
pair < int, int >
find_long (int k, int n, int *numbers) 
{
  
bool flag = 0;
  
for (int i = 0; i < n; i++)
    
    {
      
for (int j = 0; j < n; j++)
	
	{
	  
if ((numbers[i] + numbers[j] == k) && (i != j))
	    
	    {
	      
auto p = make_pair (i, j);
	      
return p;
	      
flag = 1;
	    
}
	
 
}
    
}
  
if (flag == 0)
    
    {
      
auto p = make_pair (-1, -1);
      
return p;
    
}
  
auto p = make_pair (-1, -1);
  
return p;

}


 
 
pair < int, int >
find_short (int k, int n, int *numbers) 
{
  
int l = 0;
  
int r = n - 1;
  
bool flag = 0;
  
for (int i = 0; i < n; i++)
    
    {
      
if (numbers[l] + numbers[r] == k)
	
	{
	  
auto p = make_pair (l, r);
	  
flag = 1;
	  
return p;
	
}
      
      else if (numbers[l] + numbers[r] < k)
	
	{
	  
l++;
	
}
      
      else if (numbers[l] + numbers[r] > k)
	
	{
	  
r--;
	
}
      
if (l == r)
	
	{
	  
flag = 0;
	  
break;
	
}
    
}
  
if (flag == 0)
    
    {
      
auto p = make_pair (-1, -1);
      
return p;
    
}
  
auto p = make_pair (-1, -1);
  
return p;

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
 
cout << "iter = [";
for (int i = 100; i < 1000; i += 50)
    
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
  
cout << "]" << '\n' << "long = [";
  
 
const long iter = 10000;
  
 
 
unsigned seed = 1001;
  
default_random_engine rng (seed);
  
uniform_int_distribution < unsigned >dstr (10000, 10500);
  
int values[iter];
  
for (int i = 0; i < iter; i++)
    
    {
      
values[i] = dstr (rng);
  
} 
 
 
for (unsigned i = 100; i < 1000; i += 50)
    
    {
      
auto begin = chrono::steady_clock::now ();
      
for (unsigned c = 0; c < 100; c++)
	
	{
	  
find_long (values[c], i, numbers);
	
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
  
cout << "]";
cout << '\n' << "short = [";
  
 
for (unsigned i = 100; i < 1000; i += 50)
    
    {
      
auto begin = chrono::steady_clock::now ();
      
for (unsigned c = 0; c < 100; c++)
	
	{
	  
find_short (values[c], i, numbers);
	
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
  
cout << ']';
return 0;

}
