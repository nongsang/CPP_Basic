#include <iostream>
using namespace std;

int main()
{
	int *pData = new int;			// �Ϲ��� �ν��Ͻ� ���� �Ҵ� ���
	int *pNewData = new int(10);	// ���� �Ҵ�� ���ÿ� �ʱ�ȭ

	*pData = 5;		// �� �Ҵ�
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;		// ���� �Ҵ� ����
	pData = nullptr;	// nullptr�� �̿��� ������ ����

	delete pNewData;	// ���� �Ҵ� ����
	pNewData = nullptr;	// nullptr�� �̿��� ������ ����

	cout << endl;

	int *arr = new int[5];	// �迭�� ���� �Ҵ�

	for (int i = 0; i < 5; ++i)
		arr[i] = (i + i) * 10;

	for (int i = 0; i < 5; ++i)
		cout << arr[i] << endl;

	delete[] arr;
	arr = nullptr;
}

// 5��° ��
// �Ϲ����� ���� �Ҵ� ����̴�.

// 6��° ��
// ���� �Ҵ�� ���ÿ� �ʱ�ȭ�� �Ѵ�.

// 12 ~ 16��° ��
// ���� �Ҵ��� �Ͽ����� �޸� ������ �ؾ� �޸� ������ ������ �� �ִ�.
// �׸��� nullptr�� ����Ͽ� �޸� ���� �Ŀ� ������ ���� ����Ű�� �ʵ��� �Ѵ�.
// NULL�� 0���� ���ǵǾ� �����Ƿ� ������ �߻��� �� �ִ�.
// C++������ nullptr�� �ֿ�����.

// 21��° ��
// �迭�� ���� �Ҵ��Ͽ���.

// 29��° ��
// �迭���·� ���� �Ҵ��Ͽ����Ƿ� []�� ����Ͽ� �迭���·� �޸� ������ ���ش�.