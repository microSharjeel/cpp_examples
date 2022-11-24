#include<iostream>

class base
{
  public:
  base(){std::cout<< "constructor base"<<std::endl;}
  virtual ~base(){std::cout<< "destructor base"<<std::endl;}
};
class derived:public base
{
  unsigned int* ptr;
public:
  derived(){
    ptr = new unsigned int;
    std::cout<<"constructor derived"<<std::endl;}
  ~derived(){
    delete ptr;
    std::cout<<"destructor derived"<<std::endl;}
};
class derived1:public base
{
  int* ptr1;
public:
  derived1(){
    ptr1 = new int;
    std::cout<< "derived1 constructor"<<std::endl;}
  ~derived1(){
    delete ptr1;
    std::cout<< "destructor derived1"<<std::endl;
  }
};
int main()
{
  base b;
  derived d;
  derived1 d1;
  return 0;
}
