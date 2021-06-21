#include <stdio.h>
int main()
{
    int arr[100];
    int size,i,temp,small_pos,large_pos,small=0,large=0;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter %d elements of array",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    large=arr[0];
    small_pos=0;
    large_pos=0;
    for(i=1;i<size;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            small_pos=i;
        }
        if(arr[i]>large)
        {
            large=arr[i];
            large_pos=i;
        }
    }
    printf("after interchanged:\n");
    temp=arr[large_pos];
    arr[large_pos]=arr[small_pos];
    arr[small_pos]=temp;
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);

    }

}