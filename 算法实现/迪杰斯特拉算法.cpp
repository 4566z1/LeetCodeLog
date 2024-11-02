//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//struct SIDE_STRUCT {
//	int begin;
//	int end;
//	int weight;
//};
//
//struct NEXT_WEIGHT {
//	int next_vertex;
//	int weight;
//};
//
//template <typename T>
//struct CHART_DATA {
//	vector<int> vertexs;
//	vector<SIDE_STRUCT> side_list;
//};
//
//template <typename T>
//class CHART {
//private:
//	CHART_DATA<T> chart;
//	int header_data;
//	int vertexs_num;
//public:
//	// 边集数组
//	void CreateChart(int* vertexs, int** chart_array, int vertex_num, int side_num);
//
//	// 普里姆算法
//	void Dijkstra();
//};
//
//template <typename T>
//void CHART<T>::CreateChart(int* vertexs, int** chart_array, int vertexs_num, int side_num) {
//	SIDE_STRUCT side_buffer;
//	
//	// 初始化顶点
//	this->header_data = vertexs[0];
//	this->vertexs_num = vertexs_num;
//	for (int i = 0; i < vertexs_num; i++){
//		this->chart.vertexs.push_back(vertexs[i]);
//	}
//
//	// 初始化边
//	for (int i = 0; i < side_num; i++){
//		side_buffer.begin = *((int*)chart_array + i*3 + 0);
//		side_buffer.end = *((int*)chart_array + i * 3 + 1);
//		side_buffer.weight = *((int*)chart_array + i * 3 + 2);
//
//		this->chart.side_list.push_back(side_buffer);
//	}
//	return;
//}
//
//template <typename T>
//void CHART<T>::Dijkstra() {
//	
//	return;
//}
//
//int main() {
//	int vertexs[] = { 0,1,2,3,4,5,6,7,8 };
//
//	int chart_array[][3] = {
//		{0, 1, 10},
//		{0, 2, 11},
//		{1, 3, 16},
//		{1, 4, 12},
//		{1, 5, 18},
//		{2, 3, 17},
//		{2, 8, 26},
//		{3, 7, 19},
//		{3, 6, 24},
//		{4, 5, 8},
//		{4, 6, 21},
//		{7, 6, 16},
//		{7, 8, 7},
//		{5, 6, 22},
//		{8, 6, 20},
//
//		{1, 0, 10},
//		{2, 0, 11},
//		{3, 1, 16},
//		{4, 1, 12},
//		{5, 1, 18},
//		{3, 2, 17},
//		{8, 2, 26},
//		{7, 3, 19},
//		{6, 3, 24},
//		{5, 4, 8},
//		{6, 4, 21},
//		{6, 7, 16},
//		{8, 7, 7},
//		{6, 5, 22},
//		{6, 8, 20}
//	};
//
//	/*int vertexs[] = { 0,1,2,3,4,5 };
//
//	int chart_array[][3] = {
//		{0, 1, 6},
//		{0, 2, 1},
//		{0, 3, 5},
//		{2, 4, 5},
//		{2, 5, 4},
//		{2, 1, 5},
//		{2, 3, 7},
//		{4, 5, 6},
//		{1, 4, 3},
//		{3, 5, 2},
//
//		{1, 0, 6},
//		{2, 0, 1},
//		{3, 0, 5},
//		{4, 2, 5},
//		{5, 2, 4},
//		{1, 2, 5},
//		{3, 2, 7},
//		{5, 4, 6},
//		{4, 1, 3},
//		{5, 3, 2}
//	};*/
//
//	CHART<int> chart;
//	// 二维数组创建图结构(边集数组)
//	chart.CreateChart(vertexs,(int **)chart_array, 9, 30);
//	chart.Dijkstra();
//	return 0;
//}