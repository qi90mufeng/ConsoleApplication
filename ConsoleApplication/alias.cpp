// 1����ֵ����ʱ��������ݺܴ��������������ݽ����½ϳ���ִ��ʱ��
// 2�������ô��ݣ�����������ݵĿ����������������   
//�����Ǳ����� ������ʱ�����ʼ������ʵ�ʴ�������Ҫ������������ʽ�����������øĶ�ʵ�ʾ��Ƕ�Ŀ��ĸĶ�
//Ϊ�˽������ã���Ҫ�������������  &

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

	cout << "intOne��ַ:" << &(intOne) << endl;
	cout << "rInt��ַ:" << &(rInt) << endl;

	return 0;
}