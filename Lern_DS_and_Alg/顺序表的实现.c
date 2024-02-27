#include <stdio.h>
#include <stdlib.h>

/*
* 线性表的一般功能 *
* 
* 初始化线性表：创建一个全新的线性表
* 获取指定位置上的元素：直接获取线性表指定位置i的元素
* 获取元素的位置：获取某个元素在线性表上的位置i
* 插入元素：在指定位置i插入元素
* 删除元素：删除指定位置i的元素
* 获取长度：返回线性表长度
*/

typedef int ElementType;	// 起别名，利于后续更换数据类型

typedef struct List
{
	ElementType* array;	// 指向顺序表底层数组的指针
	int capacity;	// 表示底层数组的容量
	int size;	// 表中的元素数量
}ArrayList;


int listInit(ArrayList* list)
{
	list->capacity = 10;	// 设置底层数组数量
	list->array = malloc(sizeof(ElementType) * list->capacity);		//分配capacity个ElementType类型的空间
	list->size = 0;	// 初始化为0
	if (list->array == NULL) return 0;

	return 1;
}

// 顺序表插入元素
int insertList(ArrayList* list, ElementType element, int index)
{
	for (int i = list->size; i > index; i--)
	{
		list->array[i] = list->array[i - 1];
	}
	list->array[index] = element;
	list->size++;
}

// 顺序表删除元素
int delElement(ArrayList* list, int index)
{
	// 若删除的元素范围超出顺序表大小则取消操作
	if (index > list->size)
		return 0;
	// 进行删除操作
	for (int i = index; i < list->size - 1; i++)
		list->array[i] = list->array[i + 1];
	list->size--;

	return 1;
}

// 顺序表打印
void printList(ArrayList* list)
{
	printf("size: %d\n", list->size);
	for (int i = 0; i < list->size; i++)
		printf("%d ", list->array[i]);
	printf("\n");

}


int main()
{
	ArrayList list;
	// 创建顺序表
	// 顺序表元素序号从0递增
	if (listInit(&list))
	{
		list.array[0] = 5;
		list.array[1] = 8;
		list.array[2] = 10;
		list.size = 3;
		insertList(&list, 15, 2);
		printList(&list);
		if (!delElement(&list, 0))
			printf("删除失败！超出范围！\n");
		printList(&list);
	}
	else
	{
		printf("顺序表初始化失败！");
	}

	return 0;
}