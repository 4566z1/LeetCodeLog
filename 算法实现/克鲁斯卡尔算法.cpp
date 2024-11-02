//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
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
//
//	bool FindCicle(int src_begin, int begin, int end, vector<SIDE_STRUCT>* side_list);
//public:
//	// 边集数组
//	void CreateChart(int* vertexs, int** chart_array, int vertex_num, int side_num);
//
//	// 克鲁斯卡尔算法
//	void Kruskal();
//};
//
//template <typename T>
//void CHART<T>::CreateChart(int* vertexs, int** chart_array, int vertexs_num, int side_num) {
//	SIDE_STRUCT side_buffer;
//
//	// 初始化顶点
//	this->header_data = vertexs[0];
//	this->vertexs_num = vertexs_num;
//	for (int i = 0; i < vertexs_num; i++) {
//		this->chart.vertexs.push_back(vertexs[i]);
//	}
//
//	// 初始化边
//	for (int i = 0; i < side_num; i++) {
//		side_buffer.begin = *((int*)chart_array + i * 3 + 0);
//		side_buffer.end = *((int*)chart_array + i * 3 + 1);
//		side_buffer.weight = *((int*)chart_array + i * 3 + 2);
//
//		this->chart.side_list.push_back(side_buffer);
//	}
//	return;
//}
//
//template <typename T>
//bool CHART<T>::FindCicle(int src_begin, int begin, int end, vector<SIDE_STRUCT>* side_list) {
//	if (end == src_begin) {
//		return true;
//	}
//	for (vector<SIDE_STRUCT>::iterator i = side_list->begin(); i < side_list->end(); i++) {
//		if ((*i).begin == end && (*i).end == begin)
//			continue;
//		if ((*i).begin == end) {
//			if (FindCicle(src_begin, end, (*i).end, side_list))
//				return true;
//		}
//	}
//	return false;
//}
//
//bool KruskalCompare(SIDE_STRUCT x, SIDE_STRUCT y) {
//	return x.weight < y.weight;
//}
//
//template <typename T>
//void CHART<T>::Kruskal() {
//	int j = 0;
//	int min_weight = 0;
//	SIDE_STRUCT backup_vertex;
//	vector<SIDE_STRUCT> side_list = this->chart.side_list;
//	vector<SIDE_STRUCT> saved_list;
//
//	// 最小权重排行
//	sort(side_list.begin(), side_list.end(), KruskalCompare);
//	
//	for (vector<SIDE_STRUCT>::iterator i = side_list.begin(); i < side_list.end() && j < vertexs_num - 1; i++, j++) {
//		// 检查两点是否已经都在树上 (检查是否有环)
//		if (FindCicle((*i).begin, (*i).begin, (*i).end, &saved_list)) {
//			vertexs_num++;
//			continue;
//		}
//
//		// 反转顶点
//		backup_vertex.begin = (*i).end;
//		backup_vertex.end = (*i).begin;
//		backup_vertex.weight = (*i).weight;
//		saved_list.push_back(*i);
//		saved_list.push_back(backup_vertex);
//		min_weight += (*i).weight;
//
//		// 输出
//		cout << (*i).begin << "-->" << (*i).end << " " << "Weight:" << (*i).weight << endl;
//	}
//	
//	cout << "最小权重:" << min_weight << endl;
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
//		/*{1, 0, 10},
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
//		{6, 8, 20}*/
//	};
//
//	//int vertexs[] = { 0,1,2,3,4,5 };
//
//	//int chart_array[][3] = {
//	//	{0, 1, 6},
//	//	{0, 2, 1},
//	//	{0, 3, 5},
//	//	{2, 4, 5},
//	//	{2, 5, 4},
//	//	{2, 1, 5},
//	//	{2, 3, 7},
//	//	{4, 5, 6},
//	//	{1, 4, 3},
//	//	{3, 5, 2},
//
//	//	/*{1, 0, 6},
//	//	{2, 0, 1},
//	//	{3, 0, 5},
//	//	{4, 2, 5},
//	//	{5, 2, 4},
//	//	{1, 2, 5},
//	//	{3, 2, 7},
//	//	{5, 4, 6},
//	//	{4, 1, 3},
//	//	{5, 3, 2}*/
//	//};
//
//	CHART<int> chart;
//	// 二维数组创建图结构(边集数组)
//	chart.CreateChart(vertexs, (int**)chart_array, 6, 10);
//	chart.Kruskal();
//	return 0;
//}