#include <iostream>
#include <string>

int main()
{
	int nAge;
	std::cout << "나이를 입력하세요." << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "직업을 입력하세요." << std::endl;
	std::cin >> szJob;

	std::string strName;
	std::cout << "이름을 입력하세요." << std::endl;
	std::cin >> strName;

	std::cout << "이름은 " << strName << "이고, " <<
		"나이는 " << nAge << "살이며, " <<
		"직업은 " << szJob << "입니다." << std::endl;
}

// 6, 10, 14번째 줄
// 변수를 한번에 선언, 혹은 초기화를 해줘야 했던 C와 달리
// C++은 중간중간 변수를 선언, 할당 및 초기화를 할 수 있다.

// 14번째 줄
// 10번째 줄 문자열과 달리 string은 크기를 정해주지 않아도 알아서 크기를 정해준다.