#include <iostream>
#include <string>
using namespace std;
class A
{
public:
  virtual std::string Getname(){return "Base";}
};
class B:public A
{
std::string name;
public:
  B(std::string st);
  std::string Getname()override{return "derived";}
};
B::B(std::string st):name(st){std::cout<<"derived constructor called"<<endl;}
void Printname(A* ptrA)
{
  cout<< ptrA->Getname()<< endl;
}

int main()
{
  A* ptr_A=new A();
  Printname(ptr_A);
  B* ptr_B=new B("sharjeel");
  Printname(ptr_B);
  A* ptr_A1 = new B("Khilji");
  cout<< ptr_A1->Getname()<<endl;
  A* ptr_A2= new A();
  cout<<ptr_A2->Getname()<<endl;
  return 0;
}
