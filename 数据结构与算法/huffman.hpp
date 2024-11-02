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
	list<DATA_PACK>	List;	// ���ȼ��б�
	BTREE<DATA_PACK> HuffmanTree;	// �շ�����

	void PR_T_W(__in DATA<DATA_PACK>* p, int flag); // ǰ�����

	DATA_PACK GetMinWeightContent();
public:
	HUFFMAN();
	~HUFFMAN();

	void Encode(__in char* data, __out char* encode_data);
	// void Decode(__in char* );
};

#endif