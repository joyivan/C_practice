#include<stdio.h>
int main()
{
  float tank_volumn;
  float oil_density;
  float oil_kg;
  float area;
  tank_volumn=0.1;
  oil_density=850;
  oil_kg=tank_volumn*oil_density;
  area=oil_kg/0.85;
  printf("the total area with 0.85 oil is %f",area);
  return 0;

}

