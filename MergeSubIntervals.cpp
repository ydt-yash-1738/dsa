//Function ONLY (BRUTE)
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> MergeInt(vector<vector<int>> &arr){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
    int start=arr[i][0];
    int end=arr[i][1];
    if(!ans.empty() && end<=ans.back()[1]) continue;
    for (int j = i+1; j < n; j++)
    {
        if(arr[j][0]<=end) end=max(end,arr[i][j]);
        else break;
    }
    ans.push_back({start,end});
    }
    return ans;
}

//OPTIMAL
vector<vector<int>> MergeInt(vector<vector<int>> &arr){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr.empty() || ans.back()[1]<arr[i][0])
        {
            ans.push_back(arr[i]);
        }
        else
        {
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
        
    }
    return ans;
    
}    

