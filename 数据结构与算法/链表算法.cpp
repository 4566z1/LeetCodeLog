#include "list.hpp"
using namespace std;

template <typename T>
LIST<T>::LIST() {
	this->head = new NODE<T>;
	this->head->next = this->head;
	this->rear = this->head;
	return;
}

template <typename T>
LIST<T>::~LIST() {
	/*NODE<T>* p = this->head;
	NODE<T>* buffer = nullptr;

	while (p->next != this->head){
		buffer = p;
		p = p->next;
		delete buffer;
	}
	delete this->head;*/
	return;
}

template <typename T>
void LIST<T>::PushData(T data) {
	this->rear->next = new NODE<T>;
	this->rear->next->next = this->head;
	this->rear->next->data = data;
	this->rear = this->rear->next;
	return;
}

template <typename T>
void LIST<T>::RemoveHead() {
	NODE<T>* p = this->head;
	this->head = this->head->next;
	this->rear->next = this->head;
	delete p;
	return;
}

template <typename T>
bool LIST<T>::WriteData(T data, int index) {
	NODE<T>* p = this->head;
	int n = 0;

	while (p->next != this->head){
		if (index == n) {
			p->data = data;
			return true;
		}
		p = p->next;
		n++;
	}
	return false;
}

template <typename T>
LIST<T> LIST<T>::operator+(LIST<T>& other) {
	this->rear->next = other.head->next;
	this->rear = other.rear;
	other.rear->next = this->head;
	delete other.head;
	return *this;
}

// 快慢指针判断链表是否存在环
template <typename T>
bool IsCicleInList(LIST<T> *list) {
	NODE<T>* p1 = list->head;
	NODE<T>* p2 = list->head;

	while (p2->next != nullptr){
		p1 = p1->next;
		p2 = p2->next->next;
		if (p1 == p2)
			return true;
	}
	return false;
}

// 链表的合并算法
//void main() {
//	LIST<int> list1;
//	LIST<int> list2;
//	LIST<int> list3;
//	
//	list1.PushData(1);
//	list1.PushData(2);
//	list1.PushData(3);
//
//	list2.PushData(4);
//	list2.PushData(5);
//	list2.PushData(6);
//
//	list3 = list1 + list2;
//	
//	cout << IsCicleInList(&list3) << endl;
//
//	return;
//}

// 魔术师发牌问题
//void main() {
//	LIST<int> list1;
//	NODE<int>* p = nullptr;
//	
//	for (int i = 0; i < 13; i++){
//		list1.PushData(0);
//	}
//
//	list1.RemoveHead();
//
//	p = list1.head;
//	for (int i = 1; i <= 13; i++){
//		if (i != 1) {
//			for (int j = 0; j < i; j++) {
//				p = p->next;
//				if (p->data != 0)
//					j--;
//			}
//		}
//		p->data = i;
//	}
//
//	p = list1.head;
//	do {
//		cout << p->data << endl;
//	} while ((p = p->next) != list1.head);
//	return;
//}

// 拉丁方阵
//void main() {
//	LIST<int> list1;
//	int size;
//
//	cout << "Enter size: ";
//	cin >> size;
//
//	system("cls");
//
//	for (int i = 1; i <= size; i++){
//		list1.PushData(i);
//	}
//	list1.RemoveHead();
//
//	for (int j = 0; j < size; j++){
//		NODE<int>* p = list1.head;
//		for (int k = 0; k < size; k++){
//			cout << p->data << " ";
//			p = p->next;
//			if(k == size - 2)
//				list1.head = p;
//		}
//		cout << "\n";
//	}
//
//	return;
//}