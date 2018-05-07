// ConsoleApplication.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "hello.h"
#include "structAll.h"
#include <iostream> 
using namespace std;

int main()
{
	hello();
	
	//数据结构的长度
	descLimit();
	
	Box box;
	box.length = 8.8;

	return 0;
}

//面向对象
class Box{
	private:
		double length;   // 盒子的长度
		double breadth;  // 盒子的宽度
		double height;   // 盒子的高度
};


