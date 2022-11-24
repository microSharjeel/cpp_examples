#include<iostream>
#include<cstring>
class string
{
   char* str;
public:
  //  string(const char*);
  //  string(const string&);
  ~string(){delete[] str;}
  unsigned int get_size();
  char& operator [](unsigned int index){ return str[index];}
    friend std::ostream& operator << (std::ostream& ,const string& );  

    string(const char* st){str = new char[strlen(st)];
      memcpy(str,st,strlen(st));
      std::cout<<"constructor"<<std::endl;}
    string(const string& ref)
      {
	str = new char[strlen(ref.str)];
	memcpy(str,ref.str,strlen(ref.str));
	std::cout<<" copy constructor"<< std::endl;
      }
 };
  unsigned int string::get_size()
{
 return strlen(str);
}
std::ostream& operator << (std::ostream& stream,const string& ref)
{
 stream<<ref.str;
 return stream;
}
  int main()
  {
    string s1="sharjeel";
    string s2=s1;
    s2[2]='e';
    std::cout<<s1 <<std::endl << s2 <<std::endl<< s1.get_size()<<std::endl;
    std::cin.get();
  }


