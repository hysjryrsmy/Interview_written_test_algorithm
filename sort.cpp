#define _CRT_SECURE_NO_WARING


#include <algorithm>  //sort需要的头文件
#include <iostream>
using namespace std;

//int num[105];
//num[0] ~ num[99] -> 100个数 
//sort(num,num+100)
// num ->  起始位置
// num + 100  ->  结束位置的后一个位置
/*
bool cmp(const int& a, const int& b) {
	return a > b;
}

int main() {
	int num[15] = { 9,5,-2,0,7,3,2,-99,99,8 };
	sort(num + 0, num + 10, cmp);
	for (int i = 0; i < 10; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
}
*/


//自定义类型如何按照两个进行排序
//struct node {  //C++ -> 类  ；  C语言 -> 结构体  
//	int x, y;
//};
//
//bool cmp(const node& a, const node& b) {
//	if (a.x == b.x) {
//		return a.y > b.y;
//	}
//	return a.x < b.x;
//}
//
//int main() {
//	node xyz[10];
//	xyz[0].x = 1, xyz[0].y = 5;
//	xyz[1].x = -9, xyz[1].y = 2;
//	xyz[2].x = 9, xyz[2].y = 3;
//	xyz[3].x = 9, xyz[3].y = 1;
//	xyz[4].x = 9, xyz[4].y = 2;
//	sort(xyz, xyz + 5, cmp);
//	for (int i = 0; i < 5; i++) {
//		cout << xyz[i].x << " " << xyz[i].y << endl;
//	}
//	return 0;
//}

struct node {  //C++ -> 类  ；  C语言 -> 结构体  
	int x, y;
	bool operator<(const node& b) const {
		if (this->x == b.x) {
			return this->y > b.y;
		}
		return this->x < b.x;
	}
};

bool cmp(const node& a, const node& b) {
	if (a.x == b.x) {
		return a.y > b.y;
	}
	return a.x < b.x;
}

int main() {
	node xyz[10];
	xyz[0].x = 1, xyz[0].y = 5;
	xyz[1].x = -9, xyz[1].y = 2;
	xyz[2].x = 9, xyz[2].y = 3;
	xyz[3].x = 9, xyz[3].y = 1;
	xyz[4].x = 9, xyz[4].y = 2;
	sort(xyz, xyz + 5, cmp);
	for (int i = 0; i < 5; i++) {
		cout << xyz[i].x << " " << xyz[i].y << endl;
	}
	return 0;
}