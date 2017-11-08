#include<stdio.h>

void StrInsertSort(int a[],int n)
{
	int i,j,temp;
	for( i = 1; i <= n - 1; i++)
	{
		if(a[i] < a[i-1])
		{
			temp = a[i];
			for( j = i - 1; a[j] > temp; j--)
				a[j+1] = a[j];
			a[j+1] = temp;
		}
	}

	for(i = 0; i < n; i ++)
		printf("%d\n",a[i]);
}

void main()
{
	int arr[7] = {2,6,3,8,9,4,5};
	StrInsertSort(arr,7);
}