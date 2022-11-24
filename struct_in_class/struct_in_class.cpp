#include<iostream>

typedef struct ab{
  unsigned int a;
  ab(unsigned int x, int y):a(x),p(y){std::cout<<"constructor called"<<std::endl;}
 int  func(){
   return p;
 }
private:
  int p;
};
class A
{
public:
  ab* ptr;
  
};

int main()
{
  A obj;
  obj.ptr = new ab(10,11);
  
  std::cout<< obj.ptr->func() <<std::endl<< obj.ptr->a<<std::endl;
  return 0;
}
