#include<iostream>
class A
{
  int x;
public:
  A(int a):x(a){std::cout<< "constructor"<<std::endl;}
  friend  bool operator > (const A& r1,const A& r2);
  friend  std::ostream& operator <<(std::ostream& stream,const A& r);  
};
bool operator > (const A& r1,const A& r2){return (r1.x>r2.x)?1:0;}
std::ostream& operator <<( std::ostream& stream,const A& r){ stream << r.x; return stream;}
template <class T>
void print(T x)
{
  std::cout<< x <<std::endl;
}
template <class T>
T getmax(T a, T b)
{
  //  return (a>b)?1:0;//a:b;
  if (a>b)
    return a;
  else
  return b;
}
int main()  
{
  A a(1);
  A b(2);
  print<char>(static_cast<char>(getmax<char>('a','b')));
  print<int>(getmax<int>(2,3));
  print<A>((getmax<A>(a,b)));
  return 0;
}
