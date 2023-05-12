#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int arr[5] = {5, 3, 9, 8, 1};
    SelectionSort(arr, 5);
    cout << "[";
    for (int i = 0; i < 5; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << "]";
return 0;
}