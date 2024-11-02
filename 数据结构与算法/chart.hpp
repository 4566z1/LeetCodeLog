#pragma once
#ifndef _CHART_
#define _CHART_

#include <iostream>
#include <list>
using namespace std;

template <typename T>
struct VERTEX{
	int index;
	T data;
};

struct VERTEX_CONNECT {
	int src_index;
	list<int> dst_indexs;
};

template <typename T>
class CHART {
private:
	list<VERTEX<T>> vertexs;	// ��������
	list<VERTEX_CONNECT> vertex_connect; // ������������

public:

	// ͨ�����鴴���ڽӱ�
	bool CreateChartByArray(__in T* in_vertexs, __in int** array_connect, __in int vertexs_num, __in int* vertexs_connect_size);
};
#endif