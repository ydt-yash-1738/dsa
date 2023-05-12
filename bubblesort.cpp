#include<bits/stdc++.h>
using namespace std;

void bubbLesort(int n, int arr[]){
     for(int i=0; i<n-1; i++){
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }    
}
int main(){
    int arr[5]={1,5,3,2,4};
    bubbLesort(5, arr);
    for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
    }
    return 0;

}