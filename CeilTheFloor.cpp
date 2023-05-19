#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr,arr+n);
    int floor=-1;
    int celing=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>floor && arr[i]<=x){
            floor=arr[i];
        }
        if(arr[i]<celing && arr[i]>=x){
            celing=arr[i];
        }
    }
    if(celing==INT_MAX) celing=-1;
    return {floor,celing};
}
int main(){
    int arr[10]={5,4,3,6,1,7,9,9,1,0};
    auto ans=getFloorAndCeil(arr,10,8);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}