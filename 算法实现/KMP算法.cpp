//#include <iostream>
//using namespace std;
//
//int KMPMatch(char * src, char * str) {
//	// NEXT 数组
//	int strlength = strlen(str);
//	int* next_array = new int[strlength];
//	for (int i = 0; i < strlength; i++){
//		next_array[i] = 0;
//	}
//	if(strlength > 1)
//		next_array[1]++;
//
//	// 构建NEXT数组
//	for (int k = 3; k <= strlength; k++){
//		for (int i = k / 2,j = 1; i > 0; i--, j++){
//			if (!(k % 2)) { i--; }
//
//			if (str[j - 1] == str[k - j - 1])
//				next_array[k - 1]++;
//		}
//		next_array[k - 1]++;
//	}
//	
//	// KMP 匹配
//	int n = 0;
//	char* p = src;
//	int start_index = 0;
//	while (*(p) != '\0') {
//		for (int j = 0,i = start_index; i < strlength; i++, j++){
//			if (p[j] != str[i]) {
//				start_index = next_array[i];
//				p +=  i + 1;
//				n += i + 1;
//				break;
//			}
//			else if (i + 1 == strlength)
//				return n;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	char text1[] = "absjjmmmjxxxlllzpppsdf";
//	char text2[] = "mmjx";
//	cout << KMPMatch(text1, text2) << endl;
//	return 0;
//}