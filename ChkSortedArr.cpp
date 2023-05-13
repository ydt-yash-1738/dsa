#include <bits/stdc++.h>
using namespace std;

bool CheckSorted(int arr[], int n)
{
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            flag = 1;
    }
    if (flag == 1)
        return false;
    if (flag == 0)
        return true;
}

int main()
{
    int arr[5] = {3, 4, 5, 6, 7};
    int ans = CheckSorted(arr, 5);
    cout << ans;
    return 0;
}