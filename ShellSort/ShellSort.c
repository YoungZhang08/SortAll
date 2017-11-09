#include<stdio.h>

void ShellSort(int a[], int n)
{
	int i, j, temp, d = n;
	do {
		d = d / 3 + 1;
		for (i = d; i <= n - 1; i++)
		{
			if (a[i]<a[i - d])
			{
				temp = a[i];
				for (j = i - d ; j>=0 && a[j]>temp; j = j - d)
					a[j + d] = a[j];
				a[j + d] = temp;
			}
		}
		
	} while (d>1);

	for (i = 0; i < n; i++)
		printf("%d\n", a[i]);
}

void main()
{
	int a[8] = { 5,7,2,1,3,6,9,8 };
	
	ShellSort(a, 8);
}