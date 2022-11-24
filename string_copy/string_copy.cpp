#include<iostream>
#include<cstring>
class String
{
  char* m_ptrbuff;
  unsigned int m_size;
  public:
  String(const char* st)
  {
    m_size = strlen(st);
    m_ptrbuff = new char[m_size];
    memcpy(m_ptrbuff,st,m_size);
  }
  String(const String& st){

    m_size = st.m_size;
    m_ptrbuff = new char[m_size];
    memcpy(m_ptrbuff,st.m_ptrbuff,m_size);
    std:: cout<< "string copied"<<std::endl;
  }
  ~String()
  {
    delete[] m_ptrbuff;
  }
 friend  std::ostream& operator << (std::ostream& ostream,const String& string);
};

std::ostream& operator<<(std::ostream& stream,const String& string)
{
  stream << string.m_ptrbuff;
  return stream;
}
void test(const auto& a)
{
  std:: cout<< a <<std::endl;
}
float test1()
{
  return 10.4;
}
int test2(){
  return 1;
}

int main()
{
  const char* str="sharjeel";
  String obj(str);
  String obj1=obj;
  //  obj1[2]='a';
  test('b');
  test(9);
  test(3.2);
  const auto& r=test1();
  std::cout<< r <<std::endl;
  const auto& r1=test2();
  std::cout<< r1 <<std::endl;
  std::cout<< obj <<std::endl;
  std::cout<< obj1 <<std::endl;
  return 0;
}

