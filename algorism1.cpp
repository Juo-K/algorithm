#include <iostream>

using namespace std;



void SelectionSort(int *a, int b) // 선택정렬 오름차순;
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

} 

void SelectionSortB(int * a, int b) //선택 정렬 내림차순
{
	int index, temp, max;
	for (int i = 0; i < b; i++)
	{
		max = 0;
		for (int j = i; j < b; j++)
		{
			if (max < a[j])
			{
				max = a[j];
				index = j;
			}
		}
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}

	for (int i = 0; i < b; i++)
		cout << a[i] << endl;
}

void BubbleSort(int *a, int b)  //버블 정렬
{// 배열 받을 시 포인터로 주소를 받아옴; 
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

	//옆자리 비교 검사;
}

void BubbleSortB(int * a, int b) // 버블정렬 내림차순;
{
	int i, j, temp;

	for (i = 0; i < b; i++)
	{
		for (j = 0; j < (b - 1) - i; j++)
		{
			if ( j>= 0 && a[j] < a[j + 1])
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

void InsertionSort(int *a, int b) // 삽입 정렬 오름차 순;
{
	int i, j, temp;

	for (i = 0; i < b - 1; i++)
	{
		j = i;
		while (a[j] > a[j + 1])
		{
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
			j--;
		}
	}

	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
	//
}

void InsertionSortB(int *a, int b) //삽입 정렬 내림차 순;
{
	int i, j, temp;

	for (i = 0; i < b - 1; i++)
	{
		j = i;
		while (j >= 0 && a[j] < a[j+1])
		{
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
			j--;
		}
	}

	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
}

void QuickSort(int * a, int start, int end) //오름차순 퀵정렬;
{
	if (start >= end)
		return;

	int key = start;
	int i = start + 1; //시작 다음값;
	int j = end; //마지막값; 오른쪽 출발지점
	int temp;

	while (i <= j) // 엇갈릴 때 까지 반복
	{
		while (a[i] <= a[key])//키값보다 큰 값을 만날 때 까지 이동
		{
			i++;
		}
		while (a[j] >= a[key] && j > start)
		{
			j--;
		}

		if (i > j) // 엇갈렸으면 키값을 교체
		{
			temp = a[j];
			a[j] = a[key];
			a[key] = temp;
		}
		else // 엇갈리지 않았으면 큰 값과 작은 값을 교체
		{
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}

	QuickSort(a, start, j - 1);
	QuickSort(a, j + 1, end);

}

void QuickSort2(int* data, int start, int end)
{
	if (start >= end)
		return;

	int i, j, key, temp;
	key = start;
	i = start + 1;
	j = end;
	while (i <= j)
	{
		while (data[i] < data[key])
			i++;
		while (data[j] > data[key] && j > start)
			j--;

		if (i > j)
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
	}

	QuickSort2(data, start, j - 1);
	QuickSort2(data, j+1, end);

}

int num;
int data1[1000001];

int main()
{
	//int arr[10] = { 1, 10,5,8,7,6,4,3,2,9 };
	
	
	
	//num = 1000000;
	////cin >> rnad
	//for (int i = 0; i < num; i++)
	//{
	//	data1[i] = i;
	//}

	//for (int i = 0; i < num; i++)
	//{
	//	int temp = rand() % num;

	//	while (temp == i)
	//	{
	//		temp = rand() % num;
	//	}

	//	swap(data1[i], data1[temp]);
	//}

	//QuickSort(data1, 0, num - 1);
	//
	//for (int i = 0; i < num; i++)
	//{
	//	cout << data1[i] << " ";
	//}
	
	//Algorithm1(array, 10);
	//Algorithm2(array, 10);
	//BackSSort1(array, 10);
	//InsertionSort(arr, 10);
	//InsertionSortB(arr, 10);
	//BubbleSortB(arr, 10);
	/*QuickSort(arr, 0, 9);
	
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}*/

	int ch = 78;
	cout.put(ch);

	return 0;
}


