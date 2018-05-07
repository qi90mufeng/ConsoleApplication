#pragma once
#ifndef HELLO_H    // 防止hello.h被重复引用
#define HELLO_H 

int hello();

typedef struct {
	char *ch;  //指向动态分配存储区首地址的字符指针
	int length; //串长度
}Str;

int strassign(Str& str, char* ch);

#endif  


