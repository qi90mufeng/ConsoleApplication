#include "stdafx.h"
#include "hello.h"

#include <iostream>
using namespace std;




int hello(){
	/*
	cout    用户控制台
	cerr     错误控制台
	cin       用户控制台
	*/
	//输出   ----对代码的功能做描述
	cout << "我终于来到了喜马拉雅山" << endl;

	// c++标准注释符号  //单行注释
	// 多行注释  /* code */  
	//测试时使用 #if 1 来执行测试代码，发布后使用 #if 0 来屏蔽测试代码。
	#if 0
		code
	#endif 

	return 0;
}

#if 1
int strassign(Str& str, char* ch) {
	cout << "输入" << ch << endl;

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