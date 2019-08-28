#include "pch.h"
#include "Test02.h"


Test02::Test02(const std::vector<std::string>& a_arrString)
	: ITest(a_arrString)
{

}

Test02::~Test02()
{

}

int Test02::Test02stoi()
{
	std::string stunum = Input<std::string>();
	int b;
	b = stoi(stunum);
	return b;
}

int Test02::Test02secretnum()
{
	int a[5];
	int c = Test02stoi();

	for (int i = 0; i < 5; i++)
	{

		a[i] = c % 10;
		c /= 10;
	}

	int d = 0;

	for (int i = 0; i < 5; i++)
	{
		d += (a[i] * a[i]);
	}

	return d;
}

void Test02::Test02print()
{
	cout << Test02secretnum() << endl;
}

void Test02::Test()
{
	Test02 a{ {"11095"} };

	// 각종 테스트 최소 5개이상
}
