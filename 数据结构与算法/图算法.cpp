#include "chart.hpp"

int main() {
	// ��������
	int vertexs[] = {
		4,
		5,
		6
	};

	// ������������
	int chart_array[3][2] = { 
		{1, 2},
		{0, 2},
		{0, 1}
	};

	// �����������ݵĴ�С
	int chart_array_size[] = {
		2,
		2,
		2
	};

	CHART<int> chart;

	chart.CreateChartByArray(vertexs, (int **)chart_array, 3, chart_array_size);
	return 0;
}

template <typename T>
bool CHART<T>::CreateChartByArray(T* in_vertexs, int** array_connect, int vertexs_num, int* vertexs_connect_size) {
	// ��ʼ������
	VERTEX<T> vertex_buffer;
	for (int i = 0; i < vertexs_num; i++){
		vertex_buffer.data = in_vertexs[i];
		vertex_buffer.index = i;
		vertexs.push_back(vertex_buffer);
	}

	// ��ʼ��������������
	int rows;
	VERTEX_CONNECT vertex_connect_buffer;
	for (int i = 0; i < vertexs_num; i++){
		vertex_connect_buffer.src_index = i;
		rows = vertexs_connect_size[i];

		for (int j = 0; j < rows; j++){
			vertex_connect_buffer.dst_indexs.push_back(*((int*)array_connect + i * rows + j));
		}
		vertex_connect.push_back(vertex_connect_buffer);
		vertex_connect_buffer.dst_indexs.clear();
	}
	return true;
}