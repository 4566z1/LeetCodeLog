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
	void PR_T(__in DATA<T> * p,__in T *find_data, __out int *out_layer, __in int layer = 0); // ǰ�����
	void MO_T(__in DATA<T>* p, __in T* find_data, __out int* out_layer, __in int layer = 0); // �������
	void PO_T(__in DATA<T>* p, __in T* find_data, __out int* out_layer, __in int layer = 0); // �������

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
	void MO_T_W(__in STRING_DATA<T>* p); // ��������޸ĳ�����������(�ݹ�)
	void MO_T();
	STRING_DATA<T> data;

	// ��һ�����
	STRING_DATA<T>* pre_p = nullptr;

	int tree_length = 0;
public:
	STRING_BTREE();
	~STRING_BTREE();

	void PrintTREE_MO();	// �������(����)���������
	void FinishStringTREE(); // ��������޸ĳ�����������
	void AppendNode(T data, bool left_default = true);
};