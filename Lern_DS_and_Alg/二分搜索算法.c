#include <stdio.h>
#include <stdlib.h>
// ���������㷨(������������ʹ��)
// ʹ�õݹ�ʵ��
int binarySearch(int *nums, int target, int left, int right)
{
	if (left > right) return 0;		//�ж��Ƿ񳬳��涨��Χ����ֹ�޽�������������
	int mid = (left + right) / 2;	// ������м��±�
	if (nums[mid] == target) return mid;	// ��������ֵ���� target(Ŀ��) �򷵻�
	if (nums[mid] < target) 
		return binarySearch(nums, target, mid + 1, right);	
	else
		return binarySearch(nums, target, left, mid - 1);
}


int search(int* nums, int numsSize, int target)
{
	return binarySearch(nums, target, 0, numsSize - 1);
}


//int main()
//{
//	int list[5] = { -1,1,2,8,10 };
//	printf("%d", search(list, 5, 8));
//	return 0;
//}


