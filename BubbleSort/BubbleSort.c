#include<stdio.h>

void BubbleSort(int b[],int n)
{
	int i,j,temp,flag=1;
	for( i = 0; i < n - 1 && flag; i++)
	{
		flag = 0;
		for( j = n - 1; j >= i; j--){
			if( b[j] > b [j+1] )
			{
				temp = b[j+1];
				b[j+1] = b[j];
				b[j] = temp;
				flag = 1;
			}
		}
	}

	for( i = 0; i < n; i ++)
		printf("%d\n",b[i]);
}

void main()
{
	int a[7] = {2,8,4,0,3,1,7};
	BubbleSort(a,7);
}