#include <iostream>
using namespace std;
class A
{
  const int x;
  int y;
public:
  A(int a,int b);
  void print(void);
};

void A::print(void){std::cout<<"x="<< x << "and" <<"y="<< y <<std::endl;}
A::A(int a, int b):x{a},y{b}{std::cout<<"constructor_called"<<std::endl;};

int main()
{

  A a(10,11);
  A* ptra;
  ptra=&a;
  std::cout<<"here is value= " <<std::endl;
  ptra->print();
  return 0;
}
