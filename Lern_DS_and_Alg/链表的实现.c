#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;	// 起别名，利于后续更换数据类型

typedef struct ListNode
{
	ElementType data;	// 节点保存的数据
	struct ListNode* next;	// 指向下一个节点的指针

}ListNode;

// 初始化链表头
void nodeListInit(ListNode *list)
{
	list->next = NULL;
	list->data = 0;
}

// 链表插入元素
int insertListNode(ListNode* listhead, ElementType data, int index)
{
	ListNode* templist = listhead;
	// 循环找到指定序号的位置
	while (--index)
	{
		templist = templist->next;
		if (templist == NULL) 
		{
			printf("null");
			return 0;
		}
			
	}

	ListNode* newNode = malloc(sizeof(ListNode));	// 分配新的储存空间
	if (newNode == NULL) return 0;

	newNode->next = templist->next;		// 新节点继承上一节点指向下一节点的地址
	listhead->next = newNode;			// 上一节点继承新节点的地址
	newNode->data = data;				// 新节点保存数据
	return 1;
}

void printListNode(ListNode* head) {
	ListNode* tempList = head;
	while (tempList->next) {
		tempList = tempList->next;
		printf("%d ", tempList->data);   //因为头结点不存放数据，所以从第二个开始打印
	}
}

int main()
{
	ListNode head;
	nodeListInit(&head);
	insertListNode(&head, 5, 1);
	insertListNode(&head, 10, 2);
	printListNode(&head);
	return 0;
}


