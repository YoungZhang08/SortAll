#include<stdio.h>

void StrInsertSort(int a[],int n)
{
	int i,j,temp,low,high,mid;
	for( i = 1; i <= n - 1; i++)
	{
		if(a[i] < a[i-1])
		{
			temp = a[i];
			low = 0;
			high = i - 1;
			while(low <= high)
			{
				mid = (low+high)/2;
				if(a[mid] > temp)
					high = mid - 1;
				else
					low = mid + 1;
			}
			for( j = i - 1; j >= low; j--)
				a[j+1] = a[j];
			a[low] = temp;
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