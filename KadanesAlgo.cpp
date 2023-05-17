#include<bits/stdc++.h>
using namespace std;

int Kadane(int arr[], int n){
    int sum=0;
    long long maxi=LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        if(sum>maxi) maxi=sum;
        if(sum<0) sum=0;
    }
    return maxi;
}

int main(){
    int a[8]={-2,-3,4,-1,-2,1,5,-3};
    int ans=Kadane(a,8);
    cout<<ans<<endl;
    return 0;
}