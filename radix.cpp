//#include <iostream>
//#include <climits>
//
//using namespace std;
//
//
//int getMax(int* arr, int size)
//{
//    int max = arr[0];
//    for (int i = 1; i < size; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//
//int getMaxForCountArray(int* array, int size, int position)
//{
//    int max = INT_MIN;
//    for (int i = 0; i < size; i++)
//    {
//        max = array[i] / position % 10 > max ? (array[i] / position) % 10 : max;
//    }
//    return max;
//}
//
//
//void countSort(int* arr, int size, int sizeOfCount, int pos)
//{
//    int* count = new int[sizeOfCount + 1];
//    for (int i = 0; i <= sizeOfCount; i++)
//    {
//        count[i] = 0;
//    }
//    for (int i = 0; i < size; i++)
//    {
//        ++count[(arr[i] / pos) % 10];
//    }
//
//    for (int i = 1; i <= sizeOfCount; i++)
//    {
//        count[i] = count[i] + count[i - 1];
//    }
//
//    int* newArr = new int[size];
//    for (int i = size- 1; i >= 0; i--)
//    {
//        newArr[--count[(arr[i] / pos) % 10]] = arr[i];
//    }
//
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = newArr[i];
//    }
//
//}
//
//void radixSort(int* array, int size)
//{
//    int maxElement = getMax(array, size);
//    int pos;
//    for (pos = 1; maxElement / pos > 0;)
//    {
//        int sizeOfCount = getMaxForCountArray(array, size, pos);
//        countSort(array, size, sizeOfCount, pos);
//        pos = pos * 10;
//    }
//
//}
//
//int main()
//{
//    int size;
//    int* array;
//    cout << "Size of Array : ";
//    cin >> size;
//    array = new int[size];
//    cout << "Elements of Array : ";
//    for (int i = 0; i < size; i++)
//    {
//
//        cin >> array[i];
//    }
//
//    radixSort(array, size);
//
//    cout << "\nDisplaying Elements of Array\n";
//    for (int i = 0; i < size; i++)
//    {
//        cout << array[i] << " ";
//    }
//}