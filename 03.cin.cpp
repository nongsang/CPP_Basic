#include <iostream>
#include <string>

int main()
{
	int nAge;
	std::cout << "���̸� �Է��ϼ���." << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "������ �Է��ϼ���." << std::endl;
	std::cin >> szJob;

	std::string strName;
	std::cout << "�̸��� �Է��ϼ���." << std::endl;
	std::cin >> strName;

	std::cout << "�̸��� " << strName << "�̰�, " <<
		"���̴� " << nAge << "���̸�, " <<
		"������ " << szJob << "�Դϴ�." << std::endl;
}

// 6, 10, 14��° ��
// ������ �ѹ��� ����, Ȥ�� �ʱ�ȭ�� ����� �ߴ� C�� �޸�
// C++�� �߰��߰� ������ ����, �Ҵ� �� �ʱ�ȭ�� �� �� �ִ�.

// 14��° ��
// 10��° �� ���ڿ��� �޸� string�� ũ�⸦ �������� �ʾƵ� �˾Ƽ� ũ�⸦ �����ش�.