#include<iostream>
template <class T>
void print(T x)
{
  std::cout<< x <<std::endl;
}
template <class T>
T getmax(T a, T b)
{
  return (a>b)?a:b;
}
int main()
{
  print<char>(static_cast<char>(getmax<char>('a','b')));
  print<int>(getmax<int>(2,3));
  return 0;
}
