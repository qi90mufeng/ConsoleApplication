#include "stdafx.h"
#include "hello.h"

#include <iostream>
using namespace std;




int hello(){
	/*
	cout    �û�����̨
	cerr     �������̨
	cin       �û�����̨
	*/
	//���   ----�Դ���Ĺ���������
	cout << "������������ϲ������ɽ" << endl;

	// c++��׼ע�ͷ���  //����ע��
	// ����ע��  /* code */  
	//����ʱʹ�� #if 1 ��ִ�в��Դ��룬������ʹ�� #if 0 �����β��Դ��롣
	#if 0
		code
	#endif 

	return 0;
}

#if 1
int strassign(Str& str, char* ch) {
	cout << "����" << ch << endl;

	if (str.ch) 
		free(str.ch);
	int len = 0;
	char *c = ch;
	while (*c) {
		++len;
		++c;
	}
	if (len == 0) {
		str.ch = NULL;
		str.length = 0;
		return 1;
	}
	else {
		str.ch = (char*)malloc(sizeof(char)*(len + 1));
		if (str.ch == NULL) {
			return 0;
		}
		else {
			c = ch;
			for (size_t i = 0; i < len; ++i,++c)
			{
				str.ch[i] = *c;
			}
			str.length = len;
			return 1;
		}
	}
}
#endif 