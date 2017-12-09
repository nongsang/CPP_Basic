#include <iostream>
#include <string>

int main()
{
	std::string strData = "Test string";
	std::cout << "Sample string" << std::endl;
	std::cout << strData << std::endl;

	strData = "New string";
	std::cout << strData << std::endl;

	std::cout << "저는 " << 20 << "살" << " 입니다." << std::endl;
}

// 2번째 줄
// #include <string>을 하여서 string 컨테이너를 출력할 수 있다.
// #include <string>를 하지 않아도 string 컨테이너를 사용할 수 있으나 출력하지 못한다.
// string은 체가 아니라 컨테이너이며 이는 STL에서 자세하게 설명한다.

// 모던 C++로 오면서 return 0;를 하지 않아도 main() 함수는 정상적으로 종료할 수 있다.
// main() 함수는 int형, return 0;를 없애는 것이 표준이다.
