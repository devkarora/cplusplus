#include<iostream>
using namespace std;
int main(){
int ans=0,n,pres;
float i;
cin>>n>>pres;
i=1;
int j=0;
float precision=1;
while(j<pres){

    while(i*i<n){

        i=i+precision;
    }
    i=i-precision;
    precision=precision/10;
    i=i+precision;

j++;
}
cout<<i;
}
