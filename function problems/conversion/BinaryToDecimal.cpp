#include<iostream>
#include<stdio.h>
using namespace std;
int BinaryToDecimal(int num){
    int ans=0;
    int x=1;
    int lastDigit=0;
    while(num){
        lastDigit=num%10;
        ans = ans + lastDigit*x;
        x*=2;
        num/=10;
    }
    return ans;
}
int main(){
    int n;
    system("CLS");
    cout<<"Enter the Binary number to convert: "<<endl;
    cin>>n;
     cout<<"The Decimal Representation is:\n"<<BinaryToDecimal(n);
    return 0;
}