﻿// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

#ifndef PCH_H
#define PCH_H


#include <limits>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>

using namespace std;
template<typename T>
[[nodiscard]] T Input()
{
	T val;

	while (true)
	{
		cin >> val;
		
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');

			cout << typeid(T).name() << " : 입력 에러" << endl;
		}
		else { break; }
	}

	cin.ignore(INT_MAX, '\n');
	return val;
}

// TODO: 여기에 미리 컴파일하려는 헤더 추가

#endif //PCH_H