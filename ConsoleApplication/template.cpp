#include "stdafx.h"
#include "hello.h"

#include <iostream>
using namespace std;

//泛型编程：独立于任何特定类型的方式编写代码
//模板是泛型编程的基础
//1、模板使程序员能够快速建立具有类型安全的类库集合和函数集合，它的实现，方便了大规模的软件开发
//2、现有的框架大都使用了模板  MFC
//3、雷模板和函数模板


//函数模板   typename  class
template<typename T>
T abs(T x) {
	return x < 0 ? x : -x;
}

int main() {
	int n = 5;
	cout << abs(n) << endl;
	return 0;
}
