
#define CREATEDELL_API_DU _declspec(dllexport)

#include <iostream>
#include "DLL1.h"
using namespace std;
//�����к���ʵ�� 
void animal::getWide(int x) {
	wide = x;
}
void CREATEDELL_API_DU animal::getHigh(int y) {
	high = y;
}//����cat���������ʵ��
int CREATEDELL_API_DU cat::outDate() {
	return (wide + high); wide += wide; high += high;
}//����dog�������ʵ��
int CREATEDELL_API_DU dog::outDate() {
	return (wide - high);
}//������ʵ��
int CREATEDELL_API_DU exportDate() {
	return 666;
}