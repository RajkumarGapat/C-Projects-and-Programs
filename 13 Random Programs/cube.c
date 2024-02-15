#include<stdio.h>
void main()
{
  float volume;  
  float l,b,h;
  printf("Please enter length of your cube = ");
  printf("Please enter breadth of your cube = ");
  printf("Please enter height of your cube = ");
  scanf("%f%f%f",&l,&b,&h);

  volume = l*b*h;
  printf("volume of cube = %f",volume);

  printf("\n Length,Breadth and Height of your cube is %f,%f,%f, and your volume of cube is %f",l,b,h,volume);

}