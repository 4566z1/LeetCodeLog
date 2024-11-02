//#include <iostream>
//#include <vector>
//#include <random>
//using namespace std;
//
//void showList(vector<int>* list) {
//	cout << "\n";
//	for (int i = 0; i < list->size(); i++){
//		cout << list->at(i) << " ";
//	}
//	cout << "\n";
//}
//
////void BubbleSort(vector<int> * list) {
////	int length = list->size();
////	bool isFinish = false;
////
////	while (!isFinish) {
////		isFinish = true;
////		for (int i = 0; i < length - 1; i++) {
////			showList(list);
////			if (list->at(i) > list->at(i + 1)) {
////				int temp = list->at(i);
////				(*list)[i] = (*list)[i + 1];
////				(*list)[i + 1] = temp;
////				isFinish = false;
////			}
////		}
////	}
////	return;
////}
//
///* 选择排序 */
////void SelectSort(vector<int>* list) {
////	int length = list->size();
////	for (int i = 0; i < length; i++){
////		showList(list);
////		int min_index = i;
////
////		// 选出最小的元素
////		for (int j = i + 1; j < length; j++){
////			if (list->at(j) < list->at(min_index)) { min_index = j; }
////		}
////		// 如果不等于当前的元素则交换元素
////		if (min_index != i) { swap(((*list)[i]), ((*list)[min_index])); }
////	}
////	return;
////}
//
///* 优化后的选择排序 */
////void SelectSortBetter(vector<int>* list) {
////	int length = list->size();
////	for (int i = 0; i < length; i++, length--){
////		showList(list);
////		int min_index = i;
////		int max_index = i;
////		// 选出最小和最大的元素
////		for (int j = i + 1; j < length; j++){
////			if (list->at(j) < list->at(min_index)) { min_index = j; }
////			if (list->at(j) > list->at(max_index)) { max_index = j; }
////		}
////
////		// 如果不等于当前的元素则交换元素
////		if (min_index != i) { swap(((*list)[i]), ((*list)[min_index])); }
////		if (max_index != length - 1) { swap(((*list)[length - 1]), ((*list)[max_index])); }
////	}
////	return;
////}
//
///* 插入排序 */
////void InsertSort(vector<int>* list) {
////	vector<int> sort_list;
////
////	sort_list.push_back(list->at(0));
////	for (int i = 1; i < list->size(); i++) {
////		showList(&sort_list);
////		for (vector<int>::iterator j = sort_list.begin(); j < sort_list.end(); j++) {
////			if (list->at(i) <= *(j)) {
////				sort_list.insert(j, list->at(i));
////				break;
////			}
////			else if (j == sort_list.end() - 1) {
////				sort_list.push_back(list->at(i));
////				break;
////			}
////		}
////	}
////	*list = sort_list;
////}
////
////void InsertSort(vector<int>* list) {
////	vector<int> sort_list;
////
////	sort_list.push_back(list->at(0));
////	for (int i = 1; i < list->size(); i++) {
////		showList(&sort_list);
////		for (vector<int>::iterator j = sort_list.begin(); j < sort_list.end(); j++) {
////			if (list->at(i) <= *(j)) {
////				sort_list.insert(j, list->at(i));
////				break;
////			}
////			else if (j == sort_list.end() - 1) {
////				sort_list.push_back(list->at(i));
////				break;
////			}
////		}
////	}
////	*list = sort_list;
////}
////
////// 希尔排序
////void ShellSort(vector<int>* list) {
////	
////	return;
////}
//
//// 快速排序
//void QuickSort(vector<int>* list, int l, int r) {
//	if (l + 1 >= r)
//		return;
//	int key = (* list)[l];
//	int left = l, right = r - 1;
//	while (left < right) {
//		while (left < right && (* list)[right] >= key) {
//			right--;
//		}
//		while (left < right && (*list)[left] <= key) {
//			left++;
//		}
//		swap(list->at(left), list->at(right));
//	}
//	swap(list->at(l), list->at(right));
//	QuickSort(list, l, left);
//	QuickSort(list, left + 1, r);
//	return;
//}
//
//int main() {
//	vector<int> list;
//	default_random_engine random_engine;
//	uniform_int_distribution<int> random_seed(1,100);
//	for (size_t i = 0; i < 10; i++){
//		list.push_back(random_seed(random_engine));
//	}
//	// 冒泡排序
//	//BubbleSort(&list);
//
//	// 选择排序
//	//SelectSort(&list);
//
//	// 优化后的选择排序
//	//SelectSortBetter(&list);
//
//	// 插入排序
//	//InsertSort(&list);
//
//	// 希尔排序
//	//ShellSort();
//
//	// 快速排序
//	QuickSort(&list, 0, list.size());
//
//	return 0;
//}