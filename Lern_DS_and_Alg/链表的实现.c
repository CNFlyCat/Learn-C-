#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;	// ����������ں���������������

typedef struct ListNode
{
	ElementType data;	// �ڵ㱣�������
	struct ListNode* next;	// ָ����һ���ڵ��ָ��

}ListNode;

// ��ʼ������ͷ
void nodeListInit(ListNode *list)
{
	list->next = NULL;
	list->data = 0;
}

// �������Ԫ��
int insertListNode(ListNode* listhead, ElementType data, int index)
{
	ListNode* templist = listhead;
	// ѭ���ҵ�ָ����ŵ�λ��
	while (--index)
	{
		templist = templist->next;
		if (templist == NULL) 
		{
			printf("null");
			return 0;
		}
			
	}

	ListNode* newNode = malloc(sizeof(ListNode));	// �����µĴ���ռ�
	if (newNode == NULL) return 0;

	newNode->next = templist->next;		// �½ڵ�̳���һ�ڵ�ָ����һ�ڵ�ĵ�ַ
	listhead->next = newNode;			// ��һ�ڵ�̳��½ڵ�ĵ�ַ
	newNode->data = data;				// �½ڵ㱣������
	return 1;
}

void printListNode(ListNode* head) {
	ListNode* tempList = head;
	while (tempList->next) {
		tempList = tempList->next;
		printf("%d ", tempList->data);   //��Ϊͷ��㲻������ݣ����Դӵڶ�����ʼ��ӡ
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


