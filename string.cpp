#define _CRT_SECURE_NO_WARING

//#include <iostream>
//#include <string>
//using namespace std;
//
//// ① s.size / s.length  ->获得字符串长度
//// getline 一次读一行 -> getline(cin,s);
//
//// ② s.find(s2); 查找s2，返回下标  ； 没找到则返回：string :: npos
////if(s.find(s2) != string ::   npos) -> 这说明找到了
////   s.find(s2,ind); -> 在s中查找s2这个子串，从某个位置查找
//
//// ③ s.insert(ind, s2);       插入
//// ④s.substr(ind, 长度);      截取
//// ⑤s.replace(ind, 长度, s2); 替换
//// 
//
//int main() {
//	string s;
//	s = string{ "abcd" } + "12345";
//	cout << s.size() << endl;
//	cout << s.find("123") << endl;
//	cout << s.find("123", 7) << endl;
//	if (s.find("123", 7) == string::npos) {
//		cout << "not find" << endl;
//	}
//	s.insert(2, "+++++");
//	cout << s << endl;
//	string s2 = s.substr(3, 9);
//	cout << s2 << endl;
//	s2.replace(1, 5, "---");
//	cout << s2 << endl;
//	return 0;
//}



