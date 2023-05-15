#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
        
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int val=LinearSearch(arr, 5, 4);
    cout<<val;
    return 0;
}