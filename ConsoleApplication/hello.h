#pragma once
#ifndef HELLO_H    // ��ֹhello.h���ظ�����
#define HELLO_H 

int hello();

typedef struct {
	char *ch;  //ָ��̬����洢���׵�ַ���ַ�ָ��
	int length; //������
}Str;

int strassign(Str& str, char* ch);

#endif  


