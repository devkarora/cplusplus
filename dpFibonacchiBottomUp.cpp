#include<iostream>
using namespace std;
int dp[1000]={};
int fibo(int n){
    dp[0]=0;
    dp[1]=1;
    for(int curr=2;curr<=n;curr++){
        dp[curr]=dp[curr-1] + dp[curr-2];
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    int ans=fibo(n);
    cout<<n<<"th fibo "<<ans<<endl;
}
