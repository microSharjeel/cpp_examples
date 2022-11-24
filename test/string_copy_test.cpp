#include <iostream>
#include<cstring>
class String
{
  unsigned int m_size;
  char* m_buffer;
public:
  String (const char* st);
  String(const String& r);
  ~String(){
    delete[] m_buffer;
    std::cout<< "destructor called"<<std::endl;
  }
  friend std::ostream& operator << (std::ostream&, const String&);
  char& operator []( unsigned int index)
  {
    return this->m_buffer[index];
  }
};
String::String(const char* st){
  m_size = strlen(st);
  m_buffer=new char[m_size];
  memcpy (m_buffer,st,m_size);
  std::cout<< "constructor called" <<std::endl;
}
String::String(const String& r):m_size(r.m_size)
{
  m_buffer = new char[m_size];
  memcpy(m_buffer,r.m_buffer,m_size);
  std::cout << "copy constructor" <<std::endl;

}
std::ostream& operator << (std::ostream& stream, const String& r)
{
  stream << r.m_buffer;
  return stream;
}
int main()
{
  String s1="Sharjeel";
  String s2=s1;
  s2[2]='e';
  std::cout << s1 <<std::endl<< s2 <<std::endl;
  return 0;
}
