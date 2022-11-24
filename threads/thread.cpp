#include<iostream>
#include<thread>
#include<chrono>
bool finished=true;
void fn()
{
  while(finished)
    {
      std::cout<<"working"<<std::endl;
      std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
int main()
{
  std::thread worker(fn);//passing function pointer
  std::cin.get();
  finished=false;
  worker.join();
  std::cout<<"finished"<<std::endl;
  return 0;
}
