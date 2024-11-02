#pragma once
#ifndef _TREE_
#define _TREE_
#include <iostream>
#include <list>
#endif
using namespace std;

template <typename T>
struct DATA {
	DATA* lchild = nullptr;
	T element;
	DATA* rchild = nullptr;
};

template <typename T>
struct STRING_DATA {
	STRING_DATA* lchild = nullptr;
	bool ltag = 0;
	T element = 0;
	bool rtag = 0;
	STRING_DATA* rchild = nullptr;
};

template <typename T>
class BTREE {
private:
	void PR_T(__in DATA<T> * p,__in T *find_data, __out int *out_layer, __in int layer = 0); // 前序遍历
	void MO_T(__in DATA<T>* p, __in T* find_data, __out int* out_layer, __in int layer = 0); // 中序遍历
	void PO_T(__in DATA<T>* p, __in T* find_data, __out int* out_layer, __in int layer = 0); // 后序遍历

public:
	/*BTREE();
	~BTREE();*/
	DATA<T>* data = new DATA<T>;

	void AppendNode(T data, bool left_default = true);
	int FindNodeLayer(T data, int method);
};

template <typename T>
class STRING_BTREE {
private:
	void MO_T_W(__in STRING_DATA<T>* p); // 中序遍历修改成线索二叉树(递归)
	void MO_T();
	STRING_DATA<T> data;

	// 上一个结点
	STRING_DATA<T>* pre_p = nullptr;

	int tree_length = 0;
public:
	STRING_BTREE();
	~STRING_BTREE();

	void PrintTREE_MO();	// 中序遍历(迭代)输出二叉树
	void FinishStringTREE(); // 中序遍历修改成线索二叉树
	void AppendNode(T data, bool left_default = true);
};