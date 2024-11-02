//#include <iostream>
//using namespace std;
//
///*
//
//菲波那切数列递归算法
//
//*/
//
//
//int func(int num) {
//	if (num == 0)
//		return 0;
//	else if (num == 1)
//		return 1;
//	else
//		return func(num - 1) + func(num - 2);
//}
//
//int main() {
//	int length;
//	int result;
//	cout << "长度: ";
//	cin >> length;
//	system("cls");
//
//	for (int i = 1; i <= length; i++){
//		result = func(i);
//		cout << result << endl;
//	}
//	return 1;
//}