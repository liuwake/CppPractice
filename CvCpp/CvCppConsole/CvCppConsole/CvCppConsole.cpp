﻿// CvCppConsole.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>


//using namespace std; 
using namespace cv;




int main()
{

    std::cout << "Hello World!\n";
	// 读入一张图片（poyanghu缩小图）    
	Mat img = imread("C:\\WK\\demo.jpg");
	//// 创建一个名为 "图片"窗口    
	//namedWindow("图片");
	//// 在窗口中显示图片   
	imshow("图片", img);
	//// 等待6000 ms后窗口自动关闭    
	waitKey(6000);
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
