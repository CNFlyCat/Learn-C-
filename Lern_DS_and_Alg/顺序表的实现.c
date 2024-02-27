#include <stdio.h>
#include <stdlib.h>

/*
* ���Ա��һ�㹦�� *
* 
* ��ʼ�����Ա�����һ��ȫ�µ����Ա�
* ��ȡָ��λ���ϵ�Ԫ�أ�ֱ�ӻ�ȡ���Ա�ָ��λ��i��Ԫ��
* ��ȡԪ�ص�λ�ã���ȡĳ��Ԫ�������Ա��ϵ�λ��i
* ����Ԫ�أ���ָ��λ��i����Ԫ��
* ɾ��Ԫ�أ�ɾ��ָ��λ��i��Ԫ��
* ��ȡ���ȣ��������Ա���
*/

typedef int ElementType;	// ����������ں���������������

typedef struct List
{
	ElementType* array;	// ָ��˳���ײ������ָ��
	int capacity;	// ��ʾ�ײ����������
	int size;	// ���е�Ԫ������
}ArrayList;


int listInit(ArrayList* list)
{
	list->capacity = 10;	// ���õײ���������
	list->array = malloc(sizeof(ElementType) * list->capacity);		//����capacity��ElementType���͵Ŀռ�
	list->size = 0;	// ��ʼ��Ϊ0
	if (list->array == NULL) return 0;

	return 1;
}

// ˳������Ԫ��
int insertList(ArrayList* list, ElementType element, int index)
{
	for (int i = list->size; i > index; i--)
	{
		list->array[i] = list->array[i - 1];
	}
	list->array[index] = element;
	list->size++;
}

// ˳���ɾ��Ԫ��
int delElement(ArrayList* list, int index)
{
	// ��ɾ����Ԫ�ط�Χ����˳����С��ȡ������
	if (index > list->size)
		return 0;
	// ����ɾ������
	for (int i = index; i < list->size - 1; i++)
		list->array[i] = list->array[i + 1];
	list->size--;

	return 1;
}

// ˳����ӡ
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
	// ����˳���
	// ˳���Ԫ����Ŵ�0����
	if (listInit(&list))
	{
		list.array[0] = 5;
		list.array[1] = 8;
		list.array[2] = 10;
		list.size = 3;
		insertList(&list, 15, 2);
		printList(&list);
		if (!delElement(&list, 0))
			printf("ɾ��ʧ�ܣ�������Χ��\n");
		printList(&list);
	}
	else
	{
		printf("˳����ʼ��ʧ�ܣ�");
	}

	return 0;
}