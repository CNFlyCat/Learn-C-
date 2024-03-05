#include <stdio.h>
#include <stdlib.h>



#define DataType int

// 二叉树，最多只有两个分支

// 节点结构体
typedef struct TreeNode
{
	DataType data;	// 数据域
	struct TreeNode* left;	// 左分支
	struct TreeNode* right; // 右分支

}TreeNode;

//创建一个新节点
TreeNode* creatNewNode(DataType data)
{
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));	// 分配新的空间
	newNode->data = data;	// 保存数据
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

// 插入节点
// 使用二级指针的原因是，在这个函数里修改mian函数中指针指向的地址,直接传一级指针是无法做到修改main函数内的指针指向的地址的
TreeNode* Insert(TreeNode* rootPtr, DataType data)
{
	// 如果树根地址为空，则创建一个根
	if (!rootPtr)
	{
		rootPtr = creatNewNode(data);
		return rootPtr;
	}
	// 与当前的数据比较大小，若是小于则放在左边，然后使用递归的方式来实现后续比较
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
	TreeNode* treeRoot = NULL; // 创建保存树根节点地址的变量
	
	treeRoot = Insert(treeRoot, 15);	// 插入数据，注意：需要用&treeRoot来传入指针，否则会发生错误
	treeRoot = Insert(treeRoot, 10);
	treeRoot = Insert(treeRoot, 5);
	treeRoot = Insert(treeRoot, 19);

	Search(treeRoot, 19);

	return 1;
}