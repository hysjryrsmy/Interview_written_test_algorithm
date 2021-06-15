#define _CRT_SECURE_NO_WARING

#include <iostream>
#include <set>
using namespace std;

//set - 集合（有序集合）-> 有唯一元素 -> 对数 -> 红黑树
//set<int> s;
//s.size() -> 返回集合当中的元素数量
//s.insert(x) -> 向集合当中插入元素x
//s.erase(x) -> 从集合当中删除元素x
//s.find(x)  查找/  s.count(x) -> 统计x出现的次数     返回0：表示没有x    返回1：表示有一个x


/*
int main() {
	set<int> s;
	s.insert(5);
	s.insert(-2);
	s.insert(8);
	s.insert(99);
	s.insert(16);
	cout << s.size() << endl;
	if (s.count(8) == 1) {
		cout << "yes 8" << endl;
	}
	else {
		cout << "no" << endl;
	}
	s.erase(8);
	if (s.count(8) == 1) {
		cout << "yes 8 2" << endl;
	}
	else {
		cout << "no" << endl;
	}
	cout << s.size() << endl;
	for (auto it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}
*/

struct node {
	int x, y;
};

int main() {
	set<node> s;
	s.insert((node) { 5, 6 });
	s.insert((node) { -2, 99 });
	s.insert((node) { 9, 8 });
	for (auto it = s.begin(); it != s.end(); it++) {
		cout << it->x << " " << it->y << endl;
	}

	return 0;
}