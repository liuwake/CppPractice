// CppConsoleTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
////Include
#include <iostream>
//Include FileAbout
#include<fstream> //ͷ�ļ�����


using namespace std;


////Test
//txt read
void TestRead()
{
    std::cout << "TestRead!\n";
    fstream f("C:\\WK\\testRead.txt", ios::out);//��дʹ�ã��ļ��������򴴽������������ԭ����
    f << 1234 << ' ' << 3.14 << 'A' << "How are you"; //д������
    f.close();//�ر��ļ���ʹ�����±�Ϊ�ɷ��ʣ�����һ�����ã�ԭ�ȵ�������Ϳ��Ա��������������ļ�
    f.open("C:\\WK\\testRead.txt", ios::in);//���ļ�������

    int i;
    double d;
    char c;
    char s[20];
    f >> i >> d >> c;               //��ȡ����
    f.getline(s, 20);
    cout << i << endl;             //��ʾ������
    cout << d << endl;
    cout << c << endl;
    cout << s << endl;
    f.close();
}
//TestRead2: but no safe,NG!
//void TestRead2()
//{
//    FILE* fout1 = NULL;
//    fout1 = fopen("C:\\WK\\testRead2.txt", "a+");
//    if (!fout1)
//        cerr << "error_S_L" << endl;
//    fprintf(fout1, "%lf\n", 233333);
//    fclose(fout1);
//}

//txt write
void WriteTest()
{
    std::cout << "TestWrite\n";
    fstream f("C:\\WK\\testRead.txt", ios::out);//��дʹ�ã��ļ��������򴴽������������ԭ����
    f << 1234 << ' ' << 3.14 << 'A' << "How are you"; //д������
    f.close();//�ر��ļ���ʹ�����±�Ϊ�ɷ��ʣ�����һ�����ã�ԭ�ȵ�������Ϳ��Ա��������������ļ�
}

//����ѭ��д��ܳ���һ��txt,ȱ��
void WriteTestC(int size)
{
    std::cout << "TestWriteC\n";
    fstream f("C:\\WK\\testWriteC.txt", ios::out);//��дʹ�ã��ļ��������򴴽������������ԭ����
    //1000*1000=1000000
    //640*640=
    for (size_t i = 0; i < size; i++)
    {
        f << i << ' '; //д������
    }   
    f.close();//�ر��ļ���ʹ�����±�Ϊ�ɷ��ʣ�����һ�����ã�ԭ�ȵ�������Ϳ��Ա��������������ļ�
    std::cout << "===== TestWriteC ALL DONE! ===== \n";
}
//Test time duration
void TimeTest()
{
    double dur;
    clock_t start, end;
    start = clock();
    WriteTestC(4096000);//dosomething
    //40w pixel = 0.9s
    //400w pixel = 9s
    end = clock();
    dur = (double)(end - start);
    printf("Use Time:%f\n", (dur / CLOCKS_PER_SEC));
}

void TimeTest2()
{
    time_t tstart, tend;
    tstart = time(0);

    tend = time(0);
    cout << "It took " << difftime(tend, tstart) * 1000 << " second(ms)." << endl;
}
//Main
int main()
{
    std::cout << "Hello World!\n";
    //TestRead();
    //TestRead2();
    //WriteTestC();
    TimeTest();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
