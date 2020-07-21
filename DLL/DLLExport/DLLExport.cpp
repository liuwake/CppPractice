// DLLExport.cpp : 定义 DLL 的导出函数。
//参考:https://blog.csdn.net/qq_40041064/article/details/106831801
//项目重定向到win10 10.0.17(不要用10.0.19,太新)

#include "pch.h"
#include "framework.h"
#include "DLLExport.h"


// 这是导出变量的一个示例
DLLEXPORT_API int nDLLExport=0;

// 这是导出函数的一个示例。
DLLEXPORT_API int fnDLLExport(void)
{
    return 0;
}

// 这是已导出类的构造函数。
CDLLExport::CDLLExport()
{
    return;
}

int CDLLExport::add(int a, int b)
{
	return a + b;
}
