#include <iostream>
using namespace std;

class Base
{
  static int z;
public:
  int x;
  static int y;
  static void  printy(Base&r);
  void printx();
    
};
int Base::y; //memory allocation for static data member.Should be done in .cpp file
int Base::z;
void Base::printy(Base& r)
{
  r.z=60;
  std::cout<< y <<std::endl<< r.x<< endl <<r.z <<endl;
}
void Base::printx()
{
  std::cout<< x <<endl <<z << endl;
  std::cout<< y <<endl;
}
int main()
{
  Base b1,b2;
  b1.x=10;
  b2.x=20;
  Base::y=30;
  Base::y=40;
  //Base::z=50; uncomment for error , private here
  b1.printx();
  Base::printy(b1);
  b2.printx();
  Base::printy(b1);
  return 0;
}





