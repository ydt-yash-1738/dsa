#include<bits/stdc++.h>
using namespace std;

int reverse_num(int n){
    int x=n;
    long rev;
    while (x!=0)
    {
        rev=rev*10+x%10;
        x=x/10;
    }
    return rev;
    
}
int main(){
    int a;
    cout<<"Enter the number to check palindrome: ";
    cin>>a;
    int ans;
    ans=reverse_num(a);
    
    if (a<0)
    {
        cout<<false;
    }
    
    
    else if (a==ans)
    {
        cout<<true;
    }
   
    else
    {
        cout<<"Number is not a palindrome";
    }
  
    
    return 0;
}
    