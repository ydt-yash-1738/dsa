#include<bits/stdc++.h>
using namespace std;

int BuySell(int arr[], int n){
    int MinPrice=INT_MAX;
    int MaxProfit=0;
    for (int i = 0; i < n; i++)
    {
        MinPrice=min(MinPrice,arr[i]);
        MaxProfit=max(MaxProfit,arr[i]-MinPrice);
    }
    return MaxProfit;
}

int main(){
    int arr[6]={1,3,4,2,5,7};
    int ans=BuySell(arr,6);
    cout<<ans<<endl;
    return 0;
}