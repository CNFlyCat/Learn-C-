#include <stdio.h>
#include <stdlib.h>
// 二分搜索算法(在有序数据中使用)
// 使用递归实现
int binarySearch(int *nums, int target, int left, int right)
{
	if (left > right) return 0;		//判断是否超出规定范围，防止无结果导致溢出错误
	int mid = (left + right) / 2;	// 计算出中间下标
	if (nums[mid] == target) return mid;	// 若储存数值等于 target(目标) 则返回
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


