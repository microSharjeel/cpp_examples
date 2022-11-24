#include<iostream>
#include<vector>
#include<stream>
#include<cstring>
template<class T>
T addall(std::vector<T>& vec)
{
  T count=0;
  for(auto& r:vec)
     count+=r;
  std::cout<< count <<std::endl;
  return count;
 
}
//specialized template for string type
template<>
string addall(std::vector<string>& vec)
{
  T count=0;
  for(auto& r:vec)
     count+=r;
  std::cout<< count <<std::endl;
  return count;
 
}
int main()
{
  std::vector<int>vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  std::cout<< addall<int>(vec)<<std::endl;
  return 0;
}
