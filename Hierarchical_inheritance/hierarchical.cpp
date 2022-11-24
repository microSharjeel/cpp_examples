#include<iostream>
class A
{
public:
  void breathing();
};
void A::breathing(){std::cout<<"I am breathing"<<std::endl;}
class B:public A
{
public:
  void work();};
void B::work(){std::cout<<"project A"<<std::endl;}

class C:public A
{
public:
  void work(){std::cout<<"project B"<<std::endl;}
};
int main()
{
  A a;
  a.breathing();
  B b;
  b.breathing();
  b.work();
  C c;
  c.breathing();
  c.work();
  std::cin.get();
}
