#include<iostream>
using namespace std;

class base
{
public:
  base(){cout<<"base constructor"<<endl;};
 virtual ~base(){cout<<"base destructor"<<endl;}
};

class derived:public base
{
  int* parr;
public:
  derived(){
    parr = new int[4];
    cout<<"derived constructor"<<endl;};
  ~derived(){
    delete [] parr;
    cout<<"derived destructor"<<endl;}
};
int main()
{
  base* b=new base();
  delete b;
  cout<<"------------"<<endl;
  derived* d=new derived();
  delete d;
  cout<<"-------------"<<endl;
  base* poly = new derived();
  delete poly;
  return 0;
}
