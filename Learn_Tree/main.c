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

// 插入节点
// 使用二级指针的原因是，在这个函数里修改mian函数中指针指向的地址,直接传一级指针是无法做到修改main函数内的指针指向的地址的
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