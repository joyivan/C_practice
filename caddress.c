#include<stdio.h>
int main()
{
  int *pi;
  char *pc;
  float *pf;
  int i=290;
  char c=65;
  float f=1.414;
  pi=&i;
  pc=&c;
  pf=&f;
  printf("i=%d\n",*pi);
  printf("c=%c\n",*pc);
  printf("f=%f\n",*pf);
  return 0;
}
