#include<bits/stdc++.h>
using namespace std;

int SecondLargest(int arr[], int n){
    int largest=arr[0];
    int slargest=-1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if (arr[i]>slargest && arr[i]<largest) 
        {
            slargest=arr[i];
        }
        
    }
    return slargest;
}
int SecondSmallest(int arr[], int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<smallest)    
        {
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if (arr[i]!=smallest && arr[i]<ssmallest)
        {
            ssmallest=arr[i];
        }
        
    }
    return ssmallest;
}

int main(){
    int arr[5]={7,4,5,9,0};
    int ans1=SecondLargest(arr,5);
    cout<<"The second largest element of the array is:"<<ans1<<endl;
    int ans2=SecondSmallest(arr,5);
    cout<<"The second smallest element of the array is:"<<ans2<<endl;
    return 0;
}