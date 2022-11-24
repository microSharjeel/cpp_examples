#include<iostream>
int main()
{
  int x=10;
  int* ptr1=&x;//goes on stack
  int* ptr2=new int;
  *ptr2=10;
  std::cout<< *(ptr2) <<std::endl;
  int y= (*ptr2)++;
  std::cout<<  *ptr2 <<std::endl<< y <<std::endl;
  *ptr2=10;
  std::cout<<"pointer2 addr"<<ptr2<<std::endl;
  int z= *ptr2++;//or *(ptr2)++ both are same
  std::cout<< z << std::endl <<"pointer2 addr" << ptr2 <<std::endl;
  *ptr2= 10;
  int w =++(*ptr2);
  std::cout<< w <<std::endl;
  std::cout<<"addr of pointer2"<<ptr2 <<std::endl;
  int q = *(ptr2++);
  std::cout<< q <<std::endl<< ptr2<<std::endl;
  *ptr2=10;
  std::cout<<"addr of pointer2"<< ptr2 << std::endl;
  int e= *(++ptr2);
  std::cout<< e <<std::endl<<"addr of pointer2"<<ptr2<<std::endl;
  *ptr2=10;
  int u=  ++(*ptr2);
  std::cout<< u <<std::endl<<*ptr2<<std::endl;
  std::cin.get();  
  
}
