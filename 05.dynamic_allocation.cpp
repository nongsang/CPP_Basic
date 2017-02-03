#include <iostream>
using namespace std;

int main()
{
	int *pData = new int;			// 일반적 인스턴스 동적 할당 방식
	int *pNewData = new int(10);	// 동적 할당과 동시에 초기화

	*pData = 5;		// 값 할당
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;		// 동적 할당 해제
	pData = nullptr;	// nullptr로 미연의 문제를 방지

	delete pNewData;	// 동적 할당 해제
	pNewData = nullptr;	// nullptr로 미연의 문제를 방지

	cout << endl;

	int *arr = new int[5];	// 배열로 동적 할당

	for (int i = 0; i < 5; ++i)
		arr[i] = (i + i) * 10;

	for (int i = 0; i < 5; ++i)
		cout << arr[i] << endl;

	delete[] arr;
	arr = nullptr;
}

// 5번째 줄
// 일반적인 동적 할당 방식이다.

// 6번째 줄
// 동적 할당과 동시에 초기화를 한다.

// 12 ~ 16번째 줄
// 동적 할당을 하였으면 메모리 해제를 해야 메모리 누수를 방지할 수 있다.
// 그리고 nullptr을 사용하여 메모리 해제 후에 엉뚱한 곳을 가리키지 않도록 한다.
// NULL은 0으로 정의되어 있으므로 문제가 발생할 수 있다.
// C++에서는 nullptr을 애용하자.

// 21번째 줄
// 배열을 동적 할당하였다.

// 29번째 줄
// 배열형태로 동적 할당하였으므로 []를 사용하여 배열형태로 메모리 해제를 해준다.