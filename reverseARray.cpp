#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[], int n){
    
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
    
}
void reversearr(int arr[], int n){
    int p1=0, p2=n-1;
    while (p1<p2)
    {
        swap(arr[p1], arr[p2]);
        p1++; p2--;
    }
    printarr(arr,n);

}
int main(){
    int n=5;
    int arr[]={4,2,6,3,8};
    reversearr(arr,n);
    return 0;
    
}

