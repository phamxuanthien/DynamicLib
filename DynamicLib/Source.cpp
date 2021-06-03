#include "pch.h"
#include <string>

extern "C" __declspec(dllexport) int MyGroup(int group)
{
	return group;
}

extern "C" __declspec(dllexport) std::string MyName(const char* name)
{
	return name;
}