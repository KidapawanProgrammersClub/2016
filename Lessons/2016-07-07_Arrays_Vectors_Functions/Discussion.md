### July 7, 2016 Discussion (summary, corrections)

**1. We can use vectors in C++ instead of arrays -- vectors keep track of the current size of the list.**

...pero naa koy mali nga nasulti sa discussion.
I said that it is okay to do this code below using vectors (storing the first 10 positive integers into the vector):

```C++
vector<int> vec;

for(int i = 0; i <= 10; i++)
{
  vec[i] = i;
}
```

But if you do this the program will crash because it is trying to access memory location that is not allocated for the vector.

If we want to assign values to a vector, we need to use the `.push_back()` function like the code below:

```C++
vector<int> vec;

for(int i = 0; i <= 10; i++)
{
  vec.push_back(i);
}
```

2. Functions
