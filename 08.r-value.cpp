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
	cout << "입력 : ";
	cin >> n;

	int &&rData = n + 5;		// r-value 참조
	cout << rData << endl;

	int &&result = Func(10);	// r-value 참조

	result += 10;
	cout << result << endl;
}

// r-value 는 대입 연산자의 두 피연산자 중 오른쪽에 위치한 연산자를 말한다.
// &&을 사용하면 된다.
// 이에 대해서는 나중에 다시 설명한다.

// 16, 19번째 줄
// r-value 참조를 하여 변수를 초기화 한다.

// 21번째 줄
// r-value 참조 변수는 값의 변경이 허용 된다.