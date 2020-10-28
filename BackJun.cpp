#include <iostream>
#include <string>

using namespace std;

/* 백준 3052*/
int main()
{
	int arr[10]{};
	int arr2[42]{};
	int count = 0;
	for (int& a : arr)
	{

		cin >> a;
		a %= 42; 
		arr2[a]++;
	}
	
	for (int i = 0; i < 42; i++)
	{
		if (arr2[i] != 0)
			count++;
	}

	cout << count;

	return 0;
}

/*백준 2577*/
//int main()
//{
//	int a, b, c;
//
//	cin >> a >> b >> c;
//
//	long result = a * b * c;
//	int arr[10]{};
//
//	string astring = to_string(result);
//	for (const char a : astring)
//	{
//		for(int i = 0; i < 10; i++)
//		if (a == '0' + i) arr[i]++;
//
//	}
//	
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//
//	return 0;
//}
/*백준 2562*/
//int main()
//{
//	int arr[10];
//
//	for(int i = 0; i < 9; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int max = arr[0], position = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//
//		if (max == arr[i])
//		{
//			position = i + 1;
//		}
//	}
//
//	cout << max << endl << position;
//	
//	return 0;
//}
/*백준 10818*/
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int n = 1000;
//
//	//cin >> n;
//
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 1000 + 1;
//		//cin >> arr[i];
//	}
//
//	int min = arr[0], max = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (min > arr[i])
//			min = arr[i];
//		if (max < arr[i])
//			max = arr[i];
//	}
//
//	cout << min << " " << max;
//
//	delete[] arr;
//
//	return 0;
//}