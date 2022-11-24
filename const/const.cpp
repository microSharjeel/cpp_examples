#include <iostream>
using namespace std;
class base
{
protected:  
const int x;
public:
  int y;  
base(int x1,int y1);
void change(int x2 ,int y2);
void print()const;
};
base::base(int x1,int y1):x(x1),y(y1){cout<<"constructor called"<<endl;}
void base::change(int x2, int y2){//x=x2; 
y=y2;}
void base::print()const{
//x=20;
//y=30;
cout<< x <<endl<< y<<endl;
}
int main()
{
base b(11,12);
b.change(13,14);
b.print();
 cout << b.y << endl;// << b.x <<endl; 
return 0;
}
