#define _CRT_SECURE_NO_WARING

#include <iostream>
#include <map>
#include <utility>
#include <unordered_map>
using namespace std;

//pair -> 一对儿
//pair<int,char>  int:first访问    ； char：second访问

//map -> 映射   内部存的近似看做pair   红黑树实现的  - 有序且唯一
//map<key,value> m;
// m.size()
// m.insert(pair)   make_pair(x,y)
// m.erase(x)      删除键为x的元素
// m.find(x)
// m.count(x)
//可以通过 [] 来进行插入、访问、修改


//未排序的  - 哈希表  ： 插入、查找、都是平均常数
//unordered_set
//unordered_map

/*
struct node {
	int x, y;
};

int main() {
	map<int, node> m;
	m[99] = (node){ 5,6 };
	m[11] = (node){ -2,16 };
	m[23] = (node){ 8,-9 };
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second.x << " " << it->second.y << endl;
	}
*/
	
	
	
	/*
	map<int, char> m;
	m.insert(make_pair(5, '+'));
	m[-2] = ')';
	m[99] = '%';
	m[8] = '?';
	m[0] = 'U';
	cout << m.size() << endl;

	if (m.count(8) == 1) {
		cout << "key = 8 value =" << m[8] << endl;
	}
	else {
		cout << "not find 8" << endl;
	}
	m.erase(8);
	if (m.count(8) == 1) {
		cout << "888888" << endl;
	}
	else {
		cout << "not find 8" << endl;
	}
	cout << m.size() << endl;

	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	


	return 0;
}*/




/*
int main() {
	unordered_map<string, int> m;
	m["abc"] = 5;
	m["ABC"] = -2;
	m["???"] = 99;
	m["()[]{}"] = 16;
	m["~^-^~"] = 100;
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}
*/