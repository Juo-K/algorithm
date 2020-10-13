#include <iostream>

using namespace std;

void Algorithm1(int *a, int b)
{

	int i, j, min, index, temp;
	for ( i = 0; i < b; i++)
	{
		min = 9999; //모든 원소보다 큰 숫자 / 아무 값;

		for (j = i; j < b; j++)
		{
			if (min > a[j])
			{
				min = a[j]; // 1 = 1; 2 = 2;
				index = j;
			}
		}

		//가장 앞에 있는 것과 최소값을 바꿈;
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}

	for (i = 0; i < b; i++)
		cout << a[i] << endl;
}


void Algorithm2(int *a, int b) // 배열 받을 시 포인터로 주소를 받아옴;
{
/*
버블 정렬

선택 정렬과 마찬가지로 직관적

옆에 있는 값과 비교해서 더 작은 값을 앞으로 보냄;

효율성이 가장 떨어짐;

*/

	int i, j, temp;
	/*int count = sizeof(a)/ sizeof(a[0]);*/

	for (i = 0; i < b; i++)
	{
		for (j = 0; j < (b - 1) - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < b; i++)
		cout << a[i] << endl;
}

int main()
{
	//i, j는 탐색용
	//min은 최소값;

	//가장 작은값 index

	


	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	
	Algorithm1(array, 10);
	//Algorithm2(array, 10);

	return 0;
}

//선택 정렬
// 가장 작은 값을 앞으로 보냄;

/*
선택 정렬의 시간 복잡도;

10 + 9 + 8 + 7+ ~ + 1
등차수열 고등연산 
10*(10 + 1) / 2 = 55;

N(N+1) / 2 

시간 복잡도 
O(N N)  

빅오표기법 =  특정한 알고리즘의 수행시간을 간략하게 표기
굉장히 느리고 비효율적
*/

