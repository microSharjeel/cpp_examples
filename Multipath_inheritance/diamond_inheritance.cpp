#include<iostream>
class A
{
public:

  void print(){std::cout<< "base class" <<std::endl;}
};
class B : public virtual A //using virtual inheritance
  {};
class C : public virtual A //using virtual inheritance
  {};
  class D : public B,public C
  {};
				     
  int main()
  {
    D obj;
    obj.print();
    obj.C::print(); //scope resolution
    static_cast<B>(obj).print();//static_cast
    C c=obj; //object slicing
    c.print();
    return 0;}
