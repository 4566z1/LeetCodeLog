#include <iostream>
#include <vector>
#include <random>
#include <ctime>
using namespace std;

/*


����ȱ����Ҫ�޸�
����1 ����û��ȫ������ת��ʱ����������ӽڵ�����
����2 ����û������ƽ������ǰ��һ��������㷨


*/



template <typename T>
struct DATA {
	DATA* leftchild;
	T element;
	DATA* rightchild;
};

template <typename T>
class AVL {
private:
	DATA<T>* pre_data = nullptr;
	DATA<T> data {0};

	bool PutElement(DATA<T>* P, T* data);
	void LDR(DATA<T> * data);

	int GetNodeDepth(DATA<T>* P);
	bool REC(DATA<T>* P, int* src_n, int n = 0);

public:
	void FixBTree(DATA<T>* Parent, DATA<T>* P);
	bool CheckAndRotateBTree(DATA<T>* Parent, DATA<T>* P, int flag = 0);

	void InsertElement(T* data);
	void CreateSortBTree(vector<T> *arrays);
	void PrintSortBTreeByLDR();
};

template <typename T>
bool AVL<T>::PutElement(DATA<T>* P, T * data) {
	if (P != nullptr) {
		if (*data > P->element) {
			if (PutElement(P->rightchild, data)) {
				P->rightchild = new DATA<T>;
				P->rightchild->element = *data;
				P->rightchild->rightchild = nullptr;
				P->rightchild->leftchild = nullptr;
			}
		}
		else {
			if (PutElement(P->leftchild, data)) {
				P->leftchild = new DATA<T>;
				P->leftchild->element = *data;
				P->leftchild->rightchild = nullptr;
				P->leftchild->leftchild = nullptr;
			}
		}
	}
	else {
		return true;
		/*P = new DATA<T>;
		P->element = *data;
		P->rightchild = nullptr;
		P->leftchild = nullptr;*/
	}
	return false;
}

template <typename T>
void AVL<T>::InsertElement(T* data) {
	PutElement(&(this->data), data);
	return;
}

template <typename T>
void AVL<T>::CreateSortBTree(vector<T>* arrays) {
	for (auto i = arrays->begin(); i < arrays->end(); i++){
		if (i != arrays->begin()) {
			PutElement(&(this->data), &(*i));
			
			// ���ƽ�����Ӳ�����
			FixBTree(nullptr, &(this->data));
		}
		else {
			this->data.element = (*i);
			continue;
		}
	}
	return;
}

template <typename T>
void AVL<T>::LDR(DATA<T> * data) {
	if (data) {
		LDR(data->leftchild);
		cout << data->element << " ";
		LDR(data->rightchild);
	}
	return;
}

template <typename T>
void AVL<T>::PrintSortBTreeByLDR() {
	cout << "\n����������: ";
	this->LDR(&(this->data));
	return;
}

template <typename T>
bool AVL<T>::CheckAndRotateBTree(DATA<T>* Parent, DATA<T>* P, int flag) {
	int LeftDepth = GetNodeDepth(P->leftchild);
	int RightDepth = GetNodeDepth(P->rightchild);
	if (LeftDepth - RightDepth > 1) {
		if (CheckAndRotateBTree(P, P->leftchild, 1))
			return true;
	}
	else if (LeftDepth - RightDepth < -1) {
		if (CheckAndRotateBTree(P, P->rightchild, 2))
			return true;
	}

	// ��ת���(ȱ�ٵ�ǰһ��ƽ�����Ӻ͵�ǰƽ�����ӷ��Ų�ͬʱ�����)
	// �ڸ����ʱ
	if (!Parent && LeftDepth - RightDepth > 1) {
		DATA<T>* buffer = new DATA<T>;
		*buffer = *P;
		*P = *buffer->leftchild;

		buffer->leftchild = P->rightchild;
		P->rightchild = buffer;
	}
	else if (!Parent && LeftDepth - RightDepth < -1) {
		DATA<T>* buffer = new DATA<T>;
		*buffer = *P;
		*P = *buffer->rightchild;

		buffer->rightchild = P->leftchild;
		P->leftchild = buffer;
	}
	// ƽ������������ͬʱ
	else if (Parent && flag == 1 && LeftDepth - RightDepth < 0) {
		DATA<T>* buffer = new DATA<T>;
		*buffer = *Parent;
		buffer->leftchild = nullptr;

		P->rightchild->leftchild = P;
		P->rightchild->rightchild = buffer;

		*Parent = *(P->rightchild);
		P->rightchild = nullptr;

		delete buffer;
	}
	else if (Parent && flag == 2 && LeftDepth - RightDepth > 0) {
		DATA<T>* buffer = new DATA<T>;
		*buffer = *Parent;
		buffer->rightchild = nullptr;

		P->leftchild->rightchild = P;
		P->leftchild->leftchild = buffer;

		*Parent = *(P->leftchild);
		P->leftchild = nullptr;
		delete buffer;
	}
	// ��ͨ���
	else if (Parent && flag == 1 && !P->rightchild) {
		DATA<T>* buffer = P;
		Parent->leftchild = nullptr;
		P->rightchild = new DATA<T>;
		*P->rightchild = *Parent;
		*Parent = *P;
		delete buffer;
	}
	else if (Parent && flag == 2 && !P->leftchild) {
		DATA<T>* buffer = P;
		Parent->rightchild = nullptr;
		P->leftchild = new DATA<T>;
		*P->leftchild = *Parent;
		*Parent = *P;
		delete buffer;
	}
	else {
		return false;	// δ��ת
	}
	return true;	// ����ת
}

template <typename T>
bool AVL<T>::REC(DATA<T>* P, int* src_n, int n) {
	if (P) {
		REC(P->leftchild, src_n, n + 1);
		REC(P->rightchild, src_n, n + 1);
		if(n + 1 > *src_n)
			*src_n = n + 1;
	}
	return false;
}

template <typename T>
int AVL<T>::GetNodeDepth(DATA<T> *P) {
	int n = 0;
	REC(P, &n, 0);
	return n;
}

template <typename T>
void AVL<T>::FixBTree(DATA<T>* Parent, DATA<T>* P) {
	if (P) {
		CheckAndRotateBTree(Parent, P);
		FixBTree(P, P->leftchild);
		FixBTree(P, P->rightchild);
	}
	return;
}

int main() {
	AVL<int> sort_btree;
	vector<int> arrays = { 3,2,1,4,5,6,7,10,9,8 };

	// �������
	// vector<int> arrays; 
	//default_random_engine random_engine(time(0));
	//uniform_int_distribution<int> random_int(1, 100);

	//for (int i = 0; i < 10; i++){
	//	if (i == 8) {
	//		arrays.push_back(25);
	//		continue;
	//	}
	//	arrays.push_back(random_int(random_engine));
	//}
	
	cout << "ԭ����: ";
	for (auto i : arrays){
		cout << i << " ";
	}

	sort_btree.CreateSortBTree(&arrays);
	sort_btree.PrintSortBTreeByLDR();
	return 0;
}