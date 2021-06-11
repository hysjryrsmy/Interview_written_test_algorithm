#define _CRT_SECURE_NO_WARING
//vector  头文件：<vector>   向量， 动态数组    vector<int> v;
// ① v.size() -> 元素数量
// ② v.push_back(x) -> 在最后插入x元素
//
//

#include <iostream>
#include <vector>
using namespace std;
/*
int main() {
	vector<int> v;
	v.push_back(5);
	v.push_back(8);
	v.push_back(-2);
	v.push_back(99);
	v.insert(v.begin(), 66);  //插入一个元素
	cout << v.size() << endl;
	v[2] = -3;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}
*/


int main() {

	//扩容操作 ：按照什么规则扩容 -> 取决于编译器
	vector<int> v;
	int t = 0;
	for (int i = 0; i < 10000000; i++) {
		v.push_back(i);
		if (t != v.capacity()) {
			cout << t << endl;
			t = v.capacity();
		}
	}



	/*
	vector<vector<int> > v(5, vector<int>(6, 8)); //二维数组初始化
	//vector<vector<int> > v; //二维数组
	vector<int> v2, v3;
	v2.push_back(5);
	v2.push_back(9);
	v3.push_back(22);
	v3.push_back(-2);
	v3.push_back(15);
	v.push_back(v2);
	v.push_back(v3);
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	*/


	//vector<int> v(5,8);

	/*vector<int> v(3);
	v[0] = 5;
	v[1] = 6;
	v[2] = 7;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}*/

	return 0;
}