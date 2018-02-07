#include<stdio.h>
int main()
{
  int a,b,c,count;
  printf("Please enter a value:");
  scanf("%d",&a);
  printf("\n");
  printf("Please enter b value:");
  scanf("%d",&b);
  c=a+b;
  printf("\n%d\n",c);
  for (count=0;count<10;count++)
  {
    printf("\a");
  }
  return 0;
}

