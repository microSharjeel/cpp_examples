 #include <iostream>
#include <string>
using namespace std;
//Abstract class - interface class
class A{
public:
virtual  std::string Getname()=0;
};
std::string A:: Getname(){return "My Name";};
class B: public A
{
public:
  std::string Getname()override{
    cout<< A::Getname()<<endl;
    return "sharjeel";}
};

class C:public A
{
public:
  std::string Getname()override{return "khilji";};
};

int main()
{
  A* ptr;
  ptr = new B();
  cout<< ptr->Getname()<<endl;
  ptr = new C();
  cout<< ptr->Getname()<<endl;
  //  ptr = new A(); uncomment to get error abstract class cannot be instantiated
  return 0;
}
