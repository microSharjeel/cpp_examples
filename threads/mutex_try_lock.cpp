#include<iostream>
#include<thread>
#include<mutex>
static int x=0;
std::mutex mtx;
void fn()
{
  for(int i=0;i<100000;i++)
    {
      if(mtx.try_lock())//mtx.lock();//if(mtx.try_lock())
{
      x++;
     mtx.unlock();
}
      
    }
}
int main()
{
  std::thread t1(fn);
  std::thread t2(fn);
  if(t1.joinable())
    t1.join();
  if(t2.joinable())
    t2.join();
  std::cout<< x <<std::endl;
  std::cout<< "exit main"<<std::endl;
  std::cin.get();
}
