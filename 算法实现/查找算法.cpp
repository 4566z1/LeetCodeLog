#include <iostream>
#include <algorithm>
#include <random>
#include <ctime>
using namespace std;

/*

折半查找
二分法查找数组

*/
//#define MAX_LENGTH 100
//
//int SearchByMiddle(vector<int> array_vector, int find_num, int* out_n = nullptr) {
//	int n = 0;
//	int low_index = 0;
//	int high_index = array_vector.size() - 1;
//	int mid_index = array_vector.size() / 2 - 1;
//	int mid_num = array_vector.at(mid_index);
//
//	for (; n < array_vector.size() && low_index != high_index; n++) {
//		if (find_num > mid_num) { low_index = mid_index + 1; }
//		else { high_index = mid_index - 1; }
//		mid_index = (low_index + high_index) / 2;
//		mid_num = array_vector.at(mid_index);
//		if (find_num == mid_num){
//			if (out_n)
//				*out_n = n;
//			return mid_index;
//		}
//	}
//	if (n == array_vector.size())
//		return -2;
//	else
//		return -1;
//}
//
//int main() {
//	int n = 0;
//	int FindNum = 0;
//	vector<int> array_vector;
//	default_random_engine random_engine(time(0));
//	uniform_int_distribution<int> random_int(1, 100);
//
//	for (int i = 0; i < MAX_LENGTH; i++){
//		array_vector.push_back(i + random_int(random_engine));
//	}
//	sort(array_vector.begin(), array_vector.end());
//
//	cout << "查找数值: ";
//	cin >> FindNum;
//
//	int bRet = SearchByMiddle(array_vector, FindNum, &n);
//	if (bRet > -1) { 
//		cout << "查找到索引 -> " << bRet << endl; 
//		cout << "查找次数 -> " << n << endl;
//	}
//	else if(bRet == -1) {
//		cout << "找不到" << FindNum << endl;
//	}
//	else {
//		cout << "查找超时" << endl;
//	}
//	return 0;
//}


/*
* 
* 插值查找
* 
*/
//int SearchByInterpolation(vector<int> array_vector, int find_num, int* out_n = nullptr) {
//	int n = 0;
//	int low_index = 0;
//	int high_index = array_vector.size() - 1;
//	int mid_index;
//	int mid_num;
//
//	for (; n < array_vector.size() && low_index <= high_index; n++) {
//		// 比例
//		mid_index = (int)(low_index + ((static_cast<float>(find_num) - array_vector.at(low_index)) / (array_vector.at(high_index) - array_vector.at(low_index))) * (high_index - low_index));
//		mid_index = mid_index < 0 ? 0 : mid_index;
//		mid_num = array_vector.at(mid_index);
//
//		// 注意加一减一
//		if (find_num > mid_num) { low_index = mid_index + 1; }
//		else { high_index = mid_index - 1; }
//		if (find_num == mid_num){
//			if (out_n)
//				*out_n = n;
//			return mid_index;
//		}
//	}
//	if (n == array_vector.size())
//		return -2;
//	else
//		return -1;
//	return 0;
//}
//
//#define MAX_LENGTH 100
//
//int main() {
//	int n = 0;
//	int FindNum = 0;
//	vector<int> array_vector;
//	default_random_engine random_engine(time(0));
//	uniform_int_distribution<int> random_int(1, 100);
//
//	for (int i = 0; i < MAX_LENGTH; i++){
//		array_vector.push_back(i + random_int(random_engine));
//	}
//	sort(array_vector.begin(), array_vector.end());
//
//	cout << "查找数值: ";
//	cin >> FindNum;
//
//	int bRet = SearchByInterpolation(array_vector, FindNum, &n);
//	if (bRet > -1) { 
//		cout << "查找到索引 -> " << bRet << endl; 
//		cout << "查找次数 -> " << n << endl;
//	}
//	else if(bRet == -1) {
//		cout << "找不到" << FindNum << endl;
//	}
//	else {
//		cout << "查找超时" << endl;
//	}
//	return 0;
//}