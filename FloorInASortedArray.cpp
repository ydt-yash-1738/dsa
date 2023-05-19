#include<bits/stdc++.h>
using namespace std;

int floor(vector<long long> &arr, long long n, long long x){
    sort(arr.begin(),arr.end());
    vector<long long> ansRow;
    int ans;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<x){
            ans=arr[i];
            ans++;
            ansRow.push_back(ans);
        }
    }
    return ansRow.size()-1;
    
}