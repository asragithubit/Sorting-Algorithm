//#include <iostream>
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
//        if (array[i] > position / 10 && array[i] < position)
//        {
//            max = (array[i] / (position/10)) % 10 > max ? (array[i] / (position/10)) % 10 : max;
//        }
//        else
//        {
//            max = (array[i] / position) % 10 > max ? (array[i] / position) % 10 : max;
//
//        }
//        cout << array[i]<<" "<<(array[i] / position) % 10 << endl;
//        
//    }
//    cout << "After it ksldfls\n";
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
//        if (arr[i] > pos / 10 && arr[i] < pos)
//        {
//            ++count[(arr[i] / pos/10) % 10];
//        }
//        else
//        {
//            ++count[(arr[i] / pos) % 10];
//        }
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
//        if (arr[i] > pos / 10 && arr[i] < pos)
//        {
//            newArr[--count[(arr[i] / pos/10) % 10]] = arr[i];
//        }
//        else
//        {
//            newArr[--count[(arr[i] / pos) % 10]] = arr[i];
//
//        }
//    }
//
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = newArr[i];
//    }
//    /*for (int i = 0; i < size; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;*/
//}
//
//void postmanSorting(int* array, int size)
//{
//    int maxElement = getMax(array, size);
//    int tempMaxElement = maxElement;
//    int digits = 0;
//    while (tempMaxElement > 0)
//    {
//        tempMaxElement /= 10;
//        digits++;
//    }
//    int pos = pow(10, digits - 1);
//    for (; pos > 0;)
//    {
//         int sizeOfCount = getMaxForCountArray(array, size, pos);
//         countSort(array, size, sizeOfCount, pos);
//         pos = pos/10;
//    
//    }
//}
//
//int main()
//{
//	int size;
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
//    postmanSorting(array, size);
//
//    cout << "\nDisplaying Elements of Array\n";
//    for (int i = 0; i < size; i++)
//    {
//        cout << array[i] << " ";
//    }
//
//	return 0;
//}