#include "stdafx.h"
#include "hello.h"

#include <iostream>
using namespace std;

//���ͱ�̣��������κ��ض����͵ķ�ʽ��д����
//ģ���Ƿ��ͱ�̵Ļ���
//1��ģ��ʹ����Ա�ܹ����ٽ����������Ͱ�ȫ����⼯�Ϻͺ������ϣ�����ʵ�֣������˴��ģ���������
//2�����еĿ�ܴ�ʹ����ģ��  MFC
//3����ģ��ͺ���ģ��


//����ģ��   typename  class
template<typename T>
T abs(T x) {
	return x < 0 ? x : -x;
}

int main() {
	int n = 5;
	cout << abs(n) << endl;
	return 0;
}
