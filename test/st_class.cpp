/*#include<iostream>

class base
{
  public:
  base(){std::cout<< "constructor base"<<std::endl;}
  virtual ~base(){std::cout<< "destructor base"<<std::endl;}
};
class derived:public base
{
  unsigned int* ptr;
public:
  derived(){
    ptr = new unsigned int;
    std::cout<<"constructor derived"<<std::endl;}
  ~derived(){
    delete ptr;
    std::cout<<"destructor derived"<<std::endl;}
};
class derived1:public base
{
  int* ptr1;
public:
  derived1(){
    ptr1 = new int;
    std::cout<< "derived1 constructor"<<std::endl;}
  ~derived1(){
    delete ptr1;
    std::cout<< "destructor derived1"<<std::endl;
  }
};
int main()
{
  base b;
  derived d;
  derived1 d1;
  return 0;
}
*/
#include<iostream>
#include<cstring>
class string
{
  char* str;
public:
string(const char* st)
  {
    //unsigned int size = strlen(st);
    str = new char[strlen(st)];
    memcpy(str,st,strlen(st));
    std::cout<<"constructor"<<std::endl;}
    string(const string& ref);
    unsigned int get_size();
   friend  std::ostream& operator <<(std::ostream& stream,const string& ref);
  char& operator [](unsigned int index){
    return str[index];
  }
  ~string(){delete [] str; std::cout<<"destructor"<<std::endl;}
};
unsigned int string::get_size(){return strlen(str);}
string::string(const string& ref)
{
//  unsigned int size= strlen(ref.str);
  str= new char[strlen(ref.str)];
  memcpy(str,ref.str,strlen(ref.str));
  std::cout<<"copy constructor"<<std::endl;
}
//string::string(const string& ref)=delete; to deactivate copy constructor
std::ostream& operator << (std::ostream& stream,const string& ref){
  stream << ref.str;
  return stream;
}
int main()
{
  string s1="sharjeel";
  string s2 =s1;
  s2[2]='e';
  std::cout<< s2 << std::endl<< s2.get_size()<<std::endl;;
  std::cin.get();
}
