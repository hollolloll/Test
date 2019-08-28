#pragma once

class ITest
{
public:
	ITest(const std::vector<std::string>&) {}

	virtual void Test() = 0;
};

class Test02 : ITest
{
public:

	Test02(const std::vector<std::string>& a_arrString);
	~Test02();

	int Test02stoi();
	int Test02secretnum();
	void Test02print();

	virtual void Test() override;

	//std::string stuNum;
};