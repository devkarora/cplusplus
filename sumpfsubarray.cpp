#include<iostream>
using namespace std;
int main(){
int arr[10]={-4,1,3,-2,6,2,-8,-9,4};
//int sum=0;
int max=0;
for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
            int sum=0;
        for(int k=i;k<=j;k++){
           sum=sum+arr[k];

        }
        if(max<sum){
            max=sum;
           }
    }
}
cout<<max;
}
