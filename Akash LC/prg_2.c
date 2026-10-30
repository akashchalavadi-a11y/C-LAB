#include<stdio.h>

int main()
{
  float l,w,r,b,h;

  printf("Enter rectangle length and width:");
  scanf("%f%f",&l,&w);

  printf("Areas of rectangle =%.2f\n",l*w);
  printf("Perimeter of rectangle =%.2f\n",2*(l+w));

  printf("Enter circle radius:");
  scanf("%f",&r);

  printf("Area of circle=%.2f\n",3.14*r*r);
  printf("Circumference=%.2f\n",2*3.14*r);

  printf("Enter traingle base and height:");
  scanf("%f%f",&b,&h);

  printf("Area of traingle =%.2f\n",0.5*b*h);

  return 0;
}
