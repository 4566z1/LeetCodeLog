#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct POINT {
	int x;
	int y;
};

clock_t start_time, end_time;

int chess[8][8] = { 0 };

void GetNextPointlist(POINT* point, vector<POINT>* pointlist) {
	int n = 0;
	POINT buffer;
	if (point->x - 1 >= 0 && point->y - 2 >= 0 && chess[point->y - 2][point->x - 1] == 0) {
		buffer.x = point->x - 1;
		buffer.y = point->y - 2;
		pointlist->push_back(buffer);
	}
	if (point->x + 1 < 8 && point->y - 2 >= 0 && chess[point->y - 2][point->x + 1] == 0) {
		buffer.x = point->x + 1;
		buffer.y = point->y - 2;
		pointlist->push_back(buffer);
	}
	if (point->x + 2 < 8 && point->y - 1 >= 0 && chess[point->y - 1][point->x + 2] == 0) {
		buffer.x = point->x + 2;
		buffer.y = point->y - 1;
		pointlist->push_back(buffer);
	}
	if (point->x + 2 < 8 && point->y + 1 < 8 && chess[point->y + 1][point->x + 2] == 0) {
		buffer.x = point->x + 2;
		buffer.y = point->y + 1;
		pointlist->push_back(buffer);
	}
	if (point->x + 1 < 8 && point->y + 2 < 8 && chess[point->y + 2][point->x + 1] == 0) {
		buffer.x = point->x + 1;
		buffer.y = point->y + 2;
		pointlist->push_back(buffer);
	}
	if (point->x - 1 >= 0 && point->y + 2 < 8 && chess[point->y + 2][point->x - 1] == 0) {
		buffer.x = point->x - 1;
		buffer.y = point->y + 2;
		pointlist->push_back(buffer);
	}
	if (point->x - 2 >= 0 && point->y + 1 < 8 && chess[point->y + 1][point->x - 2] == 0) {
		buffer.x = point->x - 2;
		buffer.y = point->y + 1;
		pointlist->push_back(buffer);
	}
	if (point->x - 2 >= 0 && point->y - 1 >= 0 && chess[point->y - 1][point->x - 2] == 0) {
		buffer.x = point->x - 2;
		buffer.y = point->y - 1;
		pointlist->push_back(buffer);
	}
	return;
}

bool compare(POINT x, POINT y) {
	vector<POINT> nextpoints1;
	vector<POINT> nextpoints2;

	GetNextPointlist(&x, &nextpoints1);
	GetNextPointlist(&y, &nextpoints2);
	
	return nextpoints1.size() < nextpoints2.size();
}

void PrintChess() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout << chess[i][j] << ' ';
		}
		cout << '\n';
	}
}

void Travel(POINT point, int n) {
	POINT putpoint;
	vector<POINT> nextpointlist;
	if (n == 1) {
		chess[point.y][point.x] = 1;
		n++;
	}
	if (n == 65) {
		end_time = clock();
		PrintChess();
		cout << "计算时间: " << end_time - start_time << "μs" << endl;
		exit(0);
		// 完成遍历
	}

	// 获取下一步能选格数最小的坐标点
	GetNextPointlist(&point, &nextpointlist);
	sort(nextpointlist.begin(), nextpointlist.end(), compare);
	
	if (nextpointlist.size()) {
		for (vector<POINT>::iterator i = nextpointlist.begin(); i < nextpointlist.end(); i++){
			putpoint.x = (*i).x;
			putpoint.y = (*i).y;
			chess[putpoint.y][putpoint.x] = n;
			Travel(putpoint, n + 1);
			chess[putpoint.y][putpoint.x] = 0;
		}
		return;
	}
	else {
		chess[point.y][point.x] = 0;
	}
}

int main() {
	cout << "开始计算" << endl;

	start_time = clock();
	POINT point;
	point.x = 0;
	point.y = 1;
	Travel(point, 1);
	return 0;
}