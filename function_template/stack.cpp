#include<iostream>
template <class T>
class stack
{
  int top,size;
  T* ptrstack;
public:
  stack(int t, int s);
  ~stack(){delete []ptrstack; std::cout<<"destructor"<<std::endl;}
  bool  isempty();
  bool isfull();
  void push(T&);
  T&  pop();
};
template <class T>
stack<T>::stack(int t,int s):top(t),size(s){
  ptrstack  = new T[size-1];
  std::cout<<"constructor"<<std::endl;
}
template <class T>
bool stack<T>::isempty(){return top==-1;}
template <class T>
bool stack<T>::isfull(){return top==(size-1);}
template <class T>
void stack<T>::push(T& val){if(isfull()==0) ptrstack[++top]=val; else std::cout<<"stack full"<<std::endl;}
template <class T>
T&   stack<T>::pop(){if(isempty()==0) return ptrstack[--top];  else {std::cout<<"stack empty"<<std::endl;
    std::cin.get();
  }}
int main()
{
  int top=-1;
  int size=9;
  char c[]={'s','h','a','r','j','e','e','l'};
  stack<char> stk(top,size);
  for(int i=0;i<size-1;i++)
    stk.push(c[i]);
  for(int j=0;j<size-1;j++)
    std::cout<< stk.pop() <<std::endl;
  return 0;
}
