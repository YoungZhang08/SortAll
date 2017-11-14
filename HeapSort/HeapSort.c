#include "stdio.h"

//ʹa[start,end]��Ϊһ����/С����
void HeapAdjust(int a[], int start, int end)
{
	int temp, j;
	temp = a[start];

	//�عؼ��ֽϴ�ĺ��ӽ������ɸѡ
	for (j = 2 * start;j <= end;j *= 2)
	{	//
		if (j < end && a[j] < a[j + 1])
			++j;          //j��¼�ؼ����нϴ���±�
		if (temp >= a[j])
			break;        //������λ��start��
		a[start] = a[j];
		start = j;
	}
	a[start] = temp;      //����
}


//������a���ж�����
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