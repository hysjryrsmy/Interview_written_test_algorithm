#define _CRT_SECURE_NO_WARING
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

//set, map -> 有序且唯一

//无序的 （唯一无序）
//哈希表 -> 插入查找 平均常数
//未排序的
//unordered_set 
//unordered_map
//头文件：<unordered_set> <unordered_map>


//不唯一的 （多重有序）
//multiset -> 多重set  ：元素不唯一，允许有重复值
//multimap -> 多重map  ：key(键)也是不唯一的，相同的key可以对应不同的值 ：不可以用中括号进行操作 
//头文件： <set> <map>


//即无序又不唯一(多重无序)
// unordered_multiset
// unordered_multimap
//头文件：<unordered_set> <unordered_map>




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