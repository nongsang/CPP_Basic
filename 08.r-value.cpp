#include <iostream>
using namespace std;

int Func(int n)
{
	int result = n * 2;
	return result;
}

int main()
{
	int n = 0;
	cout << "�Է� : ";
	cin >> n;

	int &&rData = n + 5;		// r-value ����
	cout << rData << endl;

	int &&result = Func(10);	// r-value ����

	result += 10;
	cout << result << endl;
}

// r-value �� ���� �������� �� �ǿ����� �� �����ʿ� ��ġ�� �����ڸ� ���Ѵ�.
// &&�� ����ϸ� �ȴ�.
// �̿� ���ؼ��� ���߿� �ٽ� �����Ѵ�.

// 16, 19��° ��
// r-value ������ �Ͽ� ������ �ʱ�ȭ �Ѵ�.

// 21��° ��
// r-value ���� ������ ���� ������ ��� �ȴ�.