#include <stdio.h>
#include <stdlib.h>



#define DataType int

// �����������ֻ��������֧

// �ڵ�ṹ��
typedef struct TreeNode
{
	DataType data;	// ������
	struct TreeNode* left;	// ���֧
	struct TreeNode* right; // �ҷ�֧

}TreeNode;

//����һ���½ڵ�
TreeNode* creatNewNode(DataType data)
{
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));	// �����µĿռ�
	newNode->data = data;	// ��������
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

int Search(TreeNode* rootPtr, int data)
{
	if (!rootPtr) return 0;
	else if (rootPtr->data == data) printf("%d", data);
	else if (data < rootPtr->data) return Search(rootPtr->left, data);
	else return Search(rootPtr->right, data);
}

// ����ڵ�
// ʹ�ö���ָ���ԭ���ǣ�������������޸�mian������ָ��ָ��ĵ�ַ,ֱ�Ӵ�һ��ָ�����޷������޸�main�����ڵ�ָ��ָ��ĵ�ַ��
TreeNode* Insert(TreeNode* rootPtr, DataType data)
{
	// ���������ַΪ�գ��򴴽�һ����
	if (!rootPtr)
	{
		rootPtr = creatNewNode(data);
		return rootPtr;
	}
	// �뵱ǰ�����ݱȽϴ�С������С���������ߣ�Ȼ��ʹ�õݹ�ķ�ʽ��ʵ�ֺ����Ƚ�
	else if (data <= rootPtr->data)
	{
		rootPtr->left = Insert(rootPtr->left, data);
	}
	else
	{
		rootPtr->right = Insert(rootPtr->right, data);
	}
	return rootPtr;
}



int main()
{
	TreeNode* treeRoot = NULL; // �������������ڵ��ַ�ı���
	
	treeRoot = Insert(treeRoot, 15);	// �������ݣ�ע�⣺��Ҫ��&treeRoot������ָ�룬����ᷢ������
	treeRoot = Insert(treeRoot, 10);
	treeRoot = Insert(treeRoot, 5);
	treeRoot = Insert(treeRoot, 19);

	Search(treeRoot, 19);

	return 1;
}