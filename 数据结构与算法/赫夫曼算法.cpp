#include "huffman.hpp"

void main() {
	ifstream file;
	char data[256];
	char encode_data[256] = { 0 };

	list<char> buffer;

	// 读取文件
	file.open("content.txt");
	if (!file)
		return;
	file >> data;

	HUFFMAN Huffman;
	Huffman.Encode(data, encode_data);
	return;
}

HUFFMAN::HUFFMAN() {
	
	return;
}

HUFFMAN::~HUFFMAN() {
	return;
}

DATA_PACK HUFFMAN::GetMinWeightContent(){
	if (!List.size())
		return { 0 };
	list<DATA_PACK>::iterator buffer_i = List.begin();
	DATA_PACK p = List.front();
	int min_privilege = p.privilege;

	for (list<DATA_PACK>::iterator i = List.begin();i != List.end(); i++){
		if ((*i).privilege < min_privilege){
			min_privilege = (*i).privilege;
			p = (* i);
			buffer_i = i;
		}
	}

	List.erase(buffer_i);
	return p;
}

void HUFFMAN::PR_T_W(DATA<DATA_PACK>* p,int flag) {
	if (p != nullptr) {
		if(flag == -1){}
		else if (flag == 0)
			EncodeData.append("0");
		else if (flag == 1)
			EncodeData.append("1");
		PR_T_W(p->lchild, 0);
		PR_T_W(p->rchild, 1);
	}
	return;
}

void HUFFMAN::Encode(char* data, char* encode_data){
	int Possibility[256] = { 0 };
	DATA_PACK data_pack = { 0 };
	DATA_PACK min_data_pack;

	// 创建优先级列表
	for (char* p = data; *p != '\0'; p++) {
		Possibility[(int)*p]++;
	}
	for (int i = 0; i < 256; i++) {
		if (Possibility[i] != 0) {
			data_pack.data = i;
			data_pack.privilege = Possibility[i];
			this->List.push_back(data_pack);
		}
	}

	// 创建赫夫曼树
	while (1) {
		DATA<DATA_PACK>* data_buffer = new DATA<DATA_PACK>;

		min_data_pack = GetMinWeightContent();
		if (!min_data_pack.privilege)
			break;

		if (!HuffmanTree.data->element.privilege) {
			HuffmanTree.data->lchild = new DATA<DATA_PACK>;
			HuffmanTree.data->rchild = new DATA<DATA_PACK>;
			HuffmanTree.data->lchild->element = min_data_pack;
			HuffmanTree.data->rchild->element = GetMinWeightContent();
			HuffmanTree.data->element.privilege = HuffmanTree.data->lchild->element.privilege + HuffmanTree.data->rchild->element.privilege;
			HuffmanTree.data->element.data = '\0';
		}

		if (min_data_pack.privilege < HuffmanTree.data->element.privilege) {
			data_buffer->lchild = new DATA<DATA_PACK>;
			data_buffer->rchild = new DATA<DATA_PACK>;
			data_buffer->lchild->element = min_data_pack;
			data_buffer->rchild = HuffmanTree.data;

		}
		else {
			data_buffer->rchild = new DATA<DATA_PACK>;
			data_buffer->lchild = new DATA<DATA_PACK>;
			data_buffer->rchild->element = min_data_pack;
			data_buffer->lchild = HuffmanTree.data;
		}

		data_buffer->element.data = '\0';
		data_buffer->element.privilege = data_buffer->lchild->element.privilege + data_buffer->rchild->element.privilege;
		HuffmanTree.data = data_buffer;
	}

	PR_T_W((this->HuffmanTree.data), -1);
	strcpy_s(encode_data, 256, EncodeData.c_str());
	return;
}
