#ifdef CREATEDELL_API_DU
#else                                                                            
#define CREATEDELL_API_DU _declspec(dllimport) //������ʱ��ͷ�ļ����μӱ��룬����.cpp�ļ����ȶ��壬��ͷ�ļ�����������������ⲿʹ��ʱ��Ϊdllexport�������ڲ�����ʱ����Ϊdllimport
#endif                                         

class CREATEDELL_API_DU animal              //��Ҫ�������õ��ࣨ���ࣩ
{
public:
	virtual int outDate() = 0;                 //���麯��
	void getWide(int x);
	void getHigh(int y);

protected:
	int wide;
	int high;
};


class CREATEDELL_API_DU cat :public animal      //��Ҫ�����õ��ࣨ����cat��
{
public:
	int outDate();
};


class  CREATEDELL_API_DU dog :public animal     //��Ҫ�����õ��ࣨ����dog��
{
public:
	int outDate();
};

int CREATEDELL_API_DU exportDate();             //��Ҫ�����õĺ�����������һ���������������κ�һ���ࣩ
