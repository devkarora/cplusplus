#include<iostream>
using namespace std;
int main(){
int arr[10]={1,2,-4,5,12,55};
for(int i=0;i<6;i++){
    for(int j=0;j<=6;j++){
        for(int k=i;k<j;k++){
            cout<<arr[k]<<" ";
        }
    }
    cout<<endl;
}
}

