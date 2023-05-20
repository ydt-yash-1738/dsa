#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n){
    int low=0;
    int high =n-1;
    while(low<high){
        int mid=(low+high)/2;
        if(mid==0)
        return arr[0]>=arr[1]?arr[0]:arr[1];
        if(mid==n-1)
        return arr[n-1]>=arr[n-2]?arr[n-1]:arr[n-2];
        if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
            return arr[mid];
        }
        if(arr[mid]<arr[mid-1]){
            high=mid-1;
        }
        if(arr[mid]>arr[mid-1]){
            low=mid+1;
        }
    }
    return arr[low];
}

int main(){
    int arr1[5]={3,3,4,8,1};
    int ans=peakElement(arr1,5);
    cout<<ans<<endl;
    return 0;
}