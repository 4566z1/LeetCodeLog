//#include "stack.hpp"
//using namespace std;
//
//
//template <typename T>
//STACK<T>::STACK() {
//	this->data.base = new T[MAX_STACK_SIZE];
//	this->data.top = this->data.base;
//	this->data.length = 0;
//	return;
//}
//template <typename T>
//STACK<T>::~STACK() {
//	return;
//}
//
//template <typename T>
//void STACK<T>::push(T element) {
//	(*this->data.top) = element;
//	this->data.top++;
//	this->data.length++;
//	return;
//}
//
//template <typename T>
//int STACK<T>::length() {
//	return this->data.length;
//}
//
//template <typename T>
//int STACK<T>::size() {
//	return (this->data.top - this->data.base);
//}
//
//template <typename T>
//T STACK<T>::pop() {
//	this->data.top--;
//	T buffer = (*this->data.top);
//	this->data.length--;
//	return buffer;
//}
//
//// ����ջ���ݽṹ
////void main() {
////	STACK<int> stack;
////	for (int i = 1; i <= 50; i++){
////		stack.push(i);
////	}
////	
////	while (stack.length()){
////		cout << stack.pop() << endl;
////	}
////	return;
////}
//
//// ������תʮ����
////void main() {
////	long long input = 0;
////	int num = 0;
////	STACK<int> stack_bin;
////
////	cout << "������: ";
////	cin >> input;
////
////	do{
////		if (input % 10 != 0 && input % 10 != 1){
////			cout << "����Ĳ��Ƕ���������" << endl;
////			return;
////		}
////		stack_bin.push(input % 10);
////		input /= 10;
////	} while (input);
////
////	while (stack_bin.length()) {
////		num += stack_bin.pop() * pow<int>(2, stack_bin.length());
////	}
////	cout << "ʮ����: " << num << endl;
////	return; 
////}