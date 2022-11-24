#include<iostream>
#include<string>

typedef struct vector
{
  int x; std::string str;
}*nptr;

int main()
{
  nptr v1 = new vector();
  nptr v2;
  v2 = v1;
  v2->x=1;
  v2->str ="sk";
  std::cout<< v2->x <<std::endl << v2->str <<std::endl;
  return 0;
}

