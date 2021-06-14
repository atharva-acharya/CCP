#include<stdio.h>
int even(int m,int n )
{
    int i;
    printf("even numbers from range %d-%d is: \n",m,n);
    if(m%2 != 0)
    {
        m++;
    }

    for(i=m; i<=n; i+=2)
    {
        printf("%d\n",i);
    }
     return 0;
}
int main()
{
    int m,n;
    printf("enter the range m-n to print even numbers\n");
    scanf("%d %d",&m,&n);
    even(m,n);
    return 0;
}
