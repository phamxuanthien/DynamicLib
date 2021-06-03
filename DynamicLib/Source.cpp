#include "pch.h"
#include "Header.h"


int MyGroup(int group)
{
	return group;
}

void MyName(char* name)
{
	const char* str = "Pham Xuan Thien";
	strcpy_s(name, strlen(str) + 1, str);
}