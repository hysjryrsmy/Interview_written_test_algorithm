#define _CRT_SECURE_NO_WARING
 
#include <iostream>
#include <stack>

using namespace std;

//栈的使用  ： 栈非空的时候才能访问栈顶元素
//sta.size() 
//sta.push(x) : 插入x
//sta.pop()   : 弹出栈顶
//sta.top()   : 返回栈顶元素
//sta.empty() :是否为空   true -> 为空   /  false -> 非空


//struct node {
//	int x, y;
//};
//
//
//int main() {
//
//	stack<node> sta;
//	sta.push((node){ 5, 6 });
//	sta.push((node){ -2, 8 });
//	sta.push((node){ 0, 2 });
//	cout << sta.size() << endl;
//	while (!sta.empty()) {
//		cout << sta.top().x << " " << sta.top().y << endl;
//		sta.pop();
//	}

	/*stack<int> sta;
	sta.push(5);
	sta.push(-2);
	sta.push(0);
	sta.push(99);
	cout << sta.size() << endl;
	cout << "sta.top ->	" << sta.top() << endl;
	while (!sta.empty()) {
		cout << sta.top() << " " << sta.size() << endl;
		sta.pop();
	}
	cout << sta.size() << endl;*/
//	return 0; 
//}


//STL -> 六大组件
// 容器、算法、容器适配器、迭代器、仿函数、空间分配器
//
//栈默认由双端队列实现的 ，是容器适配器，由一个容器二次封装得到的





#include <queue>
//queue: 队列的使用
// que.size()
// que.push()
// que.pop()
// que.front() ：队首元素
// que.empty()
// que.back()  : 队尾元素
//
//也是由双端队列封装而成的

/*
int main() {
	queue<int> que;
	que.push(5);
	que.push(-2);
	que.push(99);
	que.push(68);
	cout << que.size() << endl;
	cout << que.front() << " " << que.back() << endl;
	while (!que.empty()) {
		cout << que.front() << " " << que.back() << " " << que.size() << endl;
		que.pop();
	}
	cout << que.size() << endl;
	return 0;
}
*/




#include <deque>
//deque -> 双端队列
// 头文件： <deque>
// deque<int> que;
// ① que.size()
// ② que.push_back(x)  / que.push_front(x)
// ③ que.pop_back(x)  / que.pop_front(x)
// ④ que.back()  / que.front()



/*
int main() {
	deque<int> que;
	que.push_back(5);
	que.push_back(-2);
	que.push_front(99);
	que.push_front(88);
	que.push_back(16);
	que.push_front(-9);
	cout << que.size() << endl;
	cout << que.front() << " " << que.back() << endl;
	que.pop_front();     //删除队首元素
	cout << que.front() << endl;
	que.pop_back();     //删除队尾元素
	cout << que.back() << endl;
	cout << que.size() << endl;

	for (int i = 0; i < que.size(); i++) {
		cout << que[i] << " ";
		que[i] = 1;
	}
	cout << endl;
	cout << que.front() << " " << que.back() << endl;
	return 0;
}
*/



//deque(双端队列) -> 如何内部实现
//本体是一个类似指针表的结构，所有数据存在外面，我们去访问数据的时候通过指针表去计算出数据对应的位置，去进行直接的访问
//所以说他的随机访问是O(1)的，是常数级的，并且从头插从尾插从头删从尾删都是常数级的





//优先队列 -> 堆heap  ：用数组模拟的树
// 入队 -> 随意 ->复杂度是对数
// 对内的每个元素 -> 优先级最高的元素
// 出队 -> 对数

// priority_queue -> 优先队列
// 头文件: <queue>
// priority_queue<int> que;
// ① que.size()
// ② que.push(x)
// ③ que.pop()
// ④ que.top()  访问堆顶元素（队首元素）
// ⑤ que.empty()
//


//大顶堆（数大的优先级高）从大到小
#include <queue>
/*
int main() {
	priority_queue<int> que;
	que.push(5);
	que.push(-2);
	que.push(99);
	que.push(19);
	que.push(29);
	cout << que.size() << " " << que.top() << endl;
	while (!que.empty()) {
		cout << que.top() << " ";
		que.pop();
	}
	cout << endl << que.size() << endl;


	return 0;
}
*/


//小顶端  从小到大
/*
int main() {
	priority_queue<int, vector<int>, greater<int> > que;
	//greater<int> -> 小顶堆     ;less<int> -> 大顶堆
	que.push(5);
	que.push(-2);
	que.push(99);
	que.push(19);
	que.push(29);
	cout << que.size() << " " << que.top() << endl;
	while (!que.empty()) {
		cout << que.top() << " ";
		que.pop();
	}
	cout << endl << que.size() << endl;
	return 0;
}
*/




//优先队列的自定义类型
//所有需要进行比较的容器结构在自定义的时候一定要指定比较规则，否则就会报错
// ①运算符重载  ： 只能重载小于号 
// ②仿函数
// 
//优先队列属于容器适配器


/*
struct node {
	int x, y;
	bool operator< (const node& b) const {
		return this->x > b.x;
	}
};  // ①运算符重载  ： 只能重载小于号

int main() {
	priority_queue<node> que;
	que.push((node){ 5, 6 });
	que.push((node){ 9, -2 });
	que.push((node){ 1, 99 });
	cout << que.size() << endl;  //优先队列中元素的数量
	while (!que.empty()) {
		cout << que.top().x << " " << que.top().y << endl; //输出堆顶元素的x值和堆顶元素的y值
		que.pop();  //将堆顶元素弹出
	}
	return 0;
}
*/


// ②仿函数
struct node {
	int x, y;
};

struct cmp {
	bool operator()(const node& a, const node& b) {
		return a.x > b.x;
	}
};
 
int main() {
	priority_queue<node, vector<node>, cmp> que;
	que.push((node) { 5, 6 });
	que.push((node) { 9, -2 });
	que.push((node) { 1, 99 });
	cout << que.size() << endl;  //优先队列中元素的数量
	while (!que.empty()) {
		cout << que.top().x << " " << que.top().y << endl; //输出堆顶元素的x值和堆顶元素的y值
		que.pop();  //将堆顶元素弹出
	}
	return 0;
}