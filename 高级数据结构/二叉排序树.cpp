//#include <iostream>
//#include <vector>
//#include <random>
//#include <ctime>
//using namespace std;
//
//template <typename T>
//struct DATA {
//	DATA* leftchild;
//	T element;
//	DATA* rightchild;
//};
//
//template <typename T>
//class SORT_BTREE {
//private:
//	DATA<T>* pre_data = nullptr;
//	DATA<T> data {0};
//
//	bool PutElement(DATA<T>* P, T* data);
//	void LDR(DATA<T> * data);
//	void LDR_Delete(DATA<T>* parent, DATA<T>* data, T* Element);
//
//public:
//	void DeleteElement(T data);
//	void InsertElement(T* data);
//	void CreateSortBTree(vector<T> *arrays);
//	void PrintSortBTreeByLDR();
//};
//
//template <typename T>
//bool SORT_BTREE<T>::PutElement(DATA<T>* P, T * data) {
//	if (P != nullptr) {
//		if (*data > P->element) {
//			if (PutElement(P->rightchild, data)) {
//				P->rightchild = new DATA<T>;
//				P->rightchild->element = *data;
//				P->rightchild->rightchild = nullptr;
//				P->rightchild->leftchild = nullptr;
//			}
//		}
//		else {
//			if (PutElement(P->leftchild, data)) {
//				P->leftchild = new DATA<T>;
//				P->leftchild->element = *data;
//				P->leftchild->rightchild = nullptr;
//				P->leftchild->leftchild = nullptr;
//			}
//		}
//	}
//	else {
//		return true;
//		/*P = new DATA<T>;
//		P->element = *data;
//		P->rightchild = nullptr;
//		P->leftchild = nullptr;*/
//	}
//	return false;
//}
//
//template <typename T>
//void SORT_BTREE<T>::InsertElement(T* data) {
//	PutElement(&(this->data), data);
//	return;
//}
//
//template <typename T>
//void SORT_BTREE<T>::CreateSortBTree(vector<T>* arrays) {
//	for (auto i = arrays->begin(); i < arrays->end(); i++){
//		if (i != arrays->begin()) {
//			PutElement(&(this->data), &(*i));
//		}
//		else {
//			this->data.element = (*i);
//			continue;
//		}
//	}
//	return;
//}
//
//template <typename T>
//void SORT_BTREE<T>::LDR(DATA<T> * data) {
//	if (data) {
//		LDR(data->leftchild);
//		cout << data->element << " ";
//		LDR(data->rightchild);
//	}
//	return;
//}
//
//template <typename T>
//void SORT_BTREE<T>::LDR_Delete(DATA<T>* parent, DATA<T>* data, T* Element) {
//	if (data) {
//		LDR_Delete(data, data->leftchild, Element);
//		if (data->element == *Element) {
//			 没有子树
//			if (data->leftchild == nullptr && data->rightchild == nullptr) {
//				if (parent->leftchild == data) {
//					parent->leftchild = nullptr;
//				}
//				else {
//					parent->rightchild = nullptr;
//				}
//				delete data;
//			}
//			 只有左子树
//			else if (data->leftchild != nullptr && data->rightchild == nullptr) {
//				if (parent->leftchild == data) {
//					parent->leftchild = data->leftchild;
//				}
//				else {
//					parent->rightchild = data->leftchild;
//				}
//				delete data;
//			}
//			 只有右子树
//			else if (data->leftchild == nullptr && data->rightchild != nullptr) {
//				if (parent->leftchild == data) {
//					parent->leftchild = data->rightchild;
//				}
//				else {
//					parent->rightchild = data->rightchild;
//				}
//				delete data;
//			}
//			 既有左子树又有右子树
//			else{
//				data->element = pre_data->element;
//				if (pre_data->leftchild && !pre_data->rightchild) {
//					DATA<T>* buffer = pre_data->leftchild;
//					*pre_data = *pre_data->leftchild;
//					delete buffer;
//				}
//				else {
//					delete pre_data;
//				}
//			}
//			return;
//		}
//		pre_data = data;
//		LDR_Delete(data, data->rightchild, Element);
//	}
//	return;
//}
//
//template <typename T>
//void SORT_BTREE<T>::PrintSortBTreeByLDR() {
//	cout << "\n排序后二叉树: ";
//	this->LDR(&(this->data));
//	return;
//}
//
//template <typename T>
//void SORT_BTREE<T>::DeleteElement(T data) {
//	LDR_Delete(nullptr, &(this->data), &data);
//	return;
//}
//
//int main() {
//	SORT_BTREE<int> sort_btree;
//	vector<int> arrays = { 70,46,67,105,100,99,104,103,108,110,112,115 };
//
//	 随机生成
//	 vector<int> arrays; 
//	default_random_engine random_engine(time(0));
//	uniform_int_distribution<int> random_int(1, 100);
//
//	for (int i = 0; i < 10; i++){
//		if (i == 8) {
//			arrays.push_back(25);
//			continue;
//		}
//		arrays.push_back(random_int(random_engine));
//	}
//	
//	cout << "原数组: ";
//	for (auto i : arrays){
//		cout << i << " ";
//	}
//
//	sort_btree.CreateSortBTree(&arrays);
//	sort_btree.PrintSortBTreeByLDR();
//	sort_btree.DeleteElement(115);
//	sort_btree.PrintSortBTreeByLDR();
//
//	return 0;
//}