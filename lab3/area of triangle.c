#include<stdio.h>
#include<math.h>

float areacalculate(int a, int b, int c)

{
  float s,area,sum;
  sum=a+b+c;
  s=sum/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("area of triangle is: %0.2f",area);
  return 0;

}

int main()
{
   int a1,b1,c1;
   printf("enter three sides :");
   scanf("%d %d %d",&a1,&b1,&c1);
   areacalculate(a1,b1,c1);
   return 0;
}
