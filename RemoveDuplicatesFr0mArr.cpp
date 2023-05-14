#include<bits/stdc++.h>
using namespace std;

int RemoveDuplicates(int arr[], int n){
    int i=0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
        
    }
    return i+1;
}

int main(){
    int arr[7]={1,1,2,3,3,3,4};
    int ans=RemoveDuplicates(arr,7);
    cout<<"Number of unique elements in the given array is:";
    cout<<ans<<endl;
    return 0;
}