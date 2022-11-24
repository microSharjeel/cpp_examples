#include<iostream>
#include<cstring>

class String
{
  unsigned int m_size;
  char* st;
public:
  String(const char* str)
  {
    m_size=strlen(str);
    st= new char[m_size];
    memcpy(this->st,str,m_size);
    std::cout<< "constructor called" <<std::endl;
  }
  String(const String& r)
  {
    this->m_size=r.m_size;
    this->st= new char[r.m_size];
    memcpy(this->st,r.st,this->m_size);
    std::cout<< "copy constructor"<<std::endl;
  }
  ~String()
  {
    delete[] st;
    std::cout<< "destructor called"<<std::endl;
  }
  /*  void print()
  {
    std::cout<< this->st<<std::endl;
    }*/
  friend  std::ostream& operator <<(std::ostream&, const String& s);
 char& operator [](unsigned int index)
  {
    return st[index];
  }
};
std::ostream& operator <<(std::ostream& stream,const String& s)
{
  stream << s.st;
  return stream;
  
  }
int main()
{
  String s1="Sharjeel";
  String s2=s1;
  s2[2]='e';
  std::cout<< s1 <<std::endl<< s2 <<std::endl;
  return 0;
}
