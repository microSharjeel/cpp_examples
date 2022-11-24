#include<iostream>
template<class T,int N>
class A
{
  T array[N];
public:
  //  A():array{1,2,3,4,5}{std::cout<<"constructor"<<std::endl;}
  int getsize(){return N;}
  /* void print(){
    for(int i=0;i<5;i++)
      std::cout<<array[i]<<std::endl;
      }*/
};
int main(){
  //int a[]={1,2,3,4,5};
  A<int,5> arr;
  //A arr;
  std::cout << arr.getsize() << std::endl;
  // arr.print();
  return 0;}
