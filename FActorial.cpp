#include<bits/stdc++.h>
using namespace std;

int fctrl(int n){
    int ans=1;
    if(n==0 && n==1) return 1;
    for (int i = 1; i <= n; i++)
    {
        ans=ans*i;
        
    }
    return ans;
}
int main(){
    int a,sol;
    cin>>a;
    sol=fctrl(a);
    cout<<sol;
    return 0;
}