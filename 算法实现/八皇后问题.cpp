//#include <iostream>
//using namespace std;
//
//int chess[8][8] = { 0 };
//
//int result = 0;
//
//void PrintChess() {
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++) {
//			cout << chess[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//	cout << '\n';
//	return;
//}
//
//// ע������������㷨ʵ�֣������׷���Խ����ɽ������ȷ
//bool Isdanger(int x, int y) {
//	// �м��
//	for (int k = 0; k < 8; k++) {
//		if (chess[k][x] == 1)
//			return true;
//	}
//
//	// ���Ͻ�
//	for (int k = y, j = x; k >= 0 && j >= 0; k--, j--) {
//		if (chess[k][j] == 1)
//			return true;
//	}
//
//	// ���½�
//	for (int k = y, j = x; k < 8 && j < 8; k++, j++) {
//		if (chess[k][j] == 1)
//			return true;
//	}
//
//	// ���½�
//	for (int k = y, j = x; k < 8 && j >= 0; k++, j--) {
//		if (chess[k][j] == 1)
//			return true;
//	}
//
//	// ���Ͻ�
//	for (int k = y, j = x; k >= 0 && j < 8; k--, j++) {
//		if (chess[k][j] == 1)
//			return true;
//	}
//	return false;
//}
//
//void FindPieces(int rows) {
//	if (rows == 8){
//		PrintChess();
//		result++;
//		return;
//	}
//
//	for (int i = 0; i < 8; i++){
//		if (!Isdanger(i, rows)) {
//			chess[rows][i] = 1;
//			FindPieces(rows + 1);
//			chess[rows][i] = 0;
//		}
//	}
//	return;
//}
//
//int main() {
//	FindPieces(0);
//	cout << "�Ų�������: " << result << endl;
//	return 0;
//}