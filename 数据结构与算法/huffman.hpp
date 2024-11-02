#pragma once
#ifndef _HUFFMAN_
#define _HUFFMAN_
#include <iostream>
#include <list>
#include <fstream>
#include "tree.hpp"
using namespace std;

struct DATA_PACK {
	int privilege = 0;
	char data;
};

class HUFFMAN {
private:
	string EncodeData;
	list<DATA_PACK>	List;	// 优先级列表
	BTREE<DATA_PACK> HuffmanTree;	// 赫夫曼树

	void PR_T_W(__in DATA<DATA_PACK>* p, int flag); // 前序遍历

	DATA_PACK GetMinWeightContent();
public:
	HUFFMAN();
	~HUFFMAN();

	void Encode(__in char* data, __out char* encode_data);
	// void Decode(__in char* );
};

#endif