#include<iostream>
#include<cstring>
int main()
{
 const char* ptr="shar";
 char arr[]="sharj";
 char* copy_ch=new char[strlen(ptr)];
 memcpy(copy_ch,ptr,strlen(ptr));
 for (int i=0;i<=strlen(ptr);i++)
  {
    std::cout<< *(ptr+i)<<std::endl;}
 for (int j=0;j<5;j++)
 {
    std::cout<<arr[j]<<std::endl;
  }
 for(int k=0;k<5;k++)
 {
   std::cout<<*(copy_ch+k)<<std::endl;
  }
  std::cin.get();
}
