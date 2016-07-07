### July 7, 2016 Discussion (summary, corrections)

**1. We can use vectors in C++ instead of arrays -- vectors keep track of the current size of the list. (Please see samples within this folder)**

...pero naa koy mali nga nasulti during our discussion.
I said that we can write this code below with vectors (storing the first 10 positive integers into the vector):

```C++
vector<int> vec;

for(int i = 0; i <= 10; i++)
{
  vec[i] = i;
}
```

But if you do this the program might crash because it is trying to access memory location that is not allocated for the vector.

If we want to assign values to a vector, we need to use the `.push_back()` function instead:

```C++
vector<int> vec;

for(int i = 0; i <= 10; i++)
{
  vec.push_back(i);
}
```
________________
Below is another explanation on why the code above will cause the program to crash:
We cannot do something like this with a vector:

```C++
vector<int> vec;
vec[123] = 111; // at this point, the vector's size is zero so accessing vec[123] is illegal 
// because that space in memory is not owned by vec
```

According to [cplusplus.com](http://www.cplusplus.com/reference/vector/vector/operator[]/) the behavior of the code above is undefined (in my case, the program crashes)

But we can give the vector an initial size or 150. If we do this then we can now access vec[123]:

```C++
const int INITIAL_SIZE = 150;
vector<double> vectorOfNumbers(INITIAL_SIZE);
vectorOfNumbers[123] = 111; // at this point, the vector's size is 150 so we can now access vec[123]
```
   

**2. Functions - (Please see samples within this folder)**
