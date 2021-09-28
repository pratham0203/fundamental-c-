#include<iostream>
#include<stdio.h>
using namespace std;
int DecimalToBinary(int num){
    int ans=0;
    int x=1;
    int lastDigit=0;
    while(x<=num){
        x=x*2;
    }
    x=x/2;
    while(x){
        lastDigit = num / x;
        num = num - lastDigit*x;
        x = x/2;        
        ans = ans*10 +lastDigit;
    }
    return ans;
}
int main(){
    int n;
    system("CLS");
    cout<<"Enter the Decimal number to convert: "<<endl;
    cin>>n;
    cout<<"The Binary Representation is:\n"<<DecimalToBinary(n);
    return 0;
}