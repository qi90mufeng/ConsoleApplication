// 1、按值传递时，如果传递很大的数据项，复制数据将导致较长的执行时间
// 2、按引用传递，避免大量数据的开销，可以提高性能   
//引用是别名， 在声明时必须初始化，在实际代码中主要用作函数的形式参数，对引用改动实际就是对目标的改动
//为了建立引用，需要加上引用运算符  &

#include "stdafx.h"
#include "alias.h"

#include<iostream>  
using namespace std;


int aliasDesc() {
	int intOne = 0;
	int& rInt = intOne;
	intOne = 5;

	cout << "intOne:" << intOne << endl;
	cout << "rInt:" << rInt << endl;

	rInt = 9;

	cout << "intOne:" << intOne << endl;
	cout << "rInt:" << rInt << endl;

	cout << "intOne地址:" << &(intOne) << endl;
	cout << "rInt地址:" << &(rInt) << endl;

	return 0;
}