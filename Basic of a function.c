#include<stdio.h>

 void sum(int a ,int b,int c)
{
    printf("The sum is:%d\n",a+b+c);
}
void sub(int a,int b)
{
    printf("The sub is:%d\n",a-b);
}
int main()
{
   sum(5,6,6);
  sum(7,8,9);
 sub(34,23);
}
