//Brute
#include<bits/stdc++.h>
using namespace std;

void MergeSortedArr(long long arr1[], long long arr2[], int n, int m){
    long long arr3[n+m];
    int left=0;
    int right=0;
    int index=0;
    while (left<n && right<n)
    {
        if (arr1[left]<=arr2[right])
        {
            arr3[index]=arr1[left];
            left++;
            index++;
        }
        else
        {
            arr3[index]=arr2[right];
            index++;
            right++;
        }
    }
    while (left<n)  
    {
        arr3[index++]=arr1[left++];

    }
    while (right<m)
    {
        arr3[index++]=arr2[right++];
    }
    for (int i = 0; i < n+m; i++)
    {
        if (i<n)
        {
            arr1[i]=arr3[i];
        }
        else
        {
            arr1[i-n]=arr3[i];
        }
    }
}

int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    MergeSortedArr(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}