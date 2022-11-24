#include<iostream>
//#include<thread>
#include<chrono>
#include<algorithm>
typedef unsigned long long ull;
static ull evensum=0;
static ull oddsum=0;
void f1(ull start,ull end)
{
  for(ull i=start;i<end;i++)
    {
      if((i & 0x1)==1)
	{
	  oddsum+=1;
	}
    }
}
void f2(ull start,ull end)
{
  for(ull i=start;i<end;i++)
    {
      if((i & 0x1)==0)
	{
	  evensum+=1; 
	}
    }
}

int main()
{
  ull start=1000; ull end=100000000;
  auto start_thr = std::chrono::high_resolution_clock::now();
  //std::thread worker1(f1,start,end);
  //std::thread worker2(f2,start,end);
  //  auto end_thr = std::chrono::high_resolution_clock::now();
  //worker1.join();
  //worker2.join();
  f1(start,end);
  f2(start,end);
  auto end_thr = std::chrono::high_resolution_clock::now();
  std::cout<< evensum <<std::endl;
  std::cout<< oddsum <<std::endl;
  auto duration= std::chrono::duration_cast<std::chrono::milliseconds>(end_thr-start_thr);
  std::cout<< duration.count()  <<std::endl;
  std::cin.get();
}
