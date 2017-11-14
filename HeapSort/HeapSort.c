#include "stdio.h"

//使a[start,end]成为一个大/小顶堆
void HeapAdjust(int a[], int start, int end)
{
	int temp, j;
	temp = a[start];

	//沿关键字较大的孩子结点向下筛选
	for (j = 2 * start;j <= end;j *= 2)
	{	//
		if (j < end && a[j] < a[j + 1])
			++j;          //j记录关键字中较大的下标
		if (temp >= a[j])
			break;        //插入在位置start上
		a[start] = a[j];
		start = j;
	}
	a[start] = temp;      //插入
}


//对数组a进行堆排序
void HeapSort(int a[], int length)
{
	int i, temp;;
	for (i = length / 2;i > 0; i--)
		HeapAdjust(a, i, length);

	for (i = length;i > 1; i--)
	{
		temp = a[1];
		a[1] = a[i];
		a[i] = temp;

		HeapAdjust(a, 1, i - 1);
	}
}

void main()
{
	int i;
	int a[] = { 0,3,7,1,8,9,4,6,5,2 };
	HeapSort(a, 9);
	for (i = 1; i <= 9; i++)
		printf("%d\n", a[i]);
}