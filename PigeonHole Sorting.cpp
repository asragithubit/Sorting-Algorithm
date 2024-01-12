//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//
//void getMaxMin(int* array,int size,int& max,int& min)
//{
//    for(int i=0;i<size;i++)
//    {
//        if(array[i]>max)
//        {
//            max=array[i];
//        }
//        if(array[i]<min)
//        {
//            min=array[i];
//        }
//    }
//}
//void pigeonholeSorting(int* array,int size)
//{
//    int max=INT_MIN;
//    int min=INT_MAX;
//    getMaxMin(array,size,max,min);
//    int range=max-min;
//    vector<int> *vec=new vector<int>[range+1];
//
//    
//    for(int i=0;i<size;i++)
//    {
//        vec[array[i]-min].push_back(array[i]);
//    }
//
// 
//    int index=0;
//    for (int i = 0; i <= range; i++)
//    {
//        for (auto it : vec[i])
//        {
//            array[index] = it;
//            index++;
//        }
//    }
//}
//int main()
//{
//int size;
//int* array;
//
//    cout << "Size of the array: ";
//    cin >> size;
//
//    array = new int[size];
//
//    cout << "Elements of Array:  ";
//    for (int i = 0; i < size; i++) {
//        cin >> array[i];
//    }
//
//    pigeonholeSorting(array, size);
//
//    cout << "\nDisplaying Elements of Array:\n";
//    for (int i = 0; i < size; i++) {
//        cout << array[i] << " ";
//    }
//
//    delete[] array;
//
//    return 0;
//}