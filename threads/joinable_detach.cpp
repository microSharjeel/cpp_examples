#include<iostream>
#include<thread>
#include<chrono>
void fn(int x)
{
  while(x-- >0)
    std::cout<<"Hello"<<x<<std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(3));
}
int main()
{
  std::thread t1(fn,10);
  std::cout<<"main hello"<<std::endl;
  // if(t1.joinable()) //example of t1.detach()
  //  t1.detach();
  if(t1.joinable())
    t1.join();
  std::cout<<"main bye"<<std::endl;
  // std::cin.get();
  std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}
