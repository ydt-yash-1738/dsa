// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     if(n==0) return 0;
//     if (n==1)
//     cout<<"0 1";
//     int fib[n+1];
//     fib[0]=0;
//     fib[1]=1;
//     for (int i = 2; i <= n; i++)
//     {
//         fib[i]=fib[i-1]+fib[i-2];
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<fib[i]<<" ";
//     }
    
    
//     return 0;
// }
//0 1 1 2 3 5 8 13 21

#include <bits/stdc++.h>
using namespace std;

int main(){
        int a=0, b=1, c;
        for(int i=0; i<n-1; i++){
                c=a+b;
                a=b;
                b=c;
        }
        return c; //will return the number of corresponding index
}
//0 1 1 2 3 5 8 13 21
