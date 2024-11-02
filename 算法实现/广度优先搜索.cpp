//#include <iostream>
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
//
//	void FindVertexNext(int in_vertex, vector<int>* out_next_vertexs, vector<int>* saved_vertexes);
//public:
//	// �߼�����
//	void CreateChart(int* vertexs, int** chart_array, int vertex_num, int side_num);
//	
//	// ������ȱ���
//	void BFSTraverse();
//};
//
//template <typename T>
//void CHART<T>::BFSTraverse() {
//	vector<int> next_vertexs;
//	vector<int> saved_vertexes;
//	queue<int> TraversalQueue;
//	int vertex = 0;
//	bool IsSaved = false;
//
//	TraversalQueue.push(header_data);
//	
//	do
//	{
//		// ��ȡ���ȼ�����ͷ���
//		vertex = TraversalQueue.front();
//		// ע������������ܶ��ظ��������˷���Դ������
//		for (vector<int>::iterator i = saved_vertexes.begin(); i < saved_vertexes.end(); i++){
//			if (*i == vertex) {
//				IsSaved = true;
//				break;
//			}
//		}
//		if(!IsSaved)
//			saved_vertexes.push_back(vertex);
//		TraversalQueue.pop();
//	
//		cout << "��ǰ���ʽ�� -> " << vertex << endl;
//
//		// ��ȡ�����һ�ο��Է��ʵĽ�㼯��
//		FindVertexNext(vertex, &next_vertexs, &saved_vertexes);
//
//		if (next_vertexs.size()) {
//			// ����һ�ο��Է��ʵĽ���������ȼ����в�����
//			for (vector<int>::iterator i = next_vertexs.begin(); i < next_vertexs.end(); i++){
//				saved_vertexes.push_back(*i);
//				TraversalQueue.push(*i);
//			}
//			next_vertexs.clear();
//		}
//		IsSaved = false;
//	} while (TraversalQueue.size());
//	return;
//}
//
//template <typename T>
//void CHART<T>::CreateChart(int* vertexs, int** chart_array, int vertexs_num, int side_num) {
//	SIDE_STRUCT side_buffer;
//	
//	// ��ʼ������
//	this->header_data = vertexs[0];
//	for (int i = 0; i < vertexs_num; i++){
//		this->chart.vertexs.push_back(vertexs[i]);
//	}
//
//	// ��ʼ����
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
//int main() {
//	int vertexs[] = { 0,1,2,3,4,5,6,7,8 };
//
//	int chart_array[][3] = {
//		{0, 1, 1},
//		{0, 2, 1},
//		{1, 3, 1},
//		{1, 4, 1},
//		{1, 5, 1},
//		{2, 3, 1},
//		{2, 8, 1},
//		{3, 7, 1},
//		{3, 6, 1},
//		{4, 5, 1},
//		{4, 6, 1},
//		{7, 6, 1},
//		{7, 8, 1},
//		{5, 6, 1},
//		{8, 6, 1},
//
//		{1, 0, 1},
//		{2, 0, 1},
//		{3, 1, 1},
//		{4, 1, 1},
//		{5, 1, 1},
//		{3, 2, 1},
//		{8, 2, 1},
//		{7, 3, 1},
//		{6, 3, 1},
//		{5, 4, 1},
//		{6, 4, 1},
//		{6, 7, 1},
//		{8, 7, 1},
//		{6, 5, 1},
//		{6, 8, 1}
//	};
//
//	CHART<int> chart;
//	// ��ά���鴴��ͼ�ṹ(�߼�����)
//	chart.CreateChart(vertexs,(int **)chart_array, 9, 30);
//	chart.BFSTraverse();
//	return 0;
//}