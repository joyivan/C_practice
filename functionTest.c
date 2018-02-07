#include<stdio.h>
#define PI 3.141593
float cylinder_area(float r ,float h);
int main()
{
  float r,h,s;
  puts("please input the radius and hieht of the cylinder:");
  if (scanf("%f,%f",&r,&h)==2)
    s=cylinder_area(r,h);
  else
    puts("input the wrong parameters like radius and hight!");
  printf("\n the surface area of the cylinder is %f\n",s);
  return 0;
}
float cylinder_area(float r,float h){
  float cd_area;
  cd_area=2*(PI*r*r)+(2*PI*r*h);
  return cd_area;
}


