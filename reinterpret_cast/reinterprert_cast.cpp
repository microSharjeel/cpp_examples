#include <iostream>
using namespace std;
struct bits{
  int a;
  int b;
  char ch;
  bool bo;
};

int main()
{
  /*  bt.a=10; bt.b=20; bt.ch='a'; bt.bo=true;
  int* ptr= reinterpret_cast <int*>(&bt);
  std::cout<<*ptr<<std::endl;
  ptr++;
  std::cout<<*ptr<<std::endl;
  char* c =reinterpret_cast<char*>(++ptr);
  std::cout<<*c<<std::endl;
  bool* ptr_b=reinterpret_cast<bool*>(++c);
  std::cout<<*ptr_b<<std::endl;*/
  bits* bt_ptr;
  bits bt;
  bt_ptr = &bt;
  bt_ptr->a=10;
  bt_ptr->b=20;
  bt_ptr->ch='a';
  bt_ptr->bo=true;
  std::cout<<bt_ptr->a<<std::endl<<bt_ptr->b<<std::endl<<bt_ptr->ch<<std::endl<<bt_ptr->bo<<std::endl;
  return 0;
}
