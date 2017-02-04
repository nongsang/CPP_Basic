#include <iostream>
using namespace std;

int main()
{
	//int *pData = &3;	// 상수에 포인터 선언을 할 수 없다.
	//int &rData = 3;	// 상수에 참조 또한 불가능
	//int &rData;		// 참조의 원본이 없으므로 불가능

	int nData = 10;
	
	cout << "nData : " << nData << endl;
	cout << "nData 주소 : " << &nData << endl;

	cout << endl;

	int &ref = nData;

	ref = 20;
	cout << "ref : " << ref << endl;
	cout << "ref 주소 : " << &ref << endl;
	cout << "nData : " << nData << endl;
	cout << "nData 주소 : " << &nData << endl;

	cout << endl;

	int* pnData = &nData;
	*pnData = 30;
	cout << "ref : " << ref << endl;
	cout << "ref 주소 : " << &ref << endl;
	cout << "nData : " << nData << endl;
	cout << "nData 주소 : " << &nData << endl;
	cout << "pnData : " << *pnData << endl;
	cout << "pnData 주소 : " << &pnData << endl;
}

// 6 ~ 8번째 줄
// 상수 및 참조형 변수 선언의 오류

// 17번째 줄
// nData라는 변수의 선언 및 초기화가 선행되어야 참조형 변수의 초기화가 가능함을 보여준다.
// 8번째 줄과 연계하여 생각하면 참조형 변수는 초기화만 가능하고 할당은 불가능함을 알 수 있다.

// 19번째 줄
// 참조형 변수의 값을 바꾸어 주었다.

// 20 ~ 23번째 줄
// 19번째 줄에서 참조형 변수의 값만 바꾸어 주었으나 nData의 값도 바뀌었으며
// 원래의 변수와 참조형 변수의 주소가 같다.
// 이로써 참조형 변수와 원본 변수가 완벽하게 일치함을 알 수 있다.
// 따라서 참조형 변수를 초기화하는 행위는 원본 변수에 '별명'을 붙이는 것과 같다.

// 27, 28번째 줄
// 참조형 변수화 포인터 변수의 차이를 알려주기 위해 포인터 변수 생성 및 값 변경

// 29 ~ 34번째 줄
// ref와 nData가 완벽하게 똑같음을 이미 알고 있다.
// 하지만 포인터와 참조형 변수는 조금 다르다.
// nData와 ref의 주소는 서로 같으나 pnData의 주소가 다르다.
// 이는 ref가 nData의 별명을 붙여준 것 이라면, pnData는 포인터 변수를 '생성' 후에 가리키는 위치를 nData로 지정한 것이다.
// 따라서 포인터는 포인터 변수를 위한 메모리 공간을 따로 생성해야 함을 알 수 있다.
// 이에 대한 개념은 참조에 의한 호출(call by reference)에서 자세히 다룬다.