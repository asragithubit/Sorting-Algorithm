//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//void sort(vector<float>& bucket)
//{
//
//    int i, j;
//    int size = bucket.size();
//    if (bucket.size() == 1)
//    {
//        return;
//    }
//    bool swapped;
//    for (i = 0; i < size - 1; i++) {
//        swapped = false;
//        for (j = 0; j < size - i - 1; j++) {
//            if (bucket[j] > bucket[j + 1]) {
//                swap(bucket[j], bucket[j + 1]);
//                swapped = true;
//            }
//        }
//        if (swapped == false)
//            break;
//    }
//}
//void bucketSorting(float* array, int size)
//{
//    vector<float> bucket[10];
//    for (int i = 0; i < size; i++)
//    {
//        bucket[static_cast<int>(floor(array[i] * 10))].push_back(array[i]);
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        sort(bucket[i]);
//    }
//    int index = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        for (auto it : bucket[i])
//        {
//            array[index] = it;
//            index++;
//        }
//    }
//}
//int main()
//{
//    int size;
//    float* array;
//    cout << "Size of the array: ";
//    cin >> size;
//
//    array = new float[size];
//
//    cout << "Elements of Array:  ";
//    for (int i = 0; i < size; i++) {
//        cin >> array[i];
//    }
//
//    bucketSorting(array, size);
//
//    cout << "\nDisplaying Elements of Array:\n";
//    for (int i = 0; i < size; i++) {
//        cout << array[i] << " ";
//    }
//
//    delete[] array;
//    return 0;
//}