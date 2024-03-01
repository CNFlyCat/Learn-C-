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

// ����Ĳ���
void insertNode(ListNode* list, dataType data,int location)
{
	if (location < 1) return 0;	// ��ֹ�������λ��
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL) return 0;

	ListNode* templist = list;

	// ������ָ��λ��
	while (--location)
	{
		templist = templist->next;
		if (!templist) return 0;	// ��ֹ��������Χ
	}

	newnode->next = templist->next;
	templist->next = newnode;
	newnode->data = data;

	return 1;
}

// �����ɾ��
int delNode(ListNode* list, int location)
{
	if (location < 1) return 0;	// ��ֹ�������λ��

	ListNode* templist = list;

	// ������ָ��λ�� �����λ����ָ���ڵ�λ�õ�ǰ���ڵ�
	while (--location)
	{
		templist = templist->next;
		if (!templist) return 0;	// ��ֹ��������Χ
	}

	ListNode* p = templist->next;	// ����Ҫ��ɾ���Ľڵ��ַ
	templist->next = templist->next->next;	// ��ǰ���ڵ��ָ����ָ���̽ڵ�ĵ�ַ

	free(p);	// �ͷű�ɾ���ڵ�Ŀռ�
	p = NULL;	// �ͷ�ָ��

	return 1;
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
	printf("\n");
}


int main()
{
	ListNode* listnode = nodeHead();	// ��������
	for (int i= 0; i < 20; i++)
	{
		insertNodeBack(listnode, i);
	}
	printList(listnode);
	insertNode(listnode, 99, 3);
	printList(listnode);
	delNode(listnode, 3);
	printList(listnode);
	return 1;
}