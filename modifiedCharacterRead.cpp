//Modify the above to print total number of
//digits, whitespaces, alphabets and other
//characters till you read a
#include<iostream>
using namespace std;
int main(){
int countDigits=0,whites=0,alphabets=0,othercharacters=0;
char data;
data=cin.get();
while(data!='$'){
    if (data<=57 && data>47 ){
        countDigits++;
    }
    else if (data==32 ){
        whites++;
    }
    else if ((data<=90 && data>64) || (data<=122 && data>96 )){
        alphabets++;
    }
    else{
        othercharacters++;
    }
    data=cin.get();
}
cout<<countDigits<<" "<<whites<<" "<<alphabets<<" "<<othercharacters;
}
