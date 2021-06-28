#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10]={0},n1,m1,n2,m2,n3,m3;
	printf("enter the no. of Rows in 1st matrix\n");
	scanf("%d",&n1);
	printf("enter the no. of columns in 1st matrix\n"); 
	scanf("%d",&m1);
	printf("enter the no. of Rows in 2nd matrix\n");
	scanf("%d",&n2);
	printf("enter the no. of columns in 2nd matrix\n"); 
	scanf("%d",&m2);
	printf("enter the elements of the matrix1\n");
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter the elements of the matrix2\n");
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<m2;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	if(n1==n2 && m1==m2)
	{
		n3=n1;
		m3=m1;
		for(int i=0;i<n3;i++)
		{
			for(int j=0;j<m3;j++)
			{
				C[i][j]=A[i][j]+B[i][j];
			}
		}
		printf("Matrices sum is \n");
		for(int i=0;i<n3;i++)
		{
			printf("\n");
			for(int j=0;j<m3;j++)
			{
				printf("%d ",C[i][j]);
			}
		}
	}	
	else{
		printf("Enter correctnumber of rows and columns");
	}
	return 0;
}