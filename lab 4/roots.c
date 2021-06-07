#include <stdio.h>
#include <math.h>
int roots(int a, int b, int c)
{
    float d, r1,r2;
    d=(b*b)-(4*a*c);
    if(d>0){
        r1=(-b+sqrt(d))/(a);
        r2=(-b+sqrt(d))/(a);
        printf("Roots are real and distinct %0.2f %0.2f",r1,r2);

    }
    else if(d==0){
        r1=((-b))/(a);
        printf("Roots are real and equal %0.2f %0.2f",r1 ,r2);
    }
    else if(d<0){
        r1=(-b + sqrt (-d))/(a);
        r2=(-b -sqrt (-d))/(a);
        printf("roots are imaginary and distinct %0.2f %0.2f",r1,r2);
    }
    return 0;
}
int main()
{
    int a,b,c;
    printf("enter the values");
    scanf("%d %d %d",&a,&b,&c);
    roots(a,b,c);
} 