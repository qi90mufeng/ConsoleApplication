#include "stdafx.h"
#include "override.h"

#include <iostream>
using namespace std;

//��������    �ܶ������л�����
//c����ͷ�ļ��� extern "C"


int square(int x) {
	return x * x;
}


float square(float x) {
	return x * x;
}

double square(double x) {
	return x * x;
}


