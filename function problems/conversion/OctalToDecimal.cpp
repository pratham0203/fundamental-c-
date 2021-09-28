#include<iostream>
#include<stdio.h>
using namespace std;
int OctalToDecimal(int num){
    int ans=0;
    int x=1;
    int lastDigit=0;
    while(num){
        lastDigit=num%10;
        ans = ans + lastDigit*x;
        x*=8;
        num/=10;
    }
    return ans;
}
int main(){
    int n;
    system("CLS");
    cout<<"Enter the Octal number to convert: "<<endl;
    cin>>n;
    cout<<"The Decimal Representation is:\n"<<OctalToDecimal(n);
    return 0;
}