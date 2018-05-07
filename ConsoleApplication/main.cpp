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

int main(int argc, char *argv[])
{
	//输出
	//hello();
	//数据结构的长度
	//descLimit();
	//引用
	aliasDesc();

	//
	//using Two::inf;
	//cout << inf << endl;

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


