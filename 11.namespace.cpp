#include <iostream>

using namespace std;	// �� �κ��� �����ܺ����Ѵ�

namespace TEST
{
	int Tnum = 10;
	void TESTFunc()
	{
		cout << "TEST::TESTFunc()" << endl;
	}
}

using namespace TEST;

int main()
{
	TEST::TESTFunc();		// �Ϲ����� namespace ����
	::TESTFunc();			// using�� ����� namespace������ ����� ����
	TESTFunc();				// using�� ����� namespace������ ������ ����

	cout << endl;

	cout << TEST::Tnum << endl;	// �Ϲ����� namespace ����
	cout << ::Tnum << endl;		// using�� ����� namespace������ ����� ����
	cout << Tnum << endl;		// using�� ����� namespace������ ������ ����
	
}

// 2, 14��° ��
// using�� ����Ͽ���.

// 5 ~ 12��° ��
// ���ӽ����̽��� �����Ͽ���.
// ���ӽ����̽� �ȿ��� Tnum�� TESTFunc()�Լ��� �����Ͽ���.

// 18, 24��° ��
// ���ӽ����̽��� ������ TEST�� ���Ҹ� ȣ���ϴ� ����̴�.
// ���� ���� ������(::)�� ����Ͽ� ������ �����ϴ�.

// 19, 20, 25, 26���� ��
// using�� ����Ͽ� namespace�� �����ϴ� ����̴�.
// 14��° �� using�� ����� namespace�� ���� ���� ������(::)�� ����Ͽ� ���������,
// Ȥ�� ������� �ʰ� ���������� ���ҿ� ������ �����ϴ�.

// ����
// C++�� ��� �Լ��� namespace�� �����ִ�.
// main()�Լ������� namespace�� �����ִ�.
// ���� namespace�� �����̱� �����̴�.
// cout, cin, endl ���� std��� namespace�� �����ִ�.
// ���������� ������ �ϸ� using�� ����Ѵٴ� ���� ���ؿ� �ִ� namespace���� ����(����)���� �ø��� �۾��̶� �� �� �ִ�.
// namespace�ȿ� namespace�� �� ������ �� ������ �̸� ���ӽ����̽� �������Ƕ�� �Ѵ�.
// �Ƿ��� ���̷��� namespace�� ����ؼ� ��ġ�� �ʰ� �����ӿ�ũ�� �� ������.