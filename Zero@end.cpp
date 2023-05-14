#include<bits/stdc++.h>
using namespace std;

void Zero_end(int arr[], int n){
    int temp[n], k=0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]!=0){
        temp[k]=arr[i];
        k++;
       } 
    }
    while (k<n)
    {
        temp[k]=0;
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
    }
    
}
void optZeroEnd(int arr[], int n){
    int k=0;
    while (k<n)
    {
        if(arr[k]==0) break;
        else k=k+1;
    }
    int i=k, j=k+1;
    while (i<n && j<n)
    {
        if(arr[j]!=0){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        }
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}
int main(){
    int temp[5]={3,5,0,0,4};
    optZeroEnd(temp,5);
    
    return 0;
}