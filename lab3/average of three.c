#include<stdio.h>

float calculate(float a,float b,float c)
{
  float avg=0,sum=0;
  sum=a+b+c;
  avg=sum/3;
  return avg;
}
 int main()
{
  float a,b,c,x;
  printf("Please Enter three nos. :\n");
  scanf("%f%f%f",&a,&b,&c);
  x=calculate(a,b,c);
  printf("\n average of the three is = %f\n",x);

  return 0;
}
