//count number of characters till you read $
#include<iostream>
using namespace std;
int main(){
int count=0;
char data;
data=cin.get();
while(data!='$'){
    count++;
data=cin.get();
}
cout<<count;

}
//above code deosnt read white spaces, tab or enter\n
