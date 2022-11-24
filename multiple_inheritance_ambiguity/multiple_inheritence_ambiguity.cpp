#include <iostream>
using namespace std;
class base1{
  int x;
public:
  base1(int x1):x(x1){cout<< "constructor called base1"<<endl;}
  void print();
};
void base1::print(){cout<< x <<endl;}
class base2{
  int y;
public:
  base2(int y1):y(y1){cout<<"constructor called base2"<<endl;}
  void print();
};
void base2::print(){cout<< y <<endl;}
class derived:public base1,public base2
{
  int z;
public:
  derived(int x1,int y1,int z1):base1(x1),base2(y1),z(z1){cout<<"constructor called derived"<<endl;}
};
int main()
{
  derived d1(10,10,10);
  //  d1.print(); which print will be called
  base2 b2=d1; //object slicing
  b2.print();
  d1.base2::print();
  static_cast<base2>(d1).print();//static cast
  derived* ptrd=&d1;
  base2* ptrb2=static_cast<base2*>(ptrd);
  ptrb2->print();
  return 0;
}
