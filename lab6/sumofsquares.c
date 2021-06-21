#include<stdio.h>
int squaresum(n)
{
  int i,sum=0;

  for(i = 1; i <=2*n; i++) {
        if((i % 2) != 0) {
            sum += (i*i);
        }
    }
  printf("Sum of squares of first %d natural odd numbers = %d",  n, sum);

  return sum;
}
int main()
{
  int a;
  printf("enter a number");
  scanf("%d",&a);
  squaresum(a);
}