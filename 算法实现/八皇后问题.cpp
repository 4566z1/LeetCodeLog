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
//// 注意这个函数的算法实现，很容易访问越界造成结果不正确
//bool Isdanger(int x, int y) {
//	// 行检查
//	for (int k = 0; k < 8; k++) {
//		if (chess[k][x] == 1)
//			return true;
//	}
//
//	// 左上角
//	for (int k = y, j = x; k >= 0 && j >= 0; k--, j--) {
//		if (chess[k][j] == 1)
//			return true;
//	}
//
//	// 右下角
//	for (int k = y, j = x; k < 8 && j < 8; k++, j++) {
//		if (chess[k][j] == 1)
//			return true;
//	}
//
//	// 左下角
//	for (int k = y, j = x; k < 8 && j >= 0; k++, j--) {
//		if (chess[k][j] == 1)
//			return true;
//	}
//
//	// 左上角
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
//	cout << "排布方法数: " << result << endl;
//	return 0;
//}