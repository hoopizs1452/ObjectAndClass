#include <iostream>
using namespace std;

template<typename T>
void InsertionSort(T list[], int listSize)
{
    for (int i = 1; i < listSize; i++)
    {
        T currentElement = list[i];
        int k;
        for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
        {
            list[k + 1] = list[k];
        }
        list[k + 1] = currentElement;
    }
}

template<typename T>
T BinarySearch(const T list[], T key, int listSize)
{
    int low = 0;
    int high = listSize - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int s1, s2, s3;
    double d1, d2, d3;
    int list1[] = { 1,5,6,2,3,7,9,8,4 };
    double list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
    cin >> s1 >> s2 >> s3 >> d1 >> d2 >> d3;
    
    cout << "From:";
    for (int i = 0; i < 9; i++)
    {
        cout << list1[i];
        if (i < 8)
            cout << ", ";
        else
            cout << endl;
    }
    InsertionSort(list1, 9);
    cout << "To:";
    for (int i = 0; i < 9; i++)
    {
        cout << list1[i];
        if (i < 8)
            cout << ", ";
        else
            cout << endl;
    }

    cout << s1 << " at " << BinarySearch(list1, s1, 9) << endl;
    cout << s2 << " at " << BinarySearch(list1, s2, 9) << endl;
    cout << s3 << " at " << BinarySearch(list1, s3, 9) << endl;

    cout << "From:";
    for (int i = 0; i < 9; i++)
    {
        cout << list2[i];
        if (i < 8)
            cout << ", ";
        else
            cout << endl;
    }

    InsertionSort(list2, 9);
    cout << "To:";
    for (int i = 0; i < 9; i++)
    {
        cout << list2[i];
        if (i < 8)
            cout << ", ";
        else
            cout << endl;
    }

    cout << d1 << " at " << BinarySearch(list2, d1, 9) << endl;
    cout << d2 << " at " << BinarySearch(list2, d2, 9) << endl;
    cout << d3 << " at " << BinarySearch(list2, d3, 9) << endl;
    system("pause");
    return 0;
}