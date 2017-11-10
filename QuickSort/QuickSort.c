#include<stdio.h>

int position(int low,int high,int a[])
{
	int temp;   // ‡÷·÷µ
	temp = a[low];
	while(low < high){
		while(high > low)
		{
			if(a[high] < temp)
			{
				a[low] = a[high];
				break;
			}	
			high --;
		}
        while(low < high)
		{
			 if(a[low] > temp)
			 {
				a[high] = a[low];
				break;
			 }
			 low ++;
		}   
	}
	a[low] = a[high] = temp;
    return low;
}


void QuickSort(int low,int high,int a[])
{
	int posKey;
	if(low < high)
	{
		posKey = position(low,high,a);
		
		QuickSort(low,posKey-1,a);
		QuickSort(posKey+1,high,a);
	}  
	
}

int main()
{
	int a[8] = {5,7,2,3,6,9,8,1},i;
	QuickSort(0,7,a);
	for(i=0;i<8;i++)
		printf("%d\n",a[i]);
	return 0;
}
