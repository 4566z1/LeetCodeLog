#pragma once
#ifndef _LIST_
#define _LIST_

#include <iostream>

template <typename T>
struct NODE {
	T data = 0;
	NODE* next = nullptr;
};

template <typename T>
class LIST {
public:
	NODE<T>* head = nullptr;	// ͷ���
	NODE<T>* rear = nullptr;	// β���
	
	LIST();
	~LIST();

	void PushData(T data);
	bool WriteData(T data, int index);
	void RemoveHead();

	LIST<T> operator+(LIST<T>& other);
};
#endif // _LIST_


