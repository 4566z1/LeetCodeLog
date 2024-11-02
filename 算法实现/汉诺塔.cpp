//#include <iostream>
//using namespace std;
//
//int times = 0;
//
//void move_func(int n, char x, char y, char z) {
//	if (n == 1) {
//		cout << x << "->" << z << endl;
//	}
//	else {
//		move_func(n - 1, x, z, y);
//		cout << x << "->" << z << endl;
//		move_func(n - 1, y, x, z);
//	}
//	times++;
//	return;
//}
//
//
//int main() {
//	int size;
//	cout << "ººÅµËþ²ãÊý: ";
//	cin >> size;
//	move_func(size, 'X', 'Y', 'Z');
//	cout << times << endl;
//	return 0;
//}