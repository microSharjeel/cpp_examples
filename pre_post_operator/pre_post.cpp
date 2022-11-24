#include<iostream>
int main()
{
  int x=3;
  while(--x >0)//left to right precedence will print 2 and 1
    std::cout<< x <<std::endl;
  x=3;
  while(x-- >0)//left to right precedence will print 2,1,0
    std::cout<< x <<std::endl;
  std::cin.get();
}
