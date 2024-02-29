#include <stdio.h>
#include <stdlib.h>


typedef int dataType;

typedef struct ListNode
{
	dataType data;		// ������
	struct ListNode* next;	// ָ��ָ����

}ListNode;


// ����ͷ�ڵ�
ListNode* nodeHead()
{
	ListNode *listnode = (ListNode*)malloc(sizeof(ListNode));		// ��ͷ����ڶ�������ռ�
	if (listnode != NULL)
	{
		listnode->next = NULL;		// ��ʼ��ָ����
		return listnode;	// ����ָ��
	}

	return NULL;
	
}

// �����ͷ��
int insertNodeHead(ListNode* node, dataType data)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL) return 0;

	newnode->next = node->next;
	node->next = newnode;
	newnode->data = data;

	return 1;
}

// �����β��
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

// ����ı���
//ListNode* ergodicNode(ListNode* node)
//{
//
//}

// ����Ĵ�ӡ
void printList(ListNode* node)
{
	ListNode *tempnode = node->next;	// ����ͷ���ӵ�һ���ڵ��ӡ
	while (tempnode)
	{
		printf("%d ", tempnode->data);
		//printf("%p ", tempnode);
		tempnode = tempnode->next;
	}
}


int main()
{
	ListNode* listnode = nodeHead();	// ��������
	for (int i= 0; i < 200; i++)
	{
		insertNodeBack(listnode, i);
	}
	printList(listnode);

	return 1;
}