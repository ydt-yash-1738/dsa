#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE (Common Error - Time limit exceeded)
vector<int> findTwoElement(vector<int> arr, int n)
{
    int missing = -1, repeating = -1;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
                count++;
        }
        if (count == 2)
            repeating = i;
        if (count == 0)
            missing = i;
        if (missing != -1 && repeating != -1)
            break;
    }
    return {repeating, missing};
}

// OPTIMIZED FUNCTION
vector<int> Findtwoelement(vector<int> arr, int n){
    long long Sn=(n * (n+1))/2;
    long long S2n=(n * (n+1) * (2*n + 1))/6;
    long long S=0, S2=0;
    for (int i = 0; i < n; i++)
    {
        S+=arr[i];
        S2+=(long long)arr[i] * (long long)arr[i];
    }
    long long val2=Sn-S2n;//x-y
    long long val1=S-S2;//x2-y2
    val2=val2/val1;//x+y
    long long x=(val1+val2)/2;
    long long y=x-val1;
    return {(int)x,(int)y};
    
}
int main()
{
    // Input code goes here
    return 0;
}
