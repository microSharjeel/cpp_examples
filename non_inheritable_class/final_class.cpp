#include<iostream>
class A
{
private:
  A(){}
  friend class B;  
};
class B:public virtual A
{
public:
  B(){}
};
class C:public B
{
public:
  C(){}
};

int main()
{
  C obj1;
  B obj2;
  
  return 0;}
