#include "tree.hpp"
#include <random>
#include <ctime>

// 二叉树的建立和遍历
//void main() {
//	int tree_length = 10;
//	BTREE<int> tree;
//	default_random_engine random_engine(time(0));
//	uniform_int_distribution<unsigned int> u(0, 1);
//
//	for (int i = 1; i <= tree_length; i++){
//		tree.AppendNode(i, u(random_engine));
//	}
//
//	cout << tree.FindNodeLayer(0, 0) << endl;
//	return;
//}

// 建立随机二叉树并进行中序遍历输出结果
//void main() {
//	STRING_BTREE<int> str_btree;
//	default_random_engine random_engine(time(0));	// unix时间戳作为随机数种子
//	uniform_int_distribution<unsigned int> u(0, 1);
//
//	for (int i = 1; i <= 10; i++){
//		str_btree.AppendNode(i, u(random_engine));
//	}
//	str_btree.FinishStringTREE();
//
//	cout << "二叉树中序遍历" << endl;
//	str_btree.PrintTREE_MO();
//	return;
//}

/*	二叉树	*/
//template <typename T>
//BTREE<T>::BTREE() {
//	return;
//}
//
//template <typename T>
//BTREE<T>::~BTREE() {
//	return;
//}

template <typename T>
void BTREE<T>::AppendNode(T data, bool left_default) {
	DATA<T>* p = &(this->data);
	if (left_default) {
		while (p->lchild != nullptr) {
			if (p->rchild != nullptr) {
				p = p->lchild;
				continue;
			}
			else {
				p->rchild = new DATA<T>;
				p->rchild->element = data;
				return;
			}
		}

		p->lchild = new DATA<T>;
		p->lchild->element = data;
		return;
	}
	else {
		while (p->rchild != nullptr) {
			if (p->lchild != nullptr) {
				p = p->rchild;
				continue;
			}
			else {
				p->lchild = new DATA<T>;
				p->lchild->element = data;
				return;
			}
		}

		p->rchild = new DATA<T>;
		p->rchild->element = data;
		return;
	}
}

template <typename T>
int BTREE<T>::FindNodeLayer(T data, int method) {
	int layer = 0;
	switch (method)
	{
	case 0:
		// 前序遍历
		PR_T(&(this->data), &data, &layer, 0);
		break;
	case 1:
		// 中序遍历
		MO_T(&(this->data), &data, &layer, 0);
		break;
	case 2:
		// 后序遍历
		PO_T(&(this->data), &data, &layer, 0);
	default:
		return false;
	}
	return layer;
}

template <typename T>
void BTREE<T>::PR_T(DATA<T>* p,T *find_data, int *out_layer,int layer) {
	if (p != nullptr) {
		if (p->element == *find_data)
			*out_layer = layer;
		PR_T(p->lchild, find_data, out_layer, layer + 1);
		PR_T(p->rchild, find_data, out_layer, layer + 1);
	}
	return;
}

template <typename T>
void BTREE<T>::MO_T(DATA<T>* p, T* find_data, int* out_layer, int layer) {
	if (p != nullptr) {	
		MO_T(p->lchild, find_data, out_layer, layer + 1);
		if (p->element == *find_data)
			*out_layer = layer;
		MO_T(p->rchild, find_data, out_layer, layer + 1);
	}
	return;
}

template <typename T>
void BTREE<T>::PO_T(DATA<T>* p, T* find_data, int* out_layer, int layer) {
	if (p != nullptr) {
		PO_T(p->lchild, find_data, out_layer, layer + 1);
		PO_T(p->rchild, find_data, out_layer, layer + 1);
		if (p->element == *find_data)
			*out_layer = layer;
	}
	return;
}

/*	线索二叉树	*/
template <typename T>
STRING_BTREE<T>::STRING_BTREE() {
	return;
}

template <typename T>
STRING_BTREE<T>::~STRING_BTREE() {
	return;
}

template <typename T>
void STRING_BTREE<T>::AppendNode(T data, bool left_default) {
	(this->tree_length)++;
	STRING_DATA<T>* p = &(this->data);
	if (left_default) {
		while (p->lchild != nullptr) {
			if (p->rchild != nullptr) {
				p = p->lchild;
				continue;
			}
			else {
				p->rchild = new STRING_DATA<T>;
				p->rchild->element = data;
				return;
			}
		}

		p->lchild = new STRING_DATA<T>;
		p->lchild->element = data;
		return;
	}
	else {
		while (p->rchild != nullptr) {
			if (p->lchild != nullptr) {
				p = p->rchild;
				continue;
			}
			else {
				p->lchild = new STRING_DATA<T>;
				p->lchild->element = data;
				return;
			}
		}

		p->rchild = new STRING_DATA<T>;
		p->rchild->element = data;
		return;
	}
}

template <typename T>
void STRING_BTREE<T>::MO_T_W(STRING_DATA<T>* p){
	if (p != nullptr) {
		MO_T_W(p->lchild);
		if(!pre_p){}
		else if (p->lchild == nullptr) {
			p->ltag = 1;
			p->lchild = pre_p;
		}
		else if (pre_p->rchild == nullptr) {
			pre_p->rtag = 1;
			pre_p->rchild = p;
		}
		pre_p = p;
		MO_T_W(p->rchild);
	}
	return;
}

template <typename T>
void STRING_BTREE<T>::FinishStringTREE() {
	MO_T_W(&(this->data));
	return;
}

template <typename T>
void STRING_BTREE<T>::PrintTREE_MO() {
	STRING_DATA<T>* p = &(this->data);

	while(p) {
		while(!p->ltag) { 
			if (!p->lchild) { break; }
			p = p->lchild; 
		}
		cout << p->element << endl;
		while (p->rtag) {
			p = p->rchild;
			cout << p->element << endl;
		}
		p = p->rchild;
	}
	return;
}