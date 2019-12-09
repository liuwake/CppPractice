//一个Halcon Cpp Console实例
//读取一个图像,并返回宽度
//含catch exception模块

// HalconCppConsole.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//Halcon库
#include "HalconCpp.h"
using namespace HalconCpp;

//公共库
using namespace std;
#include <string>
#include <iostream>
#include"sstream"
#include <windows.h>

//自写函数头
#include "hal.h"

#include "pch.h"



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


int main()
{
	std::cout << "Hello World!\n";


	//Try
	HTuple hv_Exception;
	HTuple hv_ErrorCode;
	try
	{
		// Local iconic variables
		HObject  ho_Image;

		// Local control variables
		HTuple  hv_AcqHandle, hv_Mean, hv_Deviation;


		std::cout << "TRYING START!!!" << "\n";
		while (true)
		{
			/*OpenFramegrabber("GigEVision2", 0, 0, 0, 0, 0, 0, "progressive", -1, "default",
				-1, "false", "default", "c42f90f2b7fa_Hikvision_MVCE12010GM", 0, -1, &hv_AcqHandle);*/
			OpenFramegrabber("GigEVision2", 0, 0, 0, 0, 0, 0, "progressive", -1, "default",
				-1, "false", "default", "c42f90f4cec5_Hikvision_MVCL02041GC", 0, -1, &hv_AcqHandle);
			/*open_framegrabber('GigEVision2', 0, 0, 0, 0, 0, 0, 'progressive', -1, 'default', -1, 'false', 'default', 'c42f90f4cec5_Hikvision_MVCL02041GC', 0, -1, AcqHandle);*/
			GrabImageStart(hv_AcqHandle, -1);

			GrabImageAsync(&ho_Image, hv_AcqHandle, -1);
			//Image Acquisition 02: Do something
			Intensity(ho_Image, ho_Image, &hv_Mean, &hv_Deviation);
			
			double ImageMean = hv_Mean[0].D();
			std::cout <<  ImageMean << "\n";
			//std::cout << 100 << "\n";
			Sleep(100);
			CloseFramegrabber(hv_AcqHandle);
		}
		
		
	}
	catch (HException &except) {
		std::cout << string(except.ErrorMessage()) << "\n";
	}
	
}