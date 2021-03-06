// ConsoleApplication.cpp: 定义控制台应用程序的入口点。
//g++ -o test main.cpp  编译
//  ./test   执行
#include "stdafx.h"
#include "hello.h"
#include "structAll.h"
#include "alias.h"
#include <iostream> 

using namespace std;

namespace One {
	int M = 200;
	int inf = 100;
}

namespace Two {
	int M = 100;
	int inf = 200;
}

//内联函数:
//1、不能含有复杂的结构控制语句，如switch和while，否则，编译将该函数视同普通函数那样产生函数调用代码
//2、递归函数不能被用来做内联函数
//3、大多数内联函数限制在小型，被频繁调用的函数上（1-5行的小函数）
inline bool isnumber(char ch) {
	return ((ch >= '0') && (ch <= '9'));
}

//默认参数的函数 2种写法
//void foo(int i,int j = 5, int k = 10);
void foo(int i, int = 5, int = 10);

void foo(int i, int j, int k) {
	cout << i << " " << j << " " << k << endl;
}

int main(int argc, char *argv[])
{
	//输出
	//hello();
	//数据结构的长度
	//descLimit();
	//引用
	//aliasDesc();

	//
	//using Two::inf;
	//cout << inf << endl;
#if 0
	char c;
	while ((c = cin.get()) != 'q') {
		if (isnumber(c))
		{
			cout << "Your enter a digit" << endl;
		}
		else {
			cout << "Your enter a non digit" << endl;
		}
	}
#endif 

#if 1
	foo(20);
	foo(20, 30);
	foo(20, 30, 40);
#endif 

	system("pause");  //方便观察结果
	return 0;
}

//面向对象
class Box{
	public:
		double length;   // 盒子的长度
		double breadth;  // 盒子的宽度
		double height;   // 盒子的高度
};


