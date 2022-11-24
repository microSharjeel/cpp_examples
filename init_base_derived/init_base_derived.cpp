#include <iostream>
class A
{
  int x;
public:
  A(){std::cout<<"base default"<<std::endl;}
  A(int x1):x(x1){
    std::cout<<"base parameterized"<<std::endl;}
 void print();
};
void A::print(){std::cout<< x <<std::endl;}
class B:public A
{
  int y;
public:
  B(){std::cout<<"derived default"<<std::endl;}
  B(int x2,int x3):y(x2),A(x3){std::cout<<"derived parameterized"<<std::endl;}
  void val(){std::cout<< y <<std::endl;}
};
int main()
{
  B b_obj(2,3);
  b_obj.print();
  b_obj.val();
  return 0;
}
