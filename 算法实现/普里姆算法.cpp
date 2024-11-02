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
//	// PRIM
//	vector<NEXT_WEIGHT> prim_next_saved_vertexs;
//	vector<int> prim_saved_vertexs;
//	int min_weight = 0;
//
//	CHART_DATA<T> chart;
//	int header_data;
//	int vertexs_num;
//
//	void _Prim(int current_vertex = -1);
//	bool FindVertexMinWeightNext(int in_vertex, vector<NEXT_WEIGHT>* out_vertexs_weight);
//	void FindVertexNext(int in_vertex, vector<int>* out_next_vertexs, vector<int>* saved_vertexes);
//public:
//	// 边集数组
//	void CreateChart(int* vertexs, int** chart_array, int vertex_num, int side_num);
//
//	// 普里姆算法
//	void Prim(int current_vertex = -1);
//};
//
//bool WeightCompare(NEXT_WEIGHT x, NEXT_WEIGHT y){
//	return x.weight < y.weight;
//}
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
//void CHART<T>::FindVertexNext(int in_vertex, vector<int>* out_next_vertexs, vector<int>* saved_vertexes) {
//	bool IsVisited = false;
//	for (vector<SIDE_STRUCT>::iterator i = this->chart.side_list.begin(); i < this->chart.side_list.end(); i++){
//		if ((*i).begin == in_vertex) {
//			for (vector<int>::iterator j = saved_vertexes->begin(); j < saved_vertexes->end(); j++) {
//				if ((*i).end == *j) {
//					IsVisited = true;
//					break;
//				}
//			}
//			if (!IsVisited) {
//				out_next_vertexs->push_back((*i).end);
//			}
//			IsVisited = false;
//		}
//	}
//	return;
//}
//
//template <typename T>
//bool CHART<T>::FindVertexMinWeightNext(int in_vertex, vector<NEXT_WEIGHT>* out_vertexs_weight) {
//	NEXT_WEIGHT next_weight;
//	vector<NEXT_WEIGHT> next_vertexs_weight;
//	bool IsVisited = false;
//
//	for (vector<SIDE_STRUCT>::iterator i = this->chart.side_list.begin(); i < this->chart.side_list.end(); i++) {
//		if ((*i).begin == in_vertex) {
//			// 去除已经访问过的结点
//			for (vector<int>::iterator j = prim_saved_vertexs.begin(); j < prim_saved_vertexs.end(); j++) {
//				if ((*i).end == (* j)) {
//					IsVisited = true;
//					break;
//				}
//			}
//			if (!IsVisited) {
//				next_weight.next_vertex = (*i).end;
//				next_weight.weight = (*i).weight;
//				next_vertexs_weight.push_back(next_weight);
//			}
//			IsVisited = false;
//		}
//	}
//
//	// 返回可选结点
//	if (next_vertexs_weight.size()) {
//		next_weight.next_vertex = next_vertexs_weight.back().next_vertex;
//		next_weight.weight = next_vertexs_weight.back().weight;
//		*out_vertexs_weight = next_vertexs_weight;
//		return true;
//	}
//	else {
//		// 没有下一个结点
//		return false;
//	}
//}
//
//template <typename T>
//void CHART<T>::_Prim(int current_vertex) {
//	bool IsVisited = false;
//	int next_vertex = 0;
//	NEXT_WEIGHT next_vertexs;
//	vector<NEXT_WEIGHT> out_vertexs_weight;
//
//	if (current_vertex == -1)
//		current_vertex = header_data;
//
//	cout << "当前结点 -> " << current_vertex << endl;
//
//	// 保存当前结点 
//	prim_saved_vertexs.push_back(current_vertex);
//
//	while (FindVertexMinWeightNext(current_vertex, &out_vertexs_weight)){
//		// 获取并保存下一个顶点以及对应权重
//		for (vector<NEXT_WEIGHT>::iterator i = out_vertexs_weight.begin(); i < out_vertexs_weight.end(); i++){
//			prim_next_saved_vertexs.push_back(*i);
//		}
//		sort(prim_next_saved_vertexs.begin(), prim_next_saved_vertexs.end(), WeightCompare);
//		
//		// 选择未经过的最小点位
//		for (vector<NEXT_WEIGHT>::iterator i = prim_next_saved_vertexs.begin(); i < prim_next_saved_vertexs.end(); i++) {
//			for (vector<int>::iterator j = prim_saved_vertexs.begin(); j < prim_saved_vertexs.end(); j++) {
//				if ((*i).next_vertex == (*j))
//					IsVisited = true;
//			}
//			if (!IsVisited) {
//				next_vertex = (*i).next_vertex;
//				min_weight += (*i).weight;
//				break;
//			}
//			IsVisited = false;
//		}
//		
//		// 递归
//		_Prim(next_vertex);
//	}
//	return;
//}
//
//template <typename T>
//void CHART<T>::Prim(int current_vertex) {
//	prim_next_saved_vertexs.clear();
//	prim_saved_vertexs.clear();
//	_Prim(current_vertex);
//	cout << "最小权重: " << min_weight << endl;
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
//	chart.CreateChart(vertexs,(int **)chart_array, 6, 20);
//	chart.Prim();
//	return 0;
//}