#include <bits/stdc++.h>
using namespace std;

int countlessthanmid(vector<int> &row, int mid)
{
    int low = 0;
    int high = row.size() - 1;
    while (low <= high)
    {
        int middle = (low + high) / 2;
        if (row[middle] <= mid)
        {
            low = middle + 1;
        }
        else
        {
            high = middle - 1;
        }
    }
    return low;
}
int median(vector<vector<int>> &matrix, int R, int C)
{

    int low = 1;
    int high = 2000;
    int median = low;
    int median_position = (R * C + 1) / 2;
    while (low <= high)
    {
        int count = 0;
        int mid = low + (high - low) / 2;
        for (int i = 0; i < R; i++)
        {
            count += countlessthanmid(matrix[i], mid);
        }
        if (count < median_position)
        {
            low = mid + 1;
            median = low;
        }
        else
        {

            if (count >= median_position)
            {
                high = mid - 1;
            }
        }
    }
    return median;
}

int main()
{
    // input here
    return 0;
}