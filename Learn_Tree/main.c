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

// ����ڵ�
// ʹ�ö���ָ���ԭ���ǣ�������������޸�mian������ָ��ָ��ĵ�ַ,ֱ�Ӵ�һ��ָ�����޷������޸�main�����ڵ�ָ��ָ��ĵ�ַ��
int insert(TreeNode** rootPtr, DataType data)
{
	if (!*rootPtr) 
	{
		*rootPtr = creatNewNode(data); 
	}
}



int main()
{
	TreeNode* treeRoot;
	treeRoot = NULL;
	


	return 1;
}