#include<stdio.h>
double triangleArea(double b,double h)
{
    return 0.5*b*h;
}
int main()
{
  double base,height;
  printf("Enter Base: ");
  scanf("%lf",&base);
  printf("Enter height: ");
  scanf("%lf",&height);

  double area = triangleArea(base,height);

  printf("Area = %.4lf\n",area);
}
