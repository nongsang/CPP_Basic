#include <iostream>
#include <string>

int main()
{
	std::string strData = "Test string";
	std::cout << "Sample string" << std::endl;
	std::cout << strData << std::endl;

	strData = "New string";
	std::cout << strData << std::endl;

	std::cout << "���� " << 20 << "��" << " �Դϴ�." << std::endl;
}

// 2��° ��
// #include <string>�� �Ͽ��� string ��ü�� ����� �� �ִ�.
// #include <string>�� ���� �ʾƵ� string ��ü�� ����� �� ������ ������� ���Ѵ�.
// string�� �����̳��̸� �̴� STL���� �ڼ��ϰ� �����Ѵ�.

// ��� C++�� ���鼭 return 0;�� ���� �ʾƵ� main() �Լ��� ���������� ������ �� �ִ�.
// main() �Լ��� int��, return 0;�� ���ִ� ���� ǥ���̴�.