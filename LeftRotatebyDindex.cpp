#include<bits/stdc++.h>
using namespace std;

void LeftRotate(int arr[], int n, int d){
    if (n==0) return;
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int arr[5]={1,2,3,3,5};
    LeftRotate(arr,5,2);
    for(int k=0; k<5; k++){
        cout<<arr[k]<<" ";
    }
return 0;
}