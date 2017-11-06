#include<stdio.h>

void SimSelSort(int b[],int n)
{
	int i,j,min,temp;

	for( i = 0; i <= n - 1; i++)
	{
		min = i;
		for(j = i + 1; j <= n - 1; j++)
		{
			if( b[min] > b [j] )
				min = j;
			
		}
		if(min != i)
		{
			temp = b[min];
			b[min] = b[i];
			b[i] = temp;
		}

	}

	for( i = 0; i <= n - 1; i ++)
		printf("%d\n",b[i]);
}

void main()
{
	int a[7] = {2,8,4,0,3,1,7};
	SimSelSort(a,7);
}