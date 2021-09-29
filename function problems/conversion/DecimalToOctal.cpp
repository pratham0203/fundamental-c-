#include<iostream>
#include<stdio.h>
using namespace std;
int DecimalToOctal(int n){
    int ans=0;
    int x=1;
    int lastDigit=0;
    while(x<=n){
        x=x*8;
    }
    x=x/8;
    while(x>0){
        lastDigit = n / x;
        n = n - lastDigit*x;
        ans = ans*10 +lastDigit;
        x = x/8;
    }
    return ans;
}

int main(){
    int n;
    system("CLS");
    cout<<"Enter the Decimal number to convert: "<<endl;
    cin>>n;
    cout<<"The Octal Representation is:\n"<<DecimalToOctal(n);
    return 0;
}