#pragma once
#ifndef _STACK_
#define _STACK_
#define MAX_STACK_SIZE 100

#include <iostream>

template <typename T>
struct DATA {
	T* base = nullptr;
	T* top = nullptr;
	int length = 0;
};

template <typename T>
class STACK {
private:
	DATA<T> data;

public:
	STACK();
	~STACK();

	int length();
	int size();
	void push(T element);
	T pop();
};

#endif