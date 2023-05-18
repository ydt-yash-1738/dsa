#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,3,5,6,9,14,16,18,20};
    int n=9;  //Number of elements in the array - 1
    int key=20;
    int start=0;
    int end=n;
    int loc=-1;
    int mid=-1;
    while (start<=n-1)
    {
        mid=(start+end)/2;
        if(arr[mid]<key) {
            start=mid+1;
            }
        else if(arr[mid]>key){

         end=mid-1;
         }
        if(arr[mid]==key) {
            loc=mid;
            break;
        }
        
    }  
    if(loc==-1){
        cout<<"Element not found"<<endl;
    } 
    else cout<<"Element is at index:"<<loc<<endl;
    
}