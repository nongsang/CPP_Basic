#include <iostream>
using namespace std;

int main()
{
	//int *pData = &3;	// ����� ������ ������ �� �� ����.
	//int &rData = 3;	// ����� ���� ���� �Ұ���
	//int &rData;		// ������ ������ �����Ƿ� �Ұ���

	int nData = 10;
	
	cout << "nData : " << nData << endl;
	cout << "nData �ּ� : " << &nData << endl;

	cout << endl;

	int &ref = nData;

	ref = 20;
	cout << "ref : " << ref << endl;
	cout << "ref �ּ� : " << &ref << endl;
	cout << "nData : " << nData << endl;
	cout << "nData �ּ� : " << &nData << endl;

	cout << endl;

	int* pnData = &nData;
	*pnData = 30;
	cout << "ref : " << ref << endl;
	cout << "ref �ּ� : " << &ref << endl;
	cout << "nData : " << nData << endl;
	cout << "nData �ּ� : " << &nData << endl;
	cout << "pnData : " << *pnData << endl;
	cout << "pnData �ּ� : " << &pnData << endl;
}

// 6 ~ 8��° ��
// ��� �� ������ ���� ������ ����

// 17��° ��
// nData��� ������ ���� �� �ʱ�ȭ�� ����Ǿ�� ������ ������ �ʱ�ȭ�� �������� �����ش�.
// 8��° �ٰ� �����Ͽ� �����ϸ� ������ ������ �ʱ�ȭ�� �����ϰ� �Ҵ��� �Ұ������� �� �� �ִ�.

// 19��° ��
// ������ ������ ���� �ٲپ� �־���.

// 20 ~ 23��° ��
// 19��° �ٿ��� ������ ������ ���� �ٲپ� �־����� nData�� ���� �ٲ������
// ������ ������ ������ ������ �ּҰ� ����.
// �̷ν� ������ ������ ���� ������ �Ϻ��ϰ� ��ġ���� �� �� �ִ�.
// ���� ������ ������ �ʱ�ȭ�ϴ� ������ ���� ������ '����'�� ���̴� �Ͱ� ����.

// 27, 28��° ��
// ������ ����ȭ ������ ������ ���̸� �˷��ֱ� ���� ������ ���� ���� �� �� ����

// 29 ~ 34��° ��
// ref�� nData�� �Ϻ��ϰ� �Ȱ����� �̹� �˰� �ִ�.
// ������ �����Ϳ� ������ ������ ���� �ٸ���.
// nData�� ref�� �ּҴ� ���� ������ pnData�� �ּҰ� �ٸ���.
// �̴� ref�� nData�� ������ �ٿ��� �� �̶��, pnData�� ������ ������ '����' �Ŀ� ����Ű�� ��ġ�� nData�� ������ ���̴�.
// ���� �����ʹ� ������ ������ ���� �޸� ������ ���� �����ؾ� ���� �� �� �ִ�.
// �̿� ���� ������ ������ ���� ȣ��(call by reference)���� �ڼ��� �ٷ��.