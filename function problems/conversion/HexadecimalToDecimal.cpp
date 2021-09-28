#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int HexadecimalToDecimal(string s){
    int x=1;
    int ans=0;
    int n = s.size();
    for(int i=n-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            ans = ans+ (s[i]-'0')*x; 
        }
        else if(s[i]>='A' && s[i]<='F'){
            ans = ans + x*(s[i]-'A'+10);
        }
        x=x*16;
    }
    return ans;
}
int main(){
    string n;
    system("CLS");
    cout<<"Enter the HexaDecimal number to convert: "<<endl;
    cin>>n;
    cout<<"The Decimal Representation is:\n"<<HexadecimalToDecimal(n);
    return 0;
}