#include <iostream>
#include <string.h>
using namespace std;
class Int
{
  int x;
public:

  Int(int y):x(y)
  {
    std::cout<<"conversion constructor called"<<endl;
  }
operator string(){
  std::cout<<"conversion Operator called"<<endl;
  return to_string(x);
}
};
class B{};
class C:private B
{
};
int main ()
{

  float* fp;
  int * i_ptr1;
  float f;
  int u= static_cast <int>(f);
  void* v_ptr1 = static_cast<void*>(i_ptr1);
  void* v_ptr2 = static_cast<void*>(&u);
  void* v_ptr3=i_ptr1;
  int* i_ptr2 = static_cast<int*>(v_ptr3);
  Int I(10);
  B b;
  C ob;
  // B* ptrI = (B*)(&ob); allowed but not good pactice
  //  B * ptrI = static_cast <B*>(&ob); //error
  char c='k';
  string st1=I;//conversion operator called 
  I=20;//conversion constructor called 
  //using static_cast
  string st2= static_cast<string>(I);//conversion operator called
  int* ptr1=(int*) &c; //C style cast it is allowed
  I=static_cast<Int>(20);//conversion constructor called
  //  int* ptr2=static_cast<int*>&c; //uncomment to get error
  return 0;
}
