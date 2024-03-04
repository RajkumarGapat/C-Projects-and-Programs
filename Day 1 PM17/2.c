#include<stdio.h>
int main()
{
  float si, prin, roi, noy;
  printf("Enter principle, Rate of Intrest & Number of years..");
  scanf("%f%f%f,&prin,&roi,&noy");
  si = prin * roi * noy / 100;

  printf("Principle = %f\n Simple Intrest = %f", prin , si);

  return 0;


}