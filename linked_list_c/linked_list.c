#include<stdio.h>
#include<stdlib.h>
typedef struct node_type
{
  int value;
  struct node_type* ptr_node;
}*nptr,node;

static nptr current_node=NULL;
static nptr first_node=NULL;
//static unsigned int count;
nptr add_node(int val)
{
  nptr nd = (nptr)malloc (sizeof(node));
  nd -> value=val;
  nd -> ptr_node=NULL;
  if(current_node==NULL)
    current_node=nd;
  else
    current_node->ptr_node=nd;
 
  return nd;
}
void traverse_add(nptr nd,int& count)
{  
  while(nd->ptr_node!=NULL)
    {
      count+=nd->value;
      printf("value=%d\n",nd->value);
      nd = nd->ptr_node;
    }
  count+=nd->value;
  printf("value=%d\n",nd->value);
 
}
void add_position(int val,nptr nd)
{
  if(nd->ptr_node!=NULL)
    {
      while(nd->value!=val)
       {
         nd=nd->ptr_node;
       }
      nptr nod = (nptr) malloc(sizeof(node));
      nod->value = val;
      nod->ptr_node = nd->ptr_node;
      nd->ptr_node=nod;
    }  
}
int main()
{
  int count=0;
  for(int i=0;i<5;i++)
    {
     if(current_node==NULL)
      first_node=add_node(i);
     else
       current_node=add_node(i);
    }
  traverse_add(first_node,count);
  printf("count=%d\n",count);
  //  std::cout<< count<<std::endl;
  add_position(2,first_node);
  count=0;
  traverse_add(first_node,count);
  printf("count=%d",count);
  //  std::cout<< count <<std::endl;
  //std::cin.get();
  return 0;
}
