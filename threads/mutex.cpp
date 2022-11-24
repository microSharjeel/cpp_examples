#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
static int x=0;
std::mutex m;
void incr()
{
  m.lock();
  x++;
  std::cout<<std::this_thread::get_id()<<std::endl;
  std::cout<<x<<std::endl;
  m.unlock();
}

int main()
{
  std::thread t1(incr);
  std::thread t2(incr);
  if(t1.joinable())
    t1.join();
  if(t2.joinable())
    t2.join();
  //std::this_thread::sleep_for(std::chrono::seconds(2));
  std::cout<<"Hello"<<std::endl <<x<<std::endl;
  return 0;
}
