#include "stdafx.h"
#include "override.h"

#include <iostream>
using namespace std;

//函数重载    很多面试中会碰到
//c语言头文件的 extern "C"


int square(int x) {
	return x * x;
}


float square(float x) {
	return x * x;
}

double square(double x) {
	return x * x;
}


