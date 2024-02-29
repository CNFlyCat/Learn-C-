#include <stdio.h>
#include <stdlib.h>


typedef int dataType;

typedef struct ListNode
{
	dataType data;		// 数据域
	struct ListNode* next;	// 指针指针域

}ListNode;


// 创建头节点
ListNode* nodeHead()
{
	ListNode *listnode = (ListNode*)malloc(sizeof(ListNode));		// 给头结点在堆区分配空间
	if (listnode != NULL)
	{
		listnode->next = NULL;		// 初始化指针域
		return listnode;	// 返回指针
	}

	return NULL;
	
}

// 链表的头插
int insertNodeHead(ListNode* node, dataType data)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL) return 0;

	newnode->next = node->next;
	node->next = newnode;
	newnode->data = data;

	return 1;
}

// 链表的尾插
int insertNodeBack(ListNode* node, dataType data)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL) return 0;
	newnode->next = NULL;
	newnode->data = data;

	ListNode* tempnode = node;
	while (tempnode->next)
	{
		tempnode = tempnode->next;
	}

	tempnode->next = newnode;

}

// 链表的遍历
//ListNode* ergodicNode(ListNode* node)
//{
//
//}

// 链表的打印
void printList(ListNode* node)
{
	ListNode *tempnode = node->next;	// 跳过头结点从第一个节点打印
	while (tempnode)
	{
		printf("%d ", tempnode->data);
		//printf("%p ", tempnode);
		tempnode = tempnode->next;
	}
}


int main()
{
	ListNode* listnode = nodeHead();	// 创建链表
	for (int i= 0; i < 200; i++)
	{
		insertNodeBack(listnode, i);
	}
	printList(listnode);

	return 1;
}