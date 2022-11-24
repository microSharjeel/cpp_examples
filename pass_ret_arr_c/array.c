#include<stdio.h>
#include<stdlib.h>
int** fn1()
{
  int** arr = (int**)malloc(sizeof(int)*3);
  for(int i=0;i<3;i++)
    {
      arr[i]=(int*)malloc(sizeof(int)*3);
      for(int j=0;j<3;j++)
	arr[i][j]=i+j;
    }
  return arr;
}

void fn2(int* arr[]){
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      printf("value=%d\n",*(*(arr+i)+j));
}
int main()
{
  int ** array=fn1();
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      printf("value= %d\n",*(*(array+i)+j));
  fn2(array);
  return 0;
}
