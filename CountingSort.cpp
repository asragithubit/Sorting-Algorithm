//#include <iostream>
//using namespace std;
//
//int* countingSort(int* array, int size,int max)
//{
//	int* countArray = new int[max+1];
//	for (int i = 0; i <= max; i++)
//	{
//		countArray[i] = 0;
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		countArray[array[i]]++;
//	}
//
//
//	//Finding Cumulative Sum
//	int* prefixSum = new int[max+1];
//	prefixSum[0] = countArray[0];
//
//	for (int i = 1; i <= max; i++)
//	{
//		prefixSum[i] = countArray[i] + prefixSum[i - 1];
//	}
//
//	int* outputArray = new int[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		outputArray[prefixSum[array[i]]-1] = array[i];
//		prefixSum[array[i]]--;
//	}
//
//	return  outputArray;
//
//}
//int main()
//{
//
//	int size;
//	int max = INT_MIN;
//	int* array;
//	cout << "Size Of Array : ";
//	cin >> size;
//
//	array = new int[size];
//	cout << "Elements of Array : ";
//
//	for (int i = 0; i < size; i++)
//	{
//		cin >> array[i];
//		max = array[i] > max ? array[i] : max;
//	}
//
//	int* outputArray = new int[size];
//	outputArray=countingSort(array, size, max);
//	
//	cout << "\nDisplaying Elements of Array\n";
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << outputArray[i] << " ";
//	}
//	return 0;
//}