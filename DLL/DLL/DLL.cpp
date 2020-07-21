
// DLL.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
// DLL关联
#include "../DllExport/DLLExport.h"
#pragma comment(lib, "C:/Users/iwake/OneDrive - wake/Desktop/CppPractice/DLL/x64/Debug/DLLEXPORT.lib")
//注意commnet拼写;注意绝对路径填写,否则打不开lib
//ref:C++ 无法打开文件“xxx.lib”错误的解决办法 https://blog.csdn.net/weixin_36212725/article/details/99940844 解决方法2
int main()
{
	CDLLExport dll;
    std::cout << "Hello World!\n";
	int sum = dll.add(1, 1);
	std::cout << sum << std::endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误 
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
