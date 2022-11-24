#include <iostream>
#include<exception>
using namespace std;
class base
{
  //virtual void print(){std::cout<<"base class"<<std::endl;}
 virtual void print();
};

void  base::print(){std::cout<<"base class"<<std::endl;};
class derived1:public base
{
  void print(){std::cout<<"derived 1" <<std::endl;}
};

class derived2:public base
{
  void print(){std::cout<<"derived 2" <<std::endl;}
};

int main()
{
  derived1 d1; derived2 d2;
  derived1* d1_ptr;
  d1_ptr=&d1;
  base* b_ptr= dynamic_cast <base*>(d1_ptr);
  derived2* d2_ptr= dynamic_cast<derived2*>(b_ptr);
  if(d2_ptr==nullptr)
    std::cout<< "NULL pointer"<<std::endl;
  else
    std::cout<< "Not NULL pointer"<<std::endl;
  try{
  derived1& rd1=dynamic_cast <derived1&>(d2);
  }
  catch(std::exception& e)
    {
      std::cout<< e.what() << std::endl;
    }
  
  return 0;}
