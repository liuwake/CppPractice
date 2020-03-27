#include <iostream>
#include <windows.h>

#pragma comment(lib,"CppDll.lib")
extern "C" _declspec(dllimport) int add(int a, int b);
extern "C" _declspec(dllimport) int sub(int a, int b);
int main()
{
	int nParam1 = 9;
	int nParam2 = 3;
	int nAdd = add(nParam1, nParam2);
	int nSub = sub(nParam1, nParam2);
	std::cout << nAdd << ":" << nSub << std::endl;
	system("pause");
	return 0;
}